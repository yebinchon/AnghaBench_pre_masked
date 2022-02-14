
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mbuf {int m_len; int * m_data; } ;
struct krb5_key_state {struct krb5_encryption_class* ks_class; } ;
struct krb5_encryption_class {int ec_blocklen; int ec_keybits; } ;


 int FUNC_0 (struct mbuf*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ) ;
 struct krb5_key_state* FUNC_3 (struct krb5_encryption_class const*) ;
 int FUNC_4 (struct krb5_key_state*,struct mbuf*,int ,int,int *,int ) ;
 int FUNC_5 (int *,int,void*,size_t) ;
 int FUNC_6 (struct krb5_key_state*,int *) ;
 int FUNC_7 (struct mbuf*) ;
 int * FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int,int) ;

struct krb5_key_state *
FUNC_10(struct krb5_key_state *VAR_3,
    void *VAR_4, size_t VAR_5)
{
 struct krb5_key_state *VAR_6;
 const struct krb5_encryption_class *VAR_7 = VAR_3->ks_class;
 uint8_t *VAR_8;
 uint8_t *VAR_9, *VAR_10, *VAR_11;
 struct mbuf *VAR_12;
 int VAR_13, VAR_14;




 VAR_8 = FUNC_8(VAR_7->ec_blocklen, VAR_1, VAR_2);
 FUNC_5(VAR_8, VAR_7->ec_blocklen, VAR_4, VAR_5);





 VAR_13 = FUNC_9(VAR_7->ec_keybits / 8, VAR_7->ec_blocklen);
 VAR_9 = FUNC_8(VAR_13, VAR_1, VAR_2);
 FUNC_0(VAR_12, VAR_2, VAR_0);
 VAR_12->m_len = VAR_7->ec_blocklen;
 for (VAR_14 = 0, VAR_10 = VAR_9, VAR_11 = VAR_8; VAR_14 < VAR_13;
      VAR_11 = VAR_10, VAR_14 += VAR_7->ec_blocklen, VAR_10 += VAR_7->ec_blocklen) {
  FUNC_1(VAR_11, VAR_12->m_data, VAR_7->ec_blocklen);
  FUNC_4(VAR_3, VAR_12, 0, VAR_7->ec_blocklen, ((void*)0), 0);
  FUNC_1(VAR_12->m_data, VAR_10, VAR_7->ec_blocklen);
 }
 FUNC_7(VAR_12);

 VAR_6 = FUNC_3(VAR_7);
 FUNC_6(VAR_6, VAR_9);

 FUNC_2(VAR_8, VAR_1);
 FUNC_2(VAR_9, VAR_1);

 return (VAR_6);
}
