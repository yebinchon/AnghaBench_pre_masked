
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xfrm_state {struct xfrm_sec_ctx* security; } ;
struct xfrm_sec_ctx {scalar_t__ ctx_sid; } ;
struct sk_buff {struct sec_path* sp; } ;
struct sec_path {int len; struct xfrm_state** xvec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
     u32 *VAR_3, int VAR_4)
{
 struct sec_path *VAR_5 = VAR_2->sp;

 *VAR_3 = VAR_1;

 if (VAR_5) {
  int VAR_6, VAR_7 = 0;

  for (VAR_6 = VAR_5->len-1; VAR_6 >= 0; VAR_6--) {
   struct xfrm_state *VAR_8 = VAR_5->xvec[VAR_6];
   if (FUNC_0(VAR_8)) {
    struct xfrm_sec_ctx *VAR_9 = VAR_8->security;

    if (!VAR_7) {
     *VAR_3 = VAR_9->ctx_sid;
     VAR_7 = 1;

     if (!VAR_4)
      break;
    } else if (*VAR_3 != VAR_9->ctx_sid)
     return -VAR_0;
   }
  }
 }

 return 0;
}
