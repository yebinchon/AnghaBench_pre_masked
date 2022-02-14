
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct mbuf {int dummy; } ;
struct krb5_key_state {char* ks_key; } ;
typedef int MD5_CTX ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,int,char*) ;
 int FUNC_4 (struct mbuf*,size_t,size_t,int ,int *) ;
 int FUNC_5 (struct mbuf*,size_t,size_t,char*) ;

__attribute__((used)) static void
FUNC_6(const struct krb5_key_state *VAR_1, int VAR_2,
    struct mbuf *VAR_3, size_t VAR_4, size_t VAR_5, size_t VAR_6)
{
 MD5_CTX VAR_7;
 uint8_t VAR_8[16];
 uint8_t VAR_9[4];
 uint8_t VAR_10[16];

 FUNC_3(VAR_1->ks_key, "signaturekey", 13, VAR_8);

 VAR_9[0] = VAR_2 >> 0;
 VAR_9[1] = VAR_2 >> 8;
 VAR_9[2] = VAR_2 >> 16;
 VAR_9[3] = VAR_2 >> 24;

 FUNC_1(&VAR_7);
 FUNC_2(&VAR_7, VAR_9, 4);
 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_0, &VAR_7);
 FUNC_0(VAR_10, &VAR_7);

 FUNC_3(VAR_8, VAR_10, 16, VAR_10);
 FUNC_5(VAR_3, VAR_4 + VAR_5, VAR_6, VAR_10);
}
