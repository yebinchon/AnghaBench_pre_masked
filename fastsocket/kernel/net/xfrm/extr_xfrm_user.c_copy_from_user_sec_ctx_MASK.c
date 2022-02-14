
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_policy {int security; } ;
struct nlattr {int dummy; } ;


 size_t VAR_0 ;
 struct xfrm_user_sec_ctx* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int *,struct xfrm_user_sec_ctx*) ;

__attribute__((used)) static int FUNC_2(struct xfrm_policy *VAR_1, struct nlattr **VAR_2)
{
 struct nlattr *VAR_3 = VAR_2[VAR_0];
 struct xfrm_user_sec_ctx *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 return FUNC_1(&VAR_1->security, VAR_4);
}
