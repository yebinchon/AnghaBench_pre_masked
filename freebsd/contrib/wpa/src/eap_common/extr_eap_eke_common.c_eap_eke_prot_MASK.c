
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_eke_session {scalar_t__ encr; scalar_t__ mac; int ki; int ke; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int ,int *,int *,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int *,size_t,int *) ;
 int FUNC_2 (int *,int const*,size_t) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct eap_eke_session *VAR_8,
   const u8 *VAR_9, size_t VAR_10,
   u8 *VAR_11, size_t *VAR_12)
{
 size_t VAR_13, VAR_14, VAR_15;
 u8 *VAR_16, *VAR_17, *VAR_18;

 if (VAR_8->encr == VAR_1)
  VAR_13 = VAR_0;
 else
  return -1;

 if (VAR_8->mac == VAR_2)
  VAR_14 = VAR_6;
 else if (VAR_8->mac == VAR_3)
  VAR_14 = VAR_7;
 else
  return -1;

 VAR_15 = VAR_10 % VAR_13;
 if (VAR_15)
  VAR_15 = VAR_13 - VAR_15;

 if (*VAR_12 < VAR_13 + VAR_10 + VAR_15 + VAR_14) {
  FUNC_5(VAR_5, "EAP-EKE: Not enough room for Prot() data");
  return -1;
 }
 VAR_16 = VAR_11;

 if (FUNC_3(VAR_16, VAR_13))
  return -1;
 VAR_17 = VAR_16;
 FUNC_4(VAR_4, "EAP-EKE: IV for Prot()", VAR_17, VAR_13);
 VAR_16 += VAR_13;

 VAR_18 = VAR_16;
 FUNC_2(VAR_16, VAR_9, VAR_10);
 VAR_16 += VAR_10;
 if (VAR_15) {
  if (FUNC_3(VAR_16, VAR_15))
   return -1;
  VAR_16 += VAR_15;
 }

 if (FUNC_0(VAR_8->ke, VAR_17, VAR_18, VAR_10 + VAR_15) < 0 ||
     FUNC_1(VAR_8->mac, VAR_8->ki, VAR_18, VAR_10 + VAR_15, VAR_16) < 0)
  return -1;
 VAR_16 += VAR_14;

 *VAR_12 = VAR_16 - VAR_11;
 return 0;
}
