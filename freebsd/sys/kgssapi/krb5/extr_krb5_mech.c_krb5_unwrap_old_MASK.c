
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {size_t* m_data; int m_len; struct mbuf* m_next; } ;
struct TYPE_6__ {int km_flags; } ;
struct krb5_context {int kc_checksumkey; TYPE_3__* kc_encryptkey; TYPE_2__ kc_msg_order; TYPE_3__* kc_tokenkey; } ;
struct TYPE_7__ {TYPE_1__* ks_class; } ;
struct TYPE_5__ {size_t ec_checksumlen; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (size_t*,size_t*,size_t) ;
 scalar_t__ FUNC_3 (struct krb5_context*) ;
 int FUNC_4 (int ,int,struct mbuf*,int ,size_t,size_t) ;
 int FUNC_5 (TYPE_3__*,struct mbuf*,int,size_t,int*,int) ;
 int FUNC_6 (struct krb5_context*,int) ;
 int* FUNC_7 (char*,size_t,struct mbuf**,size_t*,int ) ;
 int FUNC_8 (struct mbuf*,int) ;
 int FUNC_9 (struct mbuf*,size_t,size_t,int*) ;
 int FUNC_10 (struct mbuf*) ;
 int FUNC_11 (struct mbuf*) ;
 struct mbuf* FUNC_12 (struct mbuf*,size_t,int*) ;
 struct mbuf* FUNC_13 (struct mbuf*) ;
 size_t FUNC_14 (struct mbuf*,struct mbuf**) ;
 struct mbuf* FUNC_15 (struct mbuf*,int,int ) ;
 int FUNC_16 (struct mbuf*,size_t) ;
 size_t FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static OM_uint32
FUNC_18(struct krb5_context *VAR_8, struct mbuf **VAR_9, int *VAR_10,
    uint8_t VAR_11[2], uint8_t VAR_12[2])
{
 OM_uint32 VAR_13;
 struct mbuf *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 uint8_t *VAR_19, VAR_20;
 size_t VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 size_t VAR_26;
 uint8_t VAR_27[32];
 uint32_t VAR_28;
 int VAR_29, VAR_30;

 VAR_14 = *VAR_9;
 VAR_21 = FUNC_14(VAR_14, &VAR_15);

 VAR_22 = FUNC_17(VAR_8->kc_tokenkey);
 VAR_26 = VAR_8->kc_tokenkey->ks_class->ec_checksumlen;

 VAR_19 = FUNC_7("\x02\x01", VAR_22, &VAR_14, &VAR_23, VAR_7);
 *VAR_9 = VAR_14;
 if (!VAR_19)
  return (VAR_4);
 VAR_24 = VAR_23 - VAR_22;





 FUNC_8(VAR_14, VAR_19 - (uint8_t *) VAR_14->m_data);


 VAR_19 += 2;


 if (VAR_19[0] != VAR_11[0] || VAR_19[1] != VAR_11[1])
  return (VAR_4);
 VAR_19 += 2;


 if (VAR_19[0] == VAR_12[0] && VAR_19[1] == VAR_12[1])
  VAR_30 = 1;
 else if (VAR_19[0] == 0xff && VAR_19[1] == 0xff)
  VAR_30 = 0;
 else
  return (VAR_4);
 VAR_19 += 2;

 if (VAR_19[0] != 0xff || VAR_19[1] != 0xff)
  return (VAR_4);
 VAR_19 += 2;
 FUNC_5(VAR_8->kc_tokenkey, VAR_14, 8, 8, VAR_19 + 8, 8);
 if (VAR_11[0] == 0x11) {
  VAR_28 = VAR_19[3] | (VAR_19[2] << 8) | (VAR_19[1] << 16) | (VAR_19[0] << 24);
 } else {
  VAR_28 = VAR_19[0] | (VAR_19[1] << 8) | (VAR_19[2] << 16) | (VAR_19[3] << 24);
 }

 if (FUNC_3(VAR_8)) {
  VAR_20 = 0xff;
 } else {
  VAR_20 = 0;
 }
 if (VAR_19[4] != VAR_20 || VAR_19[5] != VAR_20 || VAR_19[6] != VAR_20 || VAR_19[7] != VAR_20)
  return (VAR_4);

 if (VAR_8->kc_msg_order.km_flags &
     (VAR_0 | VAR_1)) {
  VAR_13 = FUNC_6(VAR_8, VAR_28);
  if (FUNC_0(VAR_13))
   return (VAR_13);
 } else {
  VAR_13 = VAR_3;
 }




 if (VAR_30) {





  if (VAR_12[0] == 0x10) {
   FUNC_5(VAR_8->kc_encryptkey, VAR_14, 16 + VAR_26,
       VAR_24, VAR_19, 4);
  } else {
   FUNC_5(VAR_8->kc_encryptkey, VAR_14, 16 + VAR_26,
       VAR_24, ((void*)0), 0);
  }
 }
 if (VAR_10)
  *VAR_10 = VAR_30;






 if (VAR_15->m_len > 0)
  VAR_25 = VAR_15->m_data[VAR_15->m_len - 1];
 else {
  VAR_18 = FUNC_12(VAR_14, VAR_22 + VAR_24 - 1, &VAR_29);






  if (VAR_18 == ((void*)0) || VAR_18->m_len == VAR_29)
   return (VAR_4);
  VAR_25 = VAR_18->m_data[VAR_29];
 }
 if (VAR_25 < 1 || VAR_25 > 8 || VAR_25 > VAR_22 + VAR_24)
  return (VAR_4);
 FUNC_9(VAR_14, VAR_22 + VAR_24 - VAR_25, VAR_25, VAR_27);
 for (VAR_29 = 0; VAR_29 < VAR_25; VAR_29++) {
  if (VAR_27[VAR_29] != VAR_25) {
   return (VAR_4);
  }
 }
 VAR_16 = VAR_14;
 *VAR_9 = VAR_14 = FUNC_15(VAR_14, 16 + VAR_26, VAR_6);
 VAR_15 = FUNC_13(VAR_14);
 VAR_16->m_len = 8;
 VAR_16->m_next = VAR_14;
 FUNC_1(VAR_17, VAR_6, VAR_5);
 VAR_17->m_len = VAR_26;
 VAR_15->m_next = VAR_17;

 FUNC_4(VAR_8->kc_checksumkey, 13, VAR_16, 0, VAR_24 + 8, VAR_26);
 VAR_16->m_next = ((void*)0);
 VAR_15->m_next = ((void*)0);

 if (FUNC_2(VAR_17->m_data, VAR_16->m_data + 16, VAR_26)) {
  FUNC_11(VAR_16);
  FUNC_10(VAR_17);
  return (VAR_2);
 }
 FUNC_11(VAR_16);
 FUNC_10(VAR_17);




 FUNC_8(VAR_14, 8);
 if (VAR_15->m_len >= VAR_25) {
  VAR_15->m_len -= VAR_25;
 } else {
  FUNC_16(VAR_14, VAR_24 - 8 - VAR_25);
 }

 *VAR_9 = VAR_14;
 return (VAR_13);
}
