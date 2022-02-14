
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct task_security_struct {int sockcreate_sid; int keycreate_sid; int create_sid; int exec_sid; int osid; int sid; } ;
struct TYPE_2__ {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct task_struct*) ;
 struct task_struct* VAR_2 ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char**,unsigned int*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_3,
          char *VAR_4, char **VAR_5)
{
 const struct task_security_struct *VAR_6;
 u32 VAR_7;
 int VAR_8;
 unsigned VAR_9;

 if (VAR_2 != VAR_3) {
  VAR_8 = FUNC_1(VAR_3, VAR_1);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_2();
 VAR_6 = FUNC_0(VAR_3)->security;

 if (!FUNC_5(VAR_4, "current"))
  VAR_7 = VAR_6->sid;
 else if (!FUNC_5(VAR_4, "prev"))
  VAR_7 = VAR_6->osid;
 else if (!FUNC_5(VAR_4, "exec"))
  VAR_7 = VAR_6->exec_sid;
 else if (!FUNC_5(VAR_4, "fscreate"))
  VAR_7 = VAR_6->create_sid;
 else if (!FUNC_5(VAR_4, "keycreate"))
  VAR_7 = VAR_6->keycreate_sid;
 else if (!FUNC_5(VAR_4, "sockcreate"))
  VAR_7 = VAR_6->sockcreate_sid;
 else
  goto invalid;
 FUNC_3();

 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_4(VAR_7, VAR_5, &VAR_9);
 if (VAR_8)
  return VAR_8;
 return VAR_9;

invalid:
 FUNC_3();
 return -VAR_0;
}
