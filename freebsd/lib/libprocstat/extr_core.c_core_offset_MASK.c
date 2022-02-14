
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {scalar_t__ pc_magic; int pc_fd; } ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static bool
FUNC_3(struct procstat_core *VAR_2, off_t VAR_3)
{

 FUNC_0(VAR_2->pc_magic == VAR_0);

 if (FUNC_1(VAR_2->pc_fd, VAR_3, VAR_1) == -1) {
  FUNC_2("core: lseek(%jd)", (intmax_t)VAR_3);
  return (0);
 }
 return (1);
}
