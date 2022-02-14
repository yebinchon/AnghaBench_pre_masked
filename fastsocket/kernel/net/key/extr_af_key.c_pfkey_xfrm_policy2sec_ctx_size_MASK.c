
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_sec_ctx {scalar_t__ ctx_len; } ;
struct xfrm_policy {struct xfrm_sec_ctx* security; } ;
struct sadb_x_sec_ctx {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct xfrm_policy *VAR_0)
{
  struct xfrm_sec_ctx *VAR_1 = VAR_0->security;

 if (VAR_1) {
  int VAR_2 = sizeof(struct sadb_x_sec_ctx);
  VAR_2 += VAR_1->ctx_len;
  return FUNC_0(VAR_2);
 }
 return 0;
}
