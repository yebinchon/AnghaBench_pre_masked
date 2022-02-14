
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int* kd_data; } ;
struct krb5_keyblock {int kk_type; TYPE_1__ kk_key; } ;
struct krb5_key_state {int* ks_key; int ks_refs; } ;
struct krb5_encryption_class {int ec_keylen; } ;
struct krb5_context {int kc_more_flags; void* kc_recv_sign_Kc; void* kc_recv_seal_Kc; void* kc_recv_seal_Ki; void* kc_recv_seal_Ke; void* kc_send_sign_Kc; void* kc_send_seal_Kc; void* kc_send_seal_Ki; void* kc_send_seal_Ke; struct krb5_key_state* kc_encryptkey; struct krb5_key_state* kc_checksumkey; struct krb5_key_state* kc_tokenkey; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct krb5_context*,struct krb5_keyblock**) ;
 int FUNC_1 (struct krb5_context*,struct krb5_keyblock**) ;
 int FUNC_2 (struct krb5_context*) ;
 struct krb5_key_state* FUNC_3 (struct krb5_encryption_class*) ;
 struct krb5_encryption_class* FUNC_4 (int) ;
 void* FUNC_5 (struct krb5_key_state*,int ) ;
 void* FUNC_6 (struct krb5_key_state*,int ) ;
 void* FUNC_7 (struct krb5_key_state*,int ) ;
 int FUNC_8 (struct krb5_key_state*,int*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static OM_uint32
FUNC_10(struct krb5_context *VAR_8)
{
 struct krb5_keyblock *VAR_9;
 struct krb5_encryption_class *VAR_10;
 struct krb5_key_state *VAR_11;
 int VAR_12;

 VAR_9 = ((void*)0);
 FUNC_0(VAR_8, &VAR_9);
 if (!VAR_9)
  if ((VAR_8->kc_more_flags & VAR_0) == 0)
   FUNC_1(VAR_8, &VAR_9);
 if (!VAR_9)
  return (VAR_2);





 switch (VAR_9->kk_type) {
 case 131:
 case 130:
 case 129:
  VAR_12 = 131;
  break;

 case 133:
 case 132:
 case 128:
  VAR_12 = 132;
  break;

 default:
  VAR_12 = VAR_9->kk_type;
 }

 VAR_10 = FUNC_4(VAR_12);
 if (!VAR_10)
  return (VAR_2);

 VAR_11 = FUNC_3(VAR_10);
 FUNC_8(VAR_11, VAR_9->kk_key.kd_data);
 VAR_8->kc_tokenkey = VAR_11;

 switch (VAR_12) {
 case 131:
 case 135:
 case 134: {





  struct krb5_key_state *VAR_13;
  uint8_t *VAR_14, *VAR_15;
  int VAR_16;

  VAR_13 = FUNC_3(VAR_10);
  VAR_14 = VAR_13->ks_key;
  VAR_15 = VAR_11->ks_key;
  for (VAR_16 = 0; VAR_16 < VAR_10->ec_keylen; VAR_16++)
   VAR_14[VAR_16] = VAR_15[VAR_16] ^ 0xf0;
  FUNC_8(VAR_13, VAR_14);
  VAR_8->kc_encryptkey = VAR_13;
  FUNC_9(&VAR_11->ks_refs);
  VAR_8->kc_checksumkey = VAR_11;
  break;
 }

 case 132:






  VAR_8->kc_checksumkey = FUNC_5(VAR_11, VAR_7);
  FUNC_9(&VAR_11->ks_refs);
  VAR_8->kc_encryptkey = VAR_11;
  break;

 default:




  if (FUNC_2(VAR_8)) {



   VAR_8->kc_send_seal_Ke = FUNC_6(VAR_11,
       VAR_5);
   VAR_8->kc_send_seal_Ki = FUNC_7(VAR_11,
       VAR_5);
   VAR_8->kc_send_seal_Kc = FUNC_5(VAR_11,
       VAR_5);
   VAR_8->kc_send_sign_Kc = FUNC_5(VAR_11,
       VAR_6);

   VAR_8->kc_recv_seal_Ke = FUNC_6(VAR_11,
       VAR_3);
   VAR_8->kc_recv_seal_Ki = FUNC_7(VAR_11,
       VAR_3);
   VAR_8->kc_recv_seal_Kc = FUNC_5(VAR_11,
       VAR_3);
   VAR_8->kc_recv_sign_Kc = FUNC_5(VAR_11,
       VAR_4);
  } else {



   VAR_8->kc_send_seal_Ke = FUNC_6(VAR_11,
       VAR_3);
   VAR_8->kc_send_seal_Ki = FUNC_7(VAR_11,
       VAR_3);
   VAR_8->kc_send_seal_Kc = FUNC_5(VAR_11,
       VAR_3);
   VAR_8->kc_send_sign_Kc = FUNC_5(VAR_11,
       VAR_4);

   VAR_8->kc_recv_seal_Ke = FUNC_6(VAR_11,
       VAR_5);
   VAR_8->kc_recv_seal_Ki = FUNC_7(VAR_11,
       VAR_5);
   VAR_8->kc_recv_seal_Kc = FUNC_5(VAR_11,
       VAR_5);
   VAR_8->kc_recv_sign_Kc = FUNC_5(VAR_11,
       VAR_6);
  }
  break;
 }

 return (VAR_1);
}
