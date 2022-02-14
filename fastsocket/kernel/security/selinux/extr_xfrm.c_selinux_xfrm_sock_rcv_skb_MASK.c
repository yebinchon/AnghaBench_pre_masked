
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xfrm_state {struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {int ctx_sid; } ;
struct sk_buff {struct sec_path* sp; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;
struct common_audit_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_1 (struct xfrm_state*) ;

int FUNC_2(u32 VAR_3, struct sk_buff *VAR_4,
    struct common_audit_data *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct sec_path *VAR_8;
 u32 VAR_9 = VAR_2;

 VAR_8 = VAR_4->sp;

 if (VAR_8) {
  for (VAR_6 = 0; VAR_6 < VAR_8->len; VAR_6++) {
   struct xfrm_state *VAR_10 = VAR_8->xvec[VAR_6];

   if (VAR_10 && FUNC_1(VAR_10)) {
    struct xfrm_sec_ctx *VAR_11 = VAR_10->security;
    VAR_9 = VAR_11->ctx_sid;
    break;
   }
  }
 }
 VAR_7 = FUNC_0(VAR_3, VAR_9, VAR_1,
     VAR_0, VAR_5);

 return VAR_7;
}
