
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u8 ;
struct eap_eke_session {int nonce_len; int prf_len; int shared_secret; int prf; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char const*,size_t,char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (char const*,int ,int) ;
 size_t FUNC_5 (char const*) ;
 int FUNC_6 (int ,char*,char const*,int) ;

int FUNC_7(struct eap_eke_session *VAR_3,
         const u8 *VAR_4, size_t VAR_5,
         const u8 *VAR_6, size_t VAR_7,
         const u8 *VAR_8, const u8 *VAR_9,
         u8 *VAR_10, u8 *VAR_11)
{
 u8 *VAR_12, *VAR_13;
 size_t VAR_14;
 const char *VAR_15 = "EAP-EKE Exported Keys";
 size_t VAR_16;
 u8 VAR_17[VAR_1 + VAR_0];






 VAR_16 = FUNC_5(VAR_15);
 VAR_14 = VAR_16 + VAR_5 + VAR_7 + 2 * VAR_3->nonce_len;
 VAR_12 = FUNC_2(VAR_14);
 if (VAR_12 == ((void*)0))
  return -1;
 VAR_13 = VAR_12;
 FUNC_3(VAR_13, VAR_15, VAR_16);
 VAR_13 += VAR_16;
 FUNC_3(VAR_13, VAR_4, VAR_5);
 VAR_13 += VAR_5;
 FUNC_3(VAR_13, VAR_6, VAR_7);
 VAR_13 += VAR_7;
 FUNC_3(VAR_13, VAR_8, VAR_3->nonce_len);
 VAR_13 += VAR_3->nonce_len;
 FUNC_3(VAR_13, VAR_9, VAR_3->nonce_len);
 if (FUNC_0(VAR_3->prf, VAR_3->shared_secret, VAR_3->prf_len,
       VAR_12, VAR_14, VAR_17, VAR_1 + VAR_0) <
     0) {
  FUNC_1(VAR_12);
  return -1;
 }
 FUNC_1(VAR_12);

 FUNC_3(VAR_10, VAR_17, VAR_1);
 FUNC_3(VAR_11, VAR_17 + VAR_1, VAR_0);
 FUNC_4(VAR_17, 0, sizeof(VAR_17));

 FUNC_6(VAR_2, "EAP-EKE: MSK", VAR_10, VAR_1);
 FUNC_6(VAR_2, "EAP-EKE: EMSK", VAR_10, VAR_0);

 return 0;
}
