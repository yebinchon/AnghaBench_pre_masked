
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {scalar_t__ pc_magic; int pc_fd; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool
FUNC_4(struct procstat_core *VAR_1, void *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 FUNC_0(VAR_1->pc_magic == VAR_0);

 VAR_4 = FUNC_1(VAR_1->pc_fd, VAR_2, VAR_3);
 if (VAR_4 == -1) {
  FUNC_2("core: read");
  return (0);
 }
 if (VAR_4 < (ssize_t)VAR_3) {
  FUNC_3("core: short read");
  return (0);
 }
 return (1);
}
