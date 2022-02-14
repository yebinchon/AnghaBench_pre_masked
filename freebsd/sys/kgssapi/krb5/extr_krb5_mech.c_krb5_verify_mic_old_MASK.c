
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {size_t m_len; int* m_data; struct mbuf* m_next; } ;
struct TYPE_5__ {int km_flags; } ;
struct krb5_context {TYPE_2__ kc_msg_order; int kc_tokenkey; TYPE_3__* kc_checksumkey; } ;
struct TYPE_6__ {TYPE_1__* ks_class; } ;
struct TYPE_4__ {size_t ec_checksumlen; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (struct krb5_context*) ;
 int FUNC_4 (TYPE_3__*,int,struct mbuf*,int,int,size_t) ;
 int FUNC_5 (int ,struct mbuf*,int ,int,int*,int) ;
 int FUNC_6 (struct krb5_context*,int) ;
 int* FUNC_7 (char*,size_t,struct mbuf**,size_t*,int ) ;
 int FUNC_8 (struct mbuf*) ;
 size_t FUNC_9 (struct mbuf*,struct mbuf**) ;
 size_t FUNC_10 (int ) ;

__attribute__((used)) static OM_uint32
FUNC_11(struct krb5_context *VAR_8, struct mbuf *VAR_9, struct mbuf *VAR_10,
    uint8_t VAR_11[2])
{
 struct mbuf *VAR_12, *VAR_13;
 uint8_t *VAR_14, *VAR_15, VAR_16;
 size_t VAR_17, VAR_18, VAR_19, VAR_20;
 size_t VAR_21;
 uint32_t VAR_22;

 VAR_17 = FUNC_9(VAR_9, &VAR_12);

 VAR_18 = FUNC_10(VAR_8->kc_tokenkey);
 VAR_14 = FUNC_7("\x01\x01", VAR_18, &VAR_10, &VAR_19, VAR_0);
 if (!VAR_14)
  return (VAR_5);
 VAR_14 += 2;


 if (VAR_14[0] != VAR_11[0] || VAR_14[1] != VAR_11[1])
  return (VAR_5);
 VAR_14 += 2;

 if (VAR_14[0] != 0xff || VAR_14[1] != 0xff || VAR_14[2] != 0xff || VAR_14[3] != 0xff)
  return (VAR_5);
 VAR_14 += 4;







 VAR_21 = VAR_8->kc_checksumkey->ks_class->ec_checksumlen;
 VAR_20 = VAR_10->m_len;
 VAR_10->m_len = VAR_14 - (uint8_t *) VAR_10->m_data;
 VAR_10->m_next = VAR_9;
 FUNC_0(VAR_13, VAR_7, VAR_6);
 VAR_13->m_len = VAR_21;
 VAR_12->m_next = VAR_13;

 FUNC_4(VAR_8->kc_checksumkey, 15, VAR_10, VAR_10->m_len - 8,
     8 + VAR_17, VAR_21);
 VAR_10->m_next = ((void*)0);
 VAR_12->m_next = ((void*)0);
 if (FUNC_1(VAR_13->m_data, VAR_14 + 8, VAR_21)) {
  FUNC_8(VAR_13);
  return (VAR_3);
 }
 FUNC_2(VAR_14, VAR_13->m_data, 8);
 VAR_13->m_len = 8;
 FUNC_5(VAR_8->kc_tokenkey, VAR_13, 0, 8, VAR_14 + 8, 8);

 VAR_15 = VAR_13->m_data;
 if (VAR_11[0] == 0x11) {
  VAR_22 = VAR_15[3] | (VAR_15[2] << 8) | (VAR_15[1] << 16) | (VAR_15[0] << 24);
 } else {
  VAR_22 = VAR_15[0] | (VAR_15[1] << 8) | (VAR_15[2] << 16) | (VAR_15[3] << 24);
 }

 if (FUNC_3(VAR_8)) {
  VAR_16 = 0xff;
 } else {
  VAR_16 = 0;
 }
 if (VAR_15[4] != VAR_16 || VAR_15[5] != VAR_16 || VAR_15[6] != VAR_16 || VAR_15[7] != VAR_16) {
  FUNC_8(VAR_13);
  return (VAR_5);
 }
 FUNC_8(VAR_13);

 if (VAR_8->kc_msg_order.km_flags &
  (VAR_1 | VAR_2)) {
  return (FUNC_6(VAR_8, VAR_22));
 }

 return (VAR_4);
}
