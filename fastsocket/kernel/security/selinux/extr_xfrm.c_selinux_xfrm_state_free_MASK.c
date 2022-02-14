
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {int dummy; } ;


 int FUNC_0 (struct xfrm_sec_ctx*) ;

void FUNC_1(struct xfrm_state *VAR_0)
{
 struct xfrm_sec_ctx *VAR_1 = VAR_0->security;
 FUNC_0(VAR_1);
}
