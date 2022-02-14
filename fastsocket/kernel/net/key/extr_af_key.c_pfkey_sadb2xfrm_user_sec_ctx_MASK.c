
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_sec_ctx {int ctx_len; int ctx_alg; int ctx_doi; int exttype; int len; } ;
struct sadb_x_sec_ctx {int sadb_x_ctx_len; int sadb_x_ctx_alg; int sadb_x_ctx_doi; int sadb_x_sec_exttype; } ;


 int VAR_0 ;
 struct xfrm_user_sec_ctx* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xfrm_user_sec_ctx*,struct sadb_x_sec_ctx*,int) ;
 int FUNC_2 (struct sadb_x_sec_ctx*) ;

__attribute__((used)) static inline struct xfrm_user_sec_ctx *FUNC_3(struct sadb_x_sec_ctx *VAR_1)
{
 struct xfrm_user_sec_ctx *VAR_2 = ((void*)0);
 int VAR_3 = VAR_1->sadb_x_ctx_len;

 VAR_2 = FUNC_0((sizeof(*VAR_2)+VAR_3), VAR_0);

 if (!VAR_2)
  return ((void*)0);

 VAR_2->len = FUNC_2(VAR_1);
 VAR_2->exttype = VAR_1->sadb_x_sec_exttype;
 VAR_2->ctx_doi = VAR_1->sadb_x_ctx_doi;
 VAR_2->ctx_alg = VAR_1->sadb_x_ctx_alg;
 VAR_2->ctx_len = VAR_1->sadb_x_ctx_len;
 FUNC_1(VAR_2 + 1, VAR_1 + 1,
        VAR_2->ctx_len);

 return VAR_2;
}
