
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_sec_ctx {int ctx_len; struct xfrm_sec_ctx* ctx_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_sec_ctx* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xfrm_sec_ctx*,struct xfrm_sec_ctx*,int) ;

int FUNC_2(struct xfrm_sec_ctx *VAR_2,
         struct xfrm_sec_ctx **VAR_3)
{
 struct xfrm_sec_ctx *VAR_4;

 if (VAR_2) {
  VAR_4 = FUNC_0(sizeof(*VAR_2) + VAR_2->ctx_len,
      VAR_1);
  if (!VAR_4)
   return -VAR_0;

  FUNC_1(VAR_4, VAR_2, sizeof(*VAR_4));
  FUNC_1(VAR_4->ctx_str, VAR_2->ctx_str, VAR_4->ctx_len);
  *VAR_3 = VAR_4;
 }
 return 0;
}
