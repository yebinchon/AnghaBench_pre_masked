
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {scalar_t__ type; scalar_t__ ecdsa_nid; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {int (* verify_host_key ) (struct sshkey*,struct ssh*) ;scalar_t__ hostkey_type; scalar_t__ hostkey_nid; size_t session_id_len; int * ec_client_key; int * session_id; int hostkey_alg; int peer; int my; int server_version_string; int client_version_string; int hash_alg; int * ec_group; } ;
typedef int hash ;
typedef int EC_POINT ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BIGNUM ;


 int * FUNC_0 (int *,size_t,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,size_t,int *,int *,int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,int *,size_t) ;
 int FUNC_10 (int *,size_t) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ssh*,int *,size_t,int *) ;
 int FUNC_14 (int ,int const*,int ,int ,int ,int ,int ,int ,int *,size_t,int ,int *,int *,int *,size_t*) ;
 int FUNC_15 (struct ssh*) ;
 void* FUNC_16 (size_t) ;
 int FUNC_17 (int *,int *,size_t) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int const*,int *) ;
 scalar_t__ FUNC_21 (int const*,int *) ;
 int FUNC_22 (struct sshkey*) ;
 int FUNC_23 (int *,size_t,struct sshkey**) ;
 int FUNC_24 (struct sshkey*,int *,size_t,int *,size_t,int ,int ) ;
 int FUNC_25 (struct ssh*,char*) ;
 int FUNC_26 (struct ssh*,int *,int const*) ;
 int FUNC_27 (struct ssh*) ;
 int FUNC_28 (struct ssh*,int **,size_t*) ;
 int VAR_8 ;
 int FUNC_29 (struct sshkey*,struct ssh*) ;

__attribute__((used)) static int
FUNC_30(int VAR_9, u_int32_t VAR_10, struct ssh *VAR_11)
{
 struct kex *VAR_12 = VAR_11->kex;
 const EC_GROUP *VAR_13;
 EC_POINT *VAR_14 = ((void*)0);
 EC_KEY *VAR_15;
 BIGNUM *VAR_16 = ((void*)0);
 struct sshkey *VAR_17 = ((void*)0);
 u_char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 u_char *VAR_20 = ((void*)0);
 u_char VAR_21[VAR_1];
 size_t VAR_22, VAR_23;
 size_t VAR_24 = 0, VAR_25;
 int VAR_26;

 if (VAR_12->verify_host_key == ((void*)0)) {
  VAR_26 = VAR_3;
  goto out;
 }
 VAR_13 = VAR_12->ec_group;
 VAR_15 = VAR_12->ec_client_key;


 if ((VAR_26 = FUNC_28(VAR_11, &VAR_18,
     &VAR_23)) != 0 ||
     (VAR_26 = FUNC_23(VAR_18, VAR_23,
     &VAR_17)) != 0)
  goto out;
 if (VAR_17->type != VAR_12->hostkey_type ||
     (VAR_12->hostkey_type == VAR_0 &&
     VAR_17->ecdsa_nid != VAR_12->hostkey_nid)) {
  VAR_26 = VAR_4;
  goto out;
 }
 if (VAR_12->verify_host_key(VAR_17, VAR_11) == -1) {
  VAR_26 = VAR_7;
  goto out;
 }



 if ((VAR_14 = FUNC_8(VAR_13)) == ((void*)0)) {
  VAR_26 = VAR_2;
  goto out;
 }
 if ((VAR_26 = FUNC_26(VAR_11, VAR_14, VAR_13)) != 0 ||
     (VAR_26 = FUNC_28(VAR_11, &VAR_19, &VAR_22)) != 0 ||
     (VAR_26 = FUNC_27(VAR_11)) != 0)
  goto out;





 if (FUNC_21(VAR_13, VAR_14) != 0) {
  FUNC_25(VAR_11, "invalid server public key");
  VAR_26 = VAR_6;
  goto out;
 }

 VAR_24 = (FUNC_4(VAR_13) + 7) / 8;
 if ((VAR_20 = FUNC_16(VAR_24)) == ((void*)0) ||
     (VAR_16 = FUNC_2()) == ((void*)0)) {
  VAR_26 = VAR_2;
  goto out;
 }
 if (FUNC_3(VAR_20, VAR_24, VAR_14,
     VAR_15, ((void*)0)) != (int)VAR_24 ||
     FUNC_0(VAR_20, VAR_24, VAR_16) == ((void*)0)) {
  VAR_26 = VAR_5;
  goto out;
 }





 VAR_25 = sizeof(VAR_21);
 if ((VAR_26 = FUNC_14(
     VAR_12->hash_alg,
     VAR_13,
     VAR_12->client_version_string,
     VAR_12->server_version_string,
     FUNC_19(VAR_12->my), FUNC_18(VAR_12->my),
     FUNC_19(VAR_12->peer), FUNC_18(VAR_12->peer),
     VAR_18, VAR_23,
     FUNC_6(VAR_15),
     VAR_14,
     VAR_16,
     VAR_21, &VAR_25)) != 0)
  goto out;

 if ((VAR_26 = FUNC_24(VAR_17, VAR_19, VAR_22, VAR_21,
     VAR_25, VAR_12->hostkey_alg, VAR_11->compat)) != 0)
  goto out;


 if (VAR_12->session_id == ((void*)0)) {
  VAR_12->session_id_len = VAR_25;
  VAR_12->session_id = FUNC_16(VAR_12->session_id_len);
  if (VAR_12->session_id == ((void*)0)) {
   VAR_26 = VAR_2;
   goto out;
  }
  FUNC_17(VAR_12->session_id, VAR_21, VAR_12->session_id_len);
 }

 if ((VAR_26 = FUNC_13(VAR_11, VAR_21, VAR_25, VAR_16)) == 0)
  VAR_26 = FUNC_15(VAR_11);
 out:
 FUNC_10(VAR_21, sizeof(VAR_21));
 FUNC_5(VAR_12->ec_client_key);
 VAR_12->ec_client_key = ((void*)0);
 FUNC_7(VAR_14);
 if (VAR_20) {
  FUNC_10(VAR_20, VAR_24);
  FUNC_12(VAR_20);
 }
 FUNC_1(VAR_16);
 FUNC_22(VAR_17);
 FUNC_12(VAR_18);
 FUNC_12(VAR_19);
 return VAR_26;
}
