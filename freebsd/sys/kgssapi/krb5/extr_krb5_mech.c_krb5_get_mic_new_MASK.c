
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mbuf {int m_len; int* m_data; struct mbuf* m_next; } ;
struct krb5_key_state {TYPE_1__* ks_class; } ;
struct krb5_context {int kc_more_flags; int kc_local_seqnumber; struct krb5_key_state* kc_send_sign_Kc; } ;
struct TYPE_2__ {size_t ec_checksumlen; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mbuf*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mbuf*,int) ;
 int VAR_6 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (struct krb5_context*) ;
 int FUNC_5 (struct krb5_key_state*,int ,struct mbuf*,int ,size_t,size_t) ;
 size_t FUNC_6 (struct mbuf*,struct mbuf**) ;

__attribute__((used)) static OM_uint32
FUNC_7(struct krb5_context *VAR_7, struct mbuf *VAR_8,
    struct mbuf **VAR_9)
{
 struct krb5_key_state *VAR_10 = VAR_7->kc_send_sign_Kc;
 struct mbuf *VAR_11, *VAR_12;
 uint8_t *VAR_13;
 int VAR_14;
 size_t VAR_15, VAR_16;
 uint32_t VAR_17;

 VAR_15 = FUNC_6(VAR_8, &VAR_11);
 VAR_16 = VAR_10->ks_class->ec_checksumlen;

 FUNC_0(16 + VAR_16 <= VAR_4, ("checksum too large for an mbuf"));
 FUNC_1(VAR_12, VAR_6, VAR_5);
 FUNC_2(VAR_12, 16 + VAR_16);
 VAR_12->m_len = 16 + VAR_16;
 VAR_13 = VAR_12->m_data;


 VAR_13[0] = 0x04;
 VAR_13[1] = 0x04;


 VAR_14 = 0;
 if (FUNC_4(VAR_7))
  VAR_14 |= VAR_3;
 if (VAR_7->kc_more_flags & VAR_0)
  VAR_14 |= VAR_2;
 VAR_13[2] = VAR_14;


 VAR_13[3] = 0xff;
 VAR_13[4] = 0xff;
 VAR_13[5] = 0xff;
 VAR_13[6] = 0xff;
 VAR_13[7] = 0xff;


 VAR_13[8] = 0;
 VAR_13[9] = 0;
 VAR_13[10] = 0;
 VAR_13[11] = 0;
 VAR_17 = FUNC_3(&VAR_7->kc_local_seqnumber, 1);
 VAR_13[12] = (VAR_17 >> 24);
 VAR_13[13] = (VAR_17 >> 16);
 VAR_13[14] = (VAR_17 >> 8);
 VAR_13[15] = (VAR_17 >> 0);







 VAR_11->m_next = VAR_12;
 FUNC_5(VAR_10, 0, VAR_8, 0, VAR_15 + 16, VAR_16);
 VAR_11->m_next = ((void*)0);

 *VAR_9 = VAR_12;
 return (VAR_1);
}
