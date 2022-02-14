
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sadb_prop {scalar_t__* sadb_prop_reserved; scalar_t__ sadb_prop_replay; int sadb_prop_exttype; int sadb_prop_len; } ;
struct sadb_comb {int sadb_comb_auth_minbits; int sadb_comb_auth_maxbits; int sadb_comb_encrypt_minbits; int sadb_comb_encrypt_maxbits; scalar_t__ sadb_comb_hard_usetime; scalar_t__ sadb_comb_soft_usetime; scalar_t__ sadb_comb_hard_addtime; scalar_t__ sadb_comb_soft_addtime; scalar_t__ sadb_comb_hard_bytes; scalar_t__ sadb_comb_soft_bytes; scalar_t__ sadb_comb_hard_allocations; scalar_t__ sadb_comb_soft_allocations; scalar_t__ sadb_comb_reserved; scalar_t__ sadb_comb_flags; int sadb_comb_encrypt; int sadb_comb_auth; } ;
typedef int m_prop ;
typedef int m_comb ;
typedef int caddr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_2()
{
 struct sadb_prop VAR_7;
 struct sadb_comb *VAR_8;
 u_char VAR_9[256];
 u_int VAR_10 = sizeof(VAR_7) + sizeof(VAR_8) * 2;


 VAR_7.sadb_prop_len = FUNC_0(VAR_10);
 VAR_7.sadb_prop_exttype = VAR_4;
 VAR_7.sadb_prop_replay = 0;
 VAR_7.sadb_prop_reserved[0] = 0;
 VAR_7.sadb_prop_reserved[1] = 0;
 VAR_7.sadb_prop_reserved[2] = 0;


 VAR_8 = (struct sadb_comb *)VAR_9;
 VAR_8->sadb_comb_auth = VAR_0;
 VAR_8->sadb_comb_encrypt = VAR_3;
 VAR_8->sadb_comb_flags = 0;
 VAR_8->sadb_comb_auth_minbits = 8;
 VAR_8->sadb_comb_auth_maxbits = 96;
 VAR_8->sadb_comb_encrypt_minbits = 64;
 VAR_8->sadb_comb_encrypt_maxbits = 64;
 VAR_8->sadb_comb_reserved = 0;
 VAR_8->sadb_comb_soft_allocations = 0;
 VAR_8->sadb_comb_hard_allocations = 0;
 VAR_8->sadb_comb_soft_bytes = 0;
 VAR_8->sadb_comb_hard_bytes = 0;
 VAR_8->sadb_comb_soft_addtime = 0;
 VAR_8->sadb_comb_hard_addtime = 0;
 VAR_8->sadb_comb_soft_usetime = 0;
 VAR_8->sadb_comb_hard_usetime = 0;


 VAR_8 = (struct sadb_comb *)(VAR_9 + sizeof(*VAR_8));
 VAR_8->sadb_comb_auth = VAR_1;
 VAR_8->sadb_comb_encrypt = VAR_2;
 VAR_8->sadb_comb_flags = 0;
 VAR_8->sadb_comb_auth_minbits = 8;
 VAR_8->sadb_comb_auth_maxbits = 96;
 VAR_8->sadb_comb_encrypt_minbits = 64;
 VAR_8->sadb_comb_encrypt_maxbits = 64;
 VAR_8->sadb_comb_reserved = 0;
 VAR_8->sadb_comb_soft_allocations = 0;
 VAR_8->sadb_comb_hard_allocations = 0;
 VAR_8->sadb_comb_soft_bytes = 0;
 VAR_8->sadb_comb_hard_bytes = 0;
 VAR_8->sadb_comb_soft_addtime = 0;
 VAR_8->sadb_comb_hard_addtime = 0;
 VAR_8->sadb_comb_soft_usetime = 0;
 VAR_8->sadb_comb_hard_usetime = 0;

 FUNC_1(VAR_5, VAR_6,
   (caddr_t)&VAR_7, sizeof(struct sadb_prop),
   VAR_9, sizeof(*VAR_8) * 2);
 VAR_6 += VAR_10;

 return;
}
