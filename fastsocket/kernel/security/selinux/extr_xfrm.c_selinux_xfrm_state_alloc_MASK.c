
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_state {int security; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct xfrm_user_sec_ctx*,int ) ;

int FUNC_3(struct xfrm_state *VAR_1, struct xfrm_user_sec_ctx *VAR_2,
  u32 VAR_3)
{
 int VAR_4;

 FUNC_0(!VAR_1);

 VAR_4 = FUNC_2(&VAR_1->security, VAR_2, VAR_3);
 if (VAR_4 == 0)
  FUNC_1(&VAR_0);
 return VAR_4;
}
