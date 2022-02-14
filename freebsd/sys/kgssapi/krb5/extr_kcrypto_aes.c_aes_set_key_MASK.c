
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct krb5_key_state {void* ks_key; TYPE_1__* ks_class; struct aes_state* ks_priv; } ;
struct cryptoini {int cri_mlen; int * cri_next; void* cri_key; int cri_klen; int cri_alg; } ;
struct aes_state {scalar_t__ as_session_aes; scalar_t__ as_session_sha1; } ;
typedef int cri ;
struct TYPE_2__ {int ec_keybits; int ec_keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void const*,void*,int ) ;
 int FUNC_1 (struct cryptoini*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*,struct cryptoini*,int) ;

__attribute__((used)) static void
FUNC_4(struct krb5_key_state *VAR_4, const void *VAR_5)
{
 void *VAR_6 = VAR_4->ks_key;
 struct aes_state *VAR_7 = VAR_4->ks_priv;
 struct cryptoini VAR_8;

 if (VAR_6 != VAR_5)
  FUNC_0(VAR_5, VAR_6, VAR_4->ks_class->ec_keylen);

 if (VAR_7->as_session_aes != 0)
  FUNC_2(VAR_7->as_session_aes);
 if (VAR_7->as_session_sha1 != 0)
  FUNC_2(VAR_7->as_session_sha1);




 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.cri_alg = VAR_3;
 VAR_8.cri_klen = VAR_4->ks_class->ec_keybits;
 VAR_8.cri_mlen = 12;
 VAR_8.cri_key = VAR_4->ks_key;
 VAR_8.cri_next = ((void*)0);
 FUNC_3(&VAR_7->as_session_sha1, &VAR_8,
     VAR_0 | VAR_1);

 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.cri_alg = VAR_2;
 VAR_8.cri_klen = VAR_4->ks_class->ec_keybits;
 VAR_8.cri_mlen = 0;
 VAR_8.cri_key = VAR_4->ks_key;
 VAR_8.cri_next = ((void*)0);
 FUNC_3(&VAR_7->as_session_aes, &VAR_8,
     VAR_0 | VAR_1);
}
