
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {int m_len; int* m_data; struct mbuf* m_next; } ;
struct krb5_context {int kc_tokenkey; int kc_local_seqnumber; TYPE_2__* kc_checksumkey; } ;
struct TYPE_4__ {TYPE_1__* ks_class; } ;
struct TYPE_3__ {size_t ec_checksumlen; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int*,...) ;
 scalar_t__ FUNC_3 (struct krb5_context*) ;
 int FUNC_4 (TYPE_2__*,int,struct mbuf*,int,int,size_t) ;
 int FUNC_5 (int ,struct mbuf*,size_t,int,char*,int) ;
 int* FUNC_6 (char*,size_t,size_t,struct mbuf**) ;
 int FUNC_7 (struct mbuf*) ;
 size_t FUNC_8 (struct mbuf*,struct mbuf**) ;
 size_t FUNC_9 (int ) ;

__attribute__((used)) static OM_uint32
FUNC_10(struct krb5_context *VAR_3, struct mbuf *VAR_4,
    struct mbuf **VAR_5, uint8_t VAR_6[2])
{
 struct mbuf *VAR_7, *VAR_8, *VAR_9;
 uint8_t *VAR_10, VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 uint32_t VAR_15;
 char VAR_16[8];

 VAR_13 = FUNC_8(VAR_4, &VAR_7);

 VAR_12 = FUNC_9(VAR_3->kc_tokenkey);
 VAR_10 = FUNC_6("\x01\x01", VAR_12, VAR_12, &VAR_8);
 VAR_10 += 2;
 *VAR_10++ = VAR_6[0];
 *VAR_10++ = VAR_6[1];

 *VAR_10++ = 0xff;
 *VAR_10++ = 0xff;
 *VAR_10++ = 0xff;
 *VAR_10++ = 0xff;







 VAR_14 = VAR_3->kc_checksumkey->ks_class->ec_checksumlen;

 VAR_8->m_len = VAR_10 - (uint8_t *) VAR_8->m_data;
 VAR_8->m_next = VAR_4;
 FUNC_0(VAR_9, VAR_2, VAR_1);
 VAR_9->m_len = VAR_14;
 VAR_7->m_next = VAR_9;

 FUNC_4(VAR_3->kc_checksumkey, 15, VAR_8, VAR_8->m_len - 8,
     8 + VAR_13, VAR_14);
 FUNC_2(VAR_9->m_data, VAR_10 + 8, VAR_14);
 VAR_8->m_next = ((void*)0);
 VAR_7->m_next = ((void*)0);
 FUNC_7(VAR_9);
 VAR_15 = FUNC_1(&VAR_3->kc_local_seqnumber, 1);
 if (VAR_6[0] == 0x11) {
  VAR_10[0] = (VAR_15 >> 24);
  VAR_10[1] = (VAR_15 >> 16);
  VAR_10[2] = (VAR_15 >> 8);
  VAR_10[3] = (VAR_15 >> 0);
 } else {
  VAR_10[0] = (VAR_15 >> 0);
  VAR_10[1] = (VAR_15 >> 8);
  VAR_10[2] = (VAR_15 >> 16);
  VAR_10[3] = (VAR_15 >> 24);
 }
 if (FUNC_3(VAR_3)) {
  VAR_11 = 0;
 } else {
  VAR_11 = 0xff;
 }
 VAR_10[4] = VAR_11;
 VAR_10[5] = VAR_11;
 VAR_10[6] = VAR_11;
 VAR_10[7] = VAR_11;
 FUNC_2(VAR_10 + 8, VAR_16, 8);





 VAR_8->m_len += 8 + VAR_14;
 FUNC_5(VAR_3->kc_tokenkey, VAR_8, VAR_8->m_len - VAR_14 - 8, 8, VAR_16, 8);

 *VAR_5 = VAR_8;
 return (VAR_0);
}
