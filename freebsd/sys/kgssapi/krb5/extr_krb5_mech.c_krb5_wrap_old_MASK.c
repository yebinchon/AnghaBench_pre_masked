
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {int m_data; int m_len; struct mbuf* m_next; } ;
struct krb5_context {TYPE_3__* kc_encryptkey; TYPE_3__* kc_tokenkey; int kc_local_seqnumber; TYPE_5__* kc_checksumkey; } ;
struct TYPE_9__ {TYPE_2__* ks_class; } ;
struct TYPE_8__ {TYPE_1__* ks_class; } ;
struct TYPE_7__ {size_t ec_checksumlen; } ;
struct TYPE_6__ {size_t ec_msgblocklen; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 size_t FUNC_2 (struct mbuf*) ;
 int VAR_2 ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int*,size_t) ;
 scalar_t__ FUNC_6 (struct krb5_context*) ;
 int FUNC_7 (TYPE_5__*,int,struct mbuf*,int,size_t,size_t) ;
 int FUNC_8 (TYPE_3__*,struct mbuf*,int,size_t,int*,int) ;
 int* FUNC_9 (char*,size_t,size_t,struct mbuf**) ;
 int FUNC_10 (struct mbuf*) ;
 size_t FUNC_11 (struct mbuf*,struct mbuf**) ;
 int FUNC_12 (int,size_t,size_t) ;
 size_t FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static OM_uint32
FUNC_14(struct krb5_context *VAR_3, int VAR_4,
    struct mbuf **VAR_5, int *VAR_6,
    uint8_t VAR_7[2], uint8_t VAR_8[2])
{
 struct mbuf *VAR_9, *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15, VAR_16, VAR_17;
 uint8_t *VAR_18, VAR_19;
 size_t VAR_20;
 uint8_t VAR_21[8];
 uint32_t VAR_22;




 VAR_9 = *VAR_5;
 VAR_14 = FUNC_11(VAR_9, &VAR_10);
 VAR_15 = VAR_3->kc_tokenkey->ks_class->ec_msgblocklen;
 VAR_16 = VAR_15 - (VAR_14 % VAR_15);







 VAR_17 = VAR_14 + 8 + VAR_16;
 VAR_15 = FUNC_13(VAR_3->kc_tokenkey);

 VAR_18 = FUNC_9("\x02\x01", VAR_15, VAR_17 + VAR_15, &VAR_11);
 VAR_18 += 2;
 *VAR_18++ = VAR_7[0];
 *VAR_18++ = VAR_7[1];
 if (VAR_4) {
  *VAR_18++ = VAR_8[0];
  *VAR_18++ = VAR_8[1];
 } else {
  *VAR_18++ = 0xff;
  *VAR_18++ = 0xff;
 }

 *VAR_18++ = 0xff;
 *VAR_18++ = 0xff;




 if (FUNC_1(VAR_9) >= 8) {
  VAR_9->m_data -= 8;
  VAR_9->m_len += 8;
 } else {
  FUNC_0(VAR_12, VAR_2, VAR_1);
  VAR_12->m_len = 8;
  VAR_12->m_next = VAR_9;
  VAR_9 = VAR_12;
 }
 FUNC_3(VAR_9->m_data, 8, 0);
 if (FUNC_2(VAR_10) >= VAR_16) {
  FUNC_12(VAR_10->m_data + VAR_10->m_len, VAR_16, VAR_16);
  VAR_10->m_len += VAR_16;
 } else {
  FUNC_0(VAR_13, VAR_2, VAR_1);
  FUNC_12(VAR_13->m_data, VAR_16, VAR_16);
  VAR_13->m_len = VAR_16;
  VAR_10->m_next = VAR_13;
  VAR_10 = VAR_13;
 }
 VAR_11->m_next = VAR_9;
 VAR_20 = VAR_3->kc_checksumkey->ks_class->ec_checksumlen;
 VAR_15 = VAR_11->m_len;
 VAR_11->m_len = VAR_18 - (uint8_t *) VAR_11->m_data;
 FUNC_0(VAR_12, VAR_2, VAR_1);
 VAR_12->m_len = VAR_20;
 VAR_10->m_next = VAR_12;
 FUNC_7(VAR_3->kc_checksumkey, 13, VAR_11, VAR_11->m_len - 8,
     VAR_17 + 8, VAR_20);
 VAR_11->m_len = VAR_15;
 VAR_10->m_next = ((void*)0);
 FUNC_5(VAR_12->m_data, VAR_18 + 8, VAR_20);
 FUNC_10(VAR_12);
 VAR_22 = FUNC_4(&VAR_3->kc_local_seqnumber, 1);
 if (VAR_7[0] == 0x11) {
  VAR_18[0] = (VAR_22 >> 24);
  VAR_18[1] = (VAR_22 >> 16);
  VAR_18[2] = (VAR_22 >> 8);
  VAR_18[3] = (VAR_22 >> 0);
 } else {
  VAR_18[0] = (VAR_22 >> 0);
  VAR_18[1] = (VAR_22 >> 8);
  VAR_18[2] = (VAR_22 >> 16);
  VAR_18[3] = (VAR_22 >> 24);
 }
 if (FUNC_6(VAR_3)) {
  VAR_19 = 0;
 } else {
  VAR_19 = 0xff;
 }
 VAR_18[4] = VAR_19;
 VAR_18[5] = VAR_19;
 VAR_18[6] = VAR_19;
 VAR_18[7] = VAR_19;
 FUNC_8(VAR_3->kc_tokenkey, VAR_11, VAR_18 - (uint8_t *) VAR_11->m_data,
     8, VAR_18 + 8, 8);

 if (VAR_4) {





  if (VAR_8[0] == 0x10) {
   VAR_21[0] = (VAR_22 >> 24);
   VAR_21[1] = (VAR_22 >> 16);
   VAR_21[2] = (VAR_22 >> 8);
   VAR_21[3] = (VAR_22 >> 0);
   FUNC_8(VAR_3->kc_encryptkey, VAR_9, 0, VAR_17,
       VAR_21, 4);
  } else {
   FUNC_8(VAR_3->kc_encryptkey, VAR_9, 0, VAR_17,
       ((void*)0), 0);
  }
 }

 if (VAR_6)
  *VAR_6 = VAR_4;

 *VAR_5 = VAR_11;
 return (VAR_0);
}
