
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_eke_session {scalar_t__ encr; size_t auth_len; int * shared_secret; int prf; int dhgroup; } ;
struct dh_group {size_t prime_len; int prime; int * generator; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int const*,int const*,int *,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,size_t,int *,int ,int const*,size_t,int *,size_t,int *,size_t*) ;
 struct dh_group* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,size_t,int *,size_t,int *,int ,int *) ;
 int FUNC_4 (int *,int const*,size_t) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (int ,char*,int *,size_t) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(struct eap_eke_session *VAR_6, const u8 *VAR_7,
     const u8 *VAR_8, const u8 *VAR_9)
{
 u8 VAR_10[VAR_3];
 u8 VAR_11[VAR_2];
 u8 VAR_12[VAR_2];
 size_t VAR_13;
 const struct dh_group *VAR_14;

 VAR_14 = FUNC_2(VAR_6->dhgroup);
 if (VAR_6->encr != VAR_1 || !VAR_14)
  return -1;


 FUNC_4(VAR_11, VAR_9 + VAR_0, VAR_14->prime_len);
 if (FUNC_0(VAR_7, VAR_9, VAR_11, VAR_14->prime_len) < 0) {
  FUNC_8(VAR_5, "EAP-EKE: Failed to decrypt DHComponent");
  return -1;
 }
 FUNC_7(VAR_4, "EAP-EKE: Decrypted peer DH pubkey",
   VAR_11, VAR_14->prime_len);


 VAR_13 = VAR_14->prime_len;
 if (FUNC_1(*VAR_14->generator, VAR_14->prime, VAR_14->prime_len,
        ((void*)0), 0, VAR_8, VAR_14->prime_len, VAR_11,
        VAR_14->prime_len, VAR_12, &VAR_13) < 0)
  return -1;
 if (VAR_13 < VAR_14->prime_len) {
  size_t VAR_15 = VAR_14->prime_len - VAR_13;
  FUNC_5(VAR_12 + VAR_15, VAR_12, VAR_13);
  FUNC_6(VAR_12, 0, VAR_15);
 }

 FUNC_6(VAR_10, 0, VAR_6->auth_len);
 if (FUNC_3(VAR_6->prf, VAR_10, VAR_6->auth_len, VAR_12, VAR_14->prime_len,
   ((void*)0), 0, VAR_6->shared_secret) < 0)
  return -1;
 FUNC_7(VAR_4, "EAP-EKE: SharedSecret",
   VAR_6->shared_secret, VAR_6->auth_len);

 return 0;
}
