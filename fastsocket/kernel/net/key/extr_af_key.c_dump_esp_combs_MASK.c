
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_tmpl {int dummy; } ;
struct TYPE_2__ {int sadb_alg_maxbits; int sadb_alg_minbits; int sadb_alg_id; } ;
struct xfrm_algo_desc {TYPE_1__ desc; scalar_t__ available; } ;
struct sk_buff {int dummy; } ;
struct sadb_prop {int sadb_prop_len; int sadb_prop_replay; struct sadb_comb* sadb_prop_reserved; int sadb_prop_exttype; } ;
struct sadb_comb {int sadb_comb_hard_addtime; int sadb_comb_soft_addtime; int sadb_comb_hard_usetime; int sadb_comb_soft_usetime; int sadb_comb_encrypt_maxbits; int sadb_comb_encrypt_minbits; int sadb_comb_encrypt; int sadb_comb_auth_maxbits; int sadb_comb_auth_minbits; int sadb_comb_auth; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xfrm_tmpl*,struct xfrm_algo_desc*) ;
 scalar_t__ FUNC_1 (struct xfrm_tmpl*,struct xfrm_algo_desc*) ;
 int FUNC_2 (struct sadb_comb*,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 struct xfrm_algo_desc* FUNC_4 (int) ;
 struct xfrm_algo_desc* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1, struct xfrm_tmpl *VAR_2)
{
 struct sadb_prop *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = (struct sadb_prop*)FUNC_3(VAR_1, sizeof(struct sadb_prop));
 VAR_3->sadb_prop_len = sizeof(struct sadb_prop)/8;
 VAR_3->sadb_prop_exttype = VAR_0;
 VAR_3->sadb_prop_replay = 32;
 FUNC_2(VAR_3->sadb_prop_reserved, 0, sizeof(VAR_3->sadb_prop_reserved));

 for (VAR_4=0; ; VAR_4++) {
  struct xfrm_algo_desc *VAR_6 = FUNC_5(VAR_4);
  if (!VAR_6)
   break;

  if (!(FUNC_1(VAR_2, VAR_6) && VAR_6->available))
   continue;

  for (VAR_5 = 1; ; VAR_5++) {
   struct sadb_comb *VAR_7;
   struct xfrm_algo_desc *VAR_8 = FUNC_4(VAR_5);
   if (!VAR_8)
    break;
   if (!(FUNC_0(VAR_2, VAR_8) && VAR_8->available))
    continue;
   VAR_7 = (struct sadb_comb*)FUNC_3(VAR_1, sizeof(struct sadb_comb));
   FUNC_2(VAR_7, 0, sizeof(*VAR_7));
   VAR_3->sadb_prop_len += sizeof(struct sadb_comb)/8;
   VAR_7->sadb_comb_auth = VAR_8->desc.sadb_alg_id;
   VAR_7->sadb_comb_auth_minbits = VAR_8->desc.sadb_alg_minbits;
   VAR_7->sadb_comb_auth_maxbits = VAR_8->desc.sadb_alg_maxbits;
   VAR_7->sadb_comb_encrypt = VAR_6->desc.sadb_alg_id;
   VAR_7->sadb_comb_encrypt_minbits = VAR_6->desc.sadb_alg_minbits;
   VAR_7->sadb_comb_encrypt_maxbits = VAR_6->desc.sadb_alg_maxbits;
   VAR_7->sadb_comb_hard_addtime = 24*60*60;
   VAR_7->sadb_comb_soft_addtime = 20*60*60;
   VAR_7->sadb_comb_hard_usetime = 8*60*60;
   VAR_7->sadb_comb_soft_usetime = 7*60*60;
  }
 }
}
