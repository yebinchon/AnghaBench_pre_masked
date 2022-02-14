
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_sec_ctx {int len; int ctx_len; int ctx_alg; int ctx_doi; int exttype; } ;
struct xfrm_sec_ctx {int ctx_len; int ctx_str; int ctx_alg; int ctx_doi; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfrm_user_sec_ctx*,int ,int) ;
 struct xfrm_user_sec_ctx* FUNC_1 (struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct xfrm_sec_ctx *VAR_2, struct sk_buff *VAR_3)
{
 struct xfrm_user_sec_ctx *VAR_4;
 struct nlattr *VAR_5;
 int VAR_6 = sizeof(*VAR_4) + VAR_2->ctx_len;

 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_6);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_5);
 VAR_4->exttype = VAR_1;
 VAR_4->len = VAR_6;
 VAR_4->ctx_doi = VAR_2->ctx_doi;
 VAR_4->ctx_alg = VAR_2->ctx_alg;
 VAR_4->ctx_len = VAR_2->ctx_len;
 FUNC_0(VAR_4 + 1, VAR_2->ctx_str, VAR_2->ctx_len);

 return 0;
}
