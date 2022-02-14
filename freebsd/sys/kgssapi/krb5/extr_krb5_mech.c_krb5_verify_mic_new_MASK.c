
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {int m_len; int* m_data; struct mbuf* m_next; } ;
struct krb5_key_state {TYPE_1__* ks_class; } ;
struct TYPE_4__ {int km_flags; } ;
struct krb5_context {int kc_more_flags; TYPE_2__ kc_msg_order; struct krb5_key_state* kc_recv_sign_Kc; } ;
struct TYPE_3__ {size_t ec_checksumlen; } ;
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
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*,int*,size_t) ;
 scalar_t__ FUNC_3 (struct krb5_context*) ;
 int FUNC_4 (struct krb5_key_state*,int ,struct mbuf*,int ,size_t,size_t) ;
 int FUNC_5 (struct krb5_context*,int) ;
 int FUNC_6 (struct mbuf*,int,size_t,char*) ;
 size_t FUNC_7 (struct mbuf*,struct mbuf**) ;

__attribute__((used)) static OM_uint32
FUNC_8(struct krb5_context *VAR_9, struct mbuf *VAR_10, struct mbuf *VAR_11)
{
 OM_uint32 VAR_12;
 struct krb5_key_state *VAR_13 = VAR_9->kc_recv_sign_Kc;
 struct mbuf *VAR_14;
 uint8_t *VAR_15;
 int VAR_16;
 size_t VAR_17, VAR_18;
 char VAR_19[32];

 VAR_17 = FUNC_7(VAR_10, &VAR_14);
 VAR_18 = VAR_13->ks_class->ec_checksumlen;

 FUNC_1(VAR_11->m_next == ((void*)0), ("MIC should be contiguous"));
 if (VAR_11->m_len != 16 + VAR_18)
  return (VAR_5);
 VAR_15 = VAR_11->m_data;


 if (VAR_15[0] != 0x04)
  return (VAR_5);
 if (VAR_15[1] != 0x04)
  return (VAR_5);


 VAR_16 = 0;
 if (FUNC_3(VAR_9))
  VAR_16 |= VAR_8;
 if (VAR_9->kc_more_flags & VAR_0)
  VAR_16 |= VAR_7;
 if (VAR_15[2] != VAR_16)
  return (VAR_5);


 if (VAR_15[3] != 0xff)
  return (VAR_5);
 if (VAR_15[4] != 0xff)
  return (VAR_5);
 if (VAR_15[5] != 0xff)
  return (VAR_5);
 if (VAR_15[6] != 0xff)
  return (VAR_5);
 if (VAR_15[7] != 0xff)
  return (VAR_5);


 if (VAR_9->kc_msg_order.km_flags &
  (VAR_1 | VAR_2)) {
  uint32_t VAR_20;
  if (VAR_15[8] || VAR_15[9] || VAR_15[10] || VAR_15[11]) {
   VAR_12 = VAR_6;
  } else {
   VAR_20 = (VAR_15[12] << 24) | (VAR_15[13] << 16)
    | (VAR_15[14] << 8) | VAR_15[15];
   VAR_12 = FUNC_5(VAR_9, VAR_20);
  }
  if (FUNC_0(VAR_12))
   return (VAR_12);
 } else {
  VAR_12 = VAR_4;
 }







 FUNC_6(VAR_11, 16, VAR_18, VAR_19);
 VAR_14->m_next = VAR_11;
 FUNC_4(VAR_13, 0, VAR_10, 0, VAR_17 + 16, VAR_18);
 VAR_14->m_next = ((void*)0);
 if (FUNC_2(VAR_19, VAR_15 + 16, VAR_18)) {
  return (VAR_3);
 }

 return (VAR_4);
}
