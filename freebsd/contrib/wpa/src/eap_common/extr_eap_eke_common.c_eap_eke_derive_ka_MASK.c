
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct eap_eke_session {int nonce_len; int prf_len; int ka; int shared_secret; int prf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char*,size_t,int ,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,int ,int ) ;

int FUNC_6(struct eap_eke_session *VAR_1,
        const u8 *VAR_2, size_t VAR_3,
        const u8 *VAR_4, size_t VAR_5,
        const u8 *VAR_6, const u8 *VAR_7)
{
 u8 *VAR_8, *VAR_9;
 size_t VAR_10;
 const char *VAR_11 = "EAP-EKE Ka";
 size_t VAR_12;
 VAR_12 = FUNC_4(VAR_11);
 VAR_10 = VAR_12 + VAR_3 + VAR_5 + 2 * VAR_1->nonce_len;
 VAR_8 = FUNC_2(VAR_10);
 if (VAR_8 == ((void*)0))
  return -1;
 VAR_9 = VAR_8;
 FUNC_3(VAR_9, VAR_11, VAR_12);
 VAR_9 += VAR_12;
 FUNC_3(VAR_9, VAR_2, VAR_3);
 VAR_9 += VAR_3;
 FUNC_3(VAR_9, VAR_4, VAR_5);
 VAR_9 += VAR_5;
 FUNC_3(VAR_9, VAR_6, VAR_1->nonce_len);
 VAR_9 += VAR_1->nonce_len;
 FUNC_3(VAR_9, VAR_7, VAR_1->nonce_len);
 if (FUNC_0(VAR_1->prf, VAR_1->shared_secret, VAR_1->prf_len,
       VAR_8, VAR_10, VAR_1->ka, VAR_1->prf_len) < 0) {
  FUNC_1(VAR_8);
  return -1;
 }
 FUNC_1(VAR_8);

 FUNC_5(VAR_0, "EAP-EKE: Ka", VAR_1->ka, VAR_1->prf_len);

 return 0;
}
