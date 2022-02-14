
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptrace_lwpinfo {int dummy; } ;
struct procstat_core {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (void*) ;
 struct ptrace_lwpinfo* FUNC_2 (struct procstat_core*,int ,void*,size_t*) ;
 unsigned int FUNC_3 (struct procstat_core*,int ) ;

__attribute__((used)) static struct ptrace_lwpinfo *
FUNC_4(struct procstat_core *VAR_1, unsigned int *VAR_2)
{
 void *VAR_3;
 struct ptrace_lwpinfo *VAR_4;
 unsigned int VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_0);
 if (VAR_5 == 0)
  return (((void*)0));

 VAR_6 = VAR_5 * sizeof(*VAR_4);
 VAR_3 = FUNC_0(1, VAR_6);
 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_3, &VAR_6);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }
 *VAR_2 = VAR_6 / sizeof(*VAR_4);
 return (VAR_4);
}
