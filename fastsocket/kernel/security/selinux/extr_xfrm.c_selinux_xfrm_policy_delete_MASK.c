
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_sec_ctx {int ctx_sid; } ;
struct task_security_struct {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 struct task_security_struct* FUNC_2 () ;
 int VAR_2 ;

int FUNC_3(struct xfrm_sec_ctx *VAR_3)
{
 const struct task_security_struct *VAR_4 = FUNC_2();
 int VAR_5 = 0;

 if (VAR_3) {
  VAR_5 = FUNC_1(VAR_4->sid, VAR_3->ctx_sid,
      VAR_1,
      VAR_0, ((void*)0));
  if (VAR_5 == 0)
   FUNC_0(&VAR_2);
 }

 return VAR_5;
}
