
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_sec_ctx {scalar_t__ ctx_len; } ;



__attribute__((used)) static inline int FUNC_0(struct xfrm_sec_ctx *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0) {
  VAR_1 += sizeof(struct xfrm_user_sec_ctx);
  VAR_1 += VAR_0->ctx_len;
 }
 return VAR_1;
}
