
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {int m_len; int* m_data; struct mbuf* m_next; } ;
struct krb5_key_state {struct krb5_encryption_class* ks_class; } ;
struct krb5_encryption_class {size_t ec_blocklen; size_t ec_checksumlen; } ;
struct TYPE_2__ {int km_flags; } ;
struct krb5_context {int kc_more_flags; TYPE_1__ kc_msg_order; struct krb5_key_state* kc_recv_seal_Kc; struct krb5_key_state* kc_recv_seal_Ki; struct krb5_key_state* kc_recv_seal_Ke; } ;
typedef int buf ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (struct krb5_context*) ;
 int FUNC_4 (struct krb5_key_state*,int ,struct mbuf*,int ,size_t,size_t) ;
 int FUNC_5 (struct krb5_key_state*,struct mbuf*,int ,size_t,int *,int ) ;
 int FUNC_6 (struct krb5_context*,int) ;
 int FUNC_7 (struct mbuf*,size_t) ;
 int FUNC_8 (struct mbuf*,struct mbuf*) ;
 int FUNC_9 (struct mbuf*,size_t,size_t,char*) ;
 int FUNC_10 (struct mbuf*) ;
 struct mbuf* FUNC_11 (struct mbuf*) ;
 size_t FUNC_12 (struct mbuf*,struct mbuf**) ;
 struct mbuf* FUNC_13 (struct mbuf*,int) ;
 struct mbuf* FUNC_14 (struct mbuf*,size_t,int ) ;
 int FUNC_15 (struct mbuf*,size_t) ;

__attribute__((used)) static OM_uint32
FUNC_16(struct krb5_context *VAR_11, struct mbuf **VAR_12, int *VAR_13)
{
 OM_uint32 VAR_14;
 struct krb5_key_state *VAR_15 = VAR_11->kc_recv_seal_Ke;
 struct krb5_key_state *VAR_16 = VAR_11->kc_recv_seal_Ki;
 struct krb5_key_state *VAR_17 = VAR_11->kc_recv_seal_Kc;
 const struct krb5_encryption_class *VAR_18 = VAR_15->ks_class;
 struct mbuf *VAR_19, *VAR_20, *VAR_21, *VAR_22;
 uint8_t *VAR_23, *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 size_t VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34;
 char VAR_35[32], VAR_36[32];

 VAR_19 = *VAR_12;
 VAR_32 = FUNC_12(VAR_19, &VAR_20);

 if (VAR_32 <= 16)
  return (VAR_5);
 if (VAR_19->m_len < 16) {
  VAR_19 = FUNC_13(VAR_19, 16);
  *VAR_12 = VAR_19;
 }
 VAR_23 = VAR_19->m_data;


 if (VAR_23[0] != 0x05)
  return (VAR_5);
 if (VAR_23[1] != 0x04)
  return (VAR_5);


 VAR_25 = VAR_23[2] & VAR_8;
 VAR_26 = VAR_25;
 if (FUNC_3(VAR_11))
  VAR_26 |= VAR_9;
 if (VAR_11->kc_more_flags & VAR_0)
  VAR_26 |= VAR_7;
 if (VAR_23[2] != VAR_26)
  return (VAR_5);


 if (VAR_23[3] != 0xff)
  return (VAR_5);


 VAR_27 = (VAR_23[4] << 8) + VAR_23[5];
 VAR_28 = (VAR_23[6] << 8) + VAR_23[7];


 if (VAR_11->kc_msg_order.km_flags &
  (VAR_1 | VAR_2)) {
  uint32_t VAR_37;
  if (VAR_23[8] || VAR_23[9] || VAR_23[10] || VAR_23[11]) {
   VAR_14 = VAR_6;
  } else {
   VAR_37 = (VAR_23[12] << 24) | (VAR_23[13] << 16)
    | (VAR_23[14] << 8) | VAR_23[15];
   VAR_14 = FUNC_6(VAR_11, VAR_37);
  }
  if (FUNC_0(VAR_14))
   return (VAR_14);
 } else {
  VAR_14 = VAR_4;
 }





 if (VAR_25) {
  VAR_21 = ((void*)0);
  FUNC_7(VAR_19, 16);
 } else {
  VAR_21 = VAR_19;
  *VAR_12 = VAR_19 = FUNC_14(VAR_19, 16, VAR_10);
  VAR_20 = FUNC_11(VAR_19);
 }




 if (VAR_28 > 0) {
  struct mbuf *VAR_38;
  size_t VAR_39;

  VAR_39 = VAR_32 - 16;
  if (VAR_28 <= sizeof(VAR_35) && VAR_19->m_len >= VAR_39) {



   FUNC_2(VAR_19->m_data, VAR_35, VAR_28);
   FUNC_2(VAR_19->m_data + VAR_28, VAR_19->m_data, VAR_39 - VAR_28);
   FUNC_2(VAR_35, VAR_19->m_data + VAR_39 - VAR_28, VAR_28);
  } else {




   VAR_38 = VAR_19;
   *VAR_12 = VAR_19 = FUNC_14(VAR_19, VAR_28, VAR_10);
   FUNC_8(VAR_19, VAR_38);
   VAR_20 = VAR_38;
  }
 }

 VAR_29 = VAR_18->ec_blocklen;
 VAR_30 = VAR_18->ec_checksumlen;
 if (VAR_25) {






  if (VAR_32 < 16 + 2*VAR_29 + VAR_30)
   return (VAR_5);

  VAR_31 = VAR_32 - 16 - VAR_30;
  FUNC_5(VAR_15, VAR_19, 0, VAR_31, ((void*)0), 0);







  VAR_33 = VAR_31 - VAR_29 - 16 - VAR_27;
  VAR_24 = VAR_23 + 16 + VAR_29;




  FUNC_9(VAR_19, VAR_31, VAR_30, VAR_35);
  FUNC_4(VAR_16, 0, VAR_19, 0, VAR_31, VAR_30);
  FUNC_9(VAR_19, VAR_31, VAR_30, VAR_36);

  if (FUNC_1(VAR_35, VAR_36, VAR_30))
   return (VAR_3);




  FUNC_7(VAR_19, VAR_29);
  VAR_34 = 16 + VAR_27 + VAR_30;
  if (VAR_20->m_len >= VAR_34) {
   VAR_20->m_len -= VAR_34;
  } else {
   FUNC_15(VAR_19, VAR_33);
  }
 } else {






  if (VAR_32 < 16 + VAR_30 || VAR_27 != VAR_30)
   return (VAR_5);






  VAR_33 = VAR_32 - 16 - VAR_30;






  VAR_23 = VAR_21->m_data;
  VAR_23[4] = VAR_23[5] = VAR_23[6] = VAR_23[7] = 0;

  VAR_22 = FUNC_14(VAR_19, VAR_33, VAR_10);
  VAR_20 = FUNC_11(VAR_19);
  VAR_19->m_next = VAR_21;
  VAR_21->m_next = VAR_22;

  FUNC_2(VAR_22->m_data, VAR_35, VAR_30);
  FUNC_4(VAR_17, 0, VAR_19, 0, VAR_33 + 16, VAR_30);
  if (FUNC_1(VAR_22->m_data, VAR_35, VAR_30))
   return (VAR_3);




  VAR_20->m_next = ((void*)0);
  FUNC_10(VAR_21);
 }

 if (VAR_13)
  *VAR_13 = (VAR_25 != 0);

 return (VAR_14);
}
