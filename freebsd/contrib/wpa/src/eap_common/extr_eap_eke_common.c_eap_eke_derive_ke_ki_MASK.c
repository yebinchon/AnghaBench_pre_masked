
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u8 ;
struct eap_eke_session {scalar_t__ encr; scalar_t__ mac; char const* ke; char const* ki; int prf_len; int shared_secret; int prf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char const*,size_t,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char const*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,char const*,size_t) ;

int FUNC_6(struct eap_eke_session *VAR_6,
    const u8 *VAR_7, size_t VAR_8,
    const u8 *VAR_9, size_t VAR_10)
{
 u8 VAR_11[VAR_1 + VAR_2];
 size_t VAR_12, VAR_13;
 u8 *VAR_14;
 size_t VAR_15;
 const char *VAR_16 = "EAP-EKE Keys";
 size_t VAR_17;
 if (VAR_6->encr == VAR_0)
  VAR_12 = 16;
 else
  return -1;

 if (VAR_6->mac == VAR_3)
  VAR_13 = 20;
 else if (VAR_6->mac == VAR_4)
  VAR_13 = 32;
 else
  return -1;

 VAR_17 = FUNC_4(VAR_16);
 VAR_15 = VAR_17 + VAR_8 + VAR_10;
 VAR_14 = FUNC_2(VAR_15);
 if (VAR_14 == ((void*)0))
  return -1;
 FUNC_3(VAR_14, VAR_16, VAR_17);
 FUNC_3(VAR_14 + VAR_17, VAR_7, VAR_8);
 FUNC_3(VAR_14 + VAR_17 + VAR_8, VAR_9, VAR_10);
 if (FUNC_0(VAR_6->prf, VAR_6->shared_secret, VAR_6->prf_len,
       VAR_14, VAR_15, VAR_11, VAR_12 + VAR_13) < 0) {
  FUNC_1(VAR_14);
  return -1;
 }

 FUNC_3(VAR_6->ke, VAR_11, VAR_12);
 FUNC_5(VAR_5, "EAP-EKE: Ke", VAR_6->ke, VAR_12);
 FUNC_3(VAR_6->ki, VAR_11 + VAR_12, VAR_13);
 FUNC_5(VAR_5, "EAP-EKE: Ki", VAR_6->ki, VAR_13);

 FUNC_1(VAR_14);
 return 0;
}
