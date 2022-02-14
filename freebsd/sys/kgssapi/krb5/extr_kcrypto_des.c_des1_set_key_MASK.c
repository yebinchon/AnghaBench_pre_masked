
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct krb5_key_state {void* ks_key; TYPE_1__* ks_class; struct des1_state* ks_priv; } ;
struct des1_state {scalar_t__ ds_session; } ;
struct cryptoini {int cri_klen; int * cri_next; void* cri_key; scalar_t__ cri_mlen; int cri_alg; } ;
typedef int cri ;
struct TYPE_2__ {int ec_keylen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void const*,void*,int ) ;
 int FUNC_1 (struct cryptoini*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__*,struct cryptoini*,int) ;

__attribute__((used)) static void
FUNC_4(struct krb5_key_state *VAR_3, const void *VAR_4)
{
 void *VAR_5 = VAR_3->ks_key;
 struct des1_state *VAR_6 = VAR_3->ks_priv;
 struct cryptoini VAR_7[1];

 if (VAR_5 != VAR_4)
  FUNC_0(VAR_4, VAR_5, VAR_3->ks_class->ec_keylen);

 if (VAR_6->ds_session)
  FUNC_2(VAR_6->ds_session);

 FUNC_1(VAR_7, sizeof(VAR_7));

 VAR_7[0].cri_alg = VAR_2;
 VAR_7[0].cri_klen = 64;
 VAR_7[0].cri_mlen = 0;
 VAR_7[0].cri_key = VAR_3->ks_key;
 VAR_7[0].cri_next = ((void*)0);

 FUNC_3(&VAR_6->ds_session, VAR_7,
     VAR_0 | VAR_1);
}
