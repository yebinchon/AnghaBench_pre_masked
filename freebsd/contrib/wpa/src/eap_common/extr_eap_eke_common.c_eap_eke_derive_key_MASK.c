
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_eke_session {size_t prf_len; int prf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,size_t,int const*,size_t,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *,size_t,int *,size_t,int *,size_t) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int *,int ,size_t) ;
 int FUNC_6 (int ,char*,int *,size_t) ;
 int FUNC_7 (int ,char*,int *,size_t) ;

int FUNC_8(struct eap_eke_session *VAR_2,
         const u8 *VAR_3, size_t VAR_4,
         const u8 *VAR_5, size_t VAR_6, const u8 *VAR_7,
         size_t VAR_8, u8 *VAR_9)
{
 u8 VAR_10[VAR_0];
 u8 VAR_11[VAR_0];
 size_t VAR_12 = 16;
 u8 *VAR_13;


 FUNC_5(VAR_10, 0, VAR_2->prf_len);
 if (FUNC_0(VAR_2->prf, VAR_10, VAR_2->prf_len,
   VAR_3, VAR_4, ((void*)0), 0, VAR_11) < 0)
  return -1;
 FUNC_7(VAR_1, "EAP-EKE: temp = prf(0+, password)",
   VAR_11, VAR_2->prf_len);


 VAR_13 = FUNC_3(VAR_6 + VAR_8);
 if (VAR_13 == ((void*)0))
  return -1;
 FUNC_4(VAR_13, VAR_5, VAR_6);
 FUNC_4(VAR_13 + VAR_6, VAR_7, VAR_8);
 FUNC_6(VAR_1, "EAP-EKE: ID_S | ID_P",
     VAR_13, VAR_6 + VAR_8);
 if (FUNC_1(VAR_2->prf, VAR_11, VAR_2->prf_len,
       VAR_13, VAR_6 + VAR_8, VAR_9, VAR_12) < 0) {
  FUNC_2(VAR_13);
  return -1;
 }
 FUNC_2(VAR_13);
 FUNC_7(VAR_1, "EAP-EKE: key = prf+(temp, ID_S | ID_P)",
   VAR_9, VAR_12);

 return 0;
}
