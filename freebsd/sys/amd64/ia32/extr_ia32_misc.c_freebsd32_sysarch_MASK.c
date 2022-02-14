
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uapl32 ;
struct user_segment_descriptor {int dummy; } ;
struct thread {int dummy; } ;
struct sysarch_args {scalar_t__ op; char* parms; } ;
struct i386_ldt_args32 {int num; scalar_t__ descs; int start; } ;
struct i386_ldt_args {int num; struct user_segment_descriptor* descs; int start; } ;
struct freebsd32_sysarch_args {scalar_t__ op; char* parms; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct i386_ldt_args32*,int) ;
 int FUNC_1 (struct thread*,struct sysarch_args*) ;
 int FUNC_2 (struct thread*,struct sysarch_args*,int ) ;

int
FUNC_3(struct thread *VAR_3, struct freebsd32_sysarch_args *VAR_4)
{
 struct sysarch_args VAR_5;
 struct i386_ldt_args VAR_6;
 struct i386_ldt_args32 VAR_7;
 int VAR_8;

 if (VAR_4->op == VAR_1 || VAR_4->op == VAR_0) {
  if ((VAR_8 = FUNC_0(VAR_4->parms, &VAR_7, sizeof(VAR_7))) != 0)
   return (VAR_8);
  VAR_5 = VAR_4->op;
  VAR_5 = (char *)&VAR_6;
  VAR_6.start = VAR_7;
  VAR_6.descs = (struct user_segment_descriptor *)(uintptr_t)
      VAR_7;
  VAR_6.num = VAR_7;
  return (FUNC_2(VAR_3, &VAR_5, VAR_2));
 } else {
  VAR_5 = VAR_4->op;
  VAR_5 = VAR_4->parms;
  return (FUNC_1(VAR_3, &VAR_5));
 }
}
