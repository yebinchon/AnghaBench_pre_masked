
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_eke_session {scalar_t__ encr; scalar_t__ mac; int ke; int ki; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_0 (int ,int const*,int *,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int const*,size_t,int *) ;
 scalar_t__ FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *,int const*,size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct eap_eke_session *VAR_9,
    const u8 *VAR_10, size_t VAR_11,
    u8 *VAR_12, size_t *VAR_13)
{
 size_t VAR_14, VAR_15;
 u8 VAR_16[VAR_2];

 if (VAR_9->encr == VAR_1)
  VAR_14 = VAR_0;
 else
  return -1;

 if (VAR_9->mac == VAR_3)
  VAR_15 = VAR_7;
 else if (VAR_9->mac == VAR_4)
  VAR_15 = VAR_8;
 else
  return -1;

 if (VAR_11 < 2 * VAR_14 + VAR_15 ||
     (VAR_11 - VAR_15) % VAR_14)
  return -1;

 if (FUNC_1(VAR_9->mac, VAR_9->ki, VAR_10 + VAR_14,
   VAR_11 - VAR_14 - VAR_15, VAR_16) < 0)
  return -1;
 if (FUNC_2(VAR_16, VAR_10 + VAR_11 - VAR_15, VAR_15) != 0) {
  FUNC_5(VAR_6, "EAP-EKE: ICV mismatch in Prot() data");
  return -1;
 }

 if (*VAR_13 < VAR_11 - VAR_14 - VAR_15) {
  FUNC_5(VAR_6, "EAP-EKE: Not enough room for decrypted Prot() data");
  return -1;
 }

 *VAR_13 = VAR_11 - VAR_14 - VAR_15;
 FUNC_3(VAR_12, VAR_10 + VAR_14, *VAR_13);
 if (FUNC_0(VAR_9->ke, VAR_10, VAR_12, *VAR_13) < 0) {
  FUNC_5(VAR_6, "EAP-EKE: Failed to decrypt Prot() data");
  return -1;
 }
 FUNC_4(VAR_5, "EAP-EKE: Decrypted Prot() data",
   VAR_12, *VAR_13);

 return 0;
}
