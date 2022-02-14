
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {int dummy; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {size_t session_id_len; int (* sign ) (struct sshkey*,struct sshkey*,int **,size_t*,int *,size_t,int ,int ) ;int * ec_client_key; int hostkey_alg; int * session_id; int my; int peer; int server_version_string; int client_version_string; int hash_alg; int hostkey_nid; int hostkey_type; struct sshkey* (* load_host_private_key ) (int ,int ,struct ssh*) ;struct sshkey* (* load_host_public_key ) (int ,int ,struct ssh*) ;int ec_nid; } ;
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
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int * FUNC_10 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (char*,int *,size_t) ;
 int FUNC_12 (int *,size_t) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ssh*,int *,size_t,int *) ;
 int FUNC_16 (int ,int const*,int ,int ,int ,int ,int ,int ,int *,size_t,int *,int *,int *,int *,size_t*) ;
 int FUNC_17 (struct ssh*) ;
 void* FUNC_18 (size_t) ;
 int FUNC_19 (int *,int *,size_t) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int const*,int *) ;
 scalar_t__ FUNC_24 (int const*,int *) ;
 int FUNC_25 (struct sshkey*,int **,size_t*) ;
 int FUNC_26 (struct ssh*,char*) ;
 int FUNC_27 (struct ssh*,int *,int const*) ;
 int FUNC_28 (struct ssh*) ;
 int FUNC_29 (struct ssh*,int const*,int const*) ;
 int FUNC_30 (struct ssh*,int *,size_t) ;
 int FUNC_31 (struct ssh*) ;
 int FUNC_32 (struct ssh*,int ) ;
 int VAR_7 ;
 struct sshkey* FUNC_33 (int ,int ,struct ssh*) ;
 struct sshkey* FUNC_34 (int ,int ,struct ssh*) ;
 int FUNC_35 (struct sshkey*,struct sshkey*,int **,size_t*,int *,size_t,int ,int ) ;

__attribute__((used)) static int
FUNC_36(int VAR_8, u_int32_t VAR_9, struct ssh *VAR_10)
{
 struct kex *VAR_11 = VAR_10->kex;
 EC_POINT *VAR_12;
 EC_KEY *VAR_13 = ((void*)0);
 const EC_GROUP *VAR_14;
 const EC_POINT *VAR_15;
 BIGNUM *VAR_16 = ((void*)0);
 struct sshkey *VAR_17, *VAR_18;
 u_char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 u_char *VAR_21 = ((void*)0);
 u_char VAR_22[VAR_1];
 size_t VAR_23, VAR_24;
 size_t VAR_25 = 0, VAR_26;
 int VAR_27;

 if ((VAR_13 = FUNC_9(VAR_11->ec_nid)) == ((void*)0)) {
  VAR_27 = VAR_2;
  goto out;
 }
 if (FUNC_6(VAR_13) != 1) {
  VAR_27 = VAR_4;
  goto out;
 }
 VAR_14 = FUNC_7(VAR_13);






 if (VAR_11->load_host_public_key == ((void*)0) ||
     VAR_11->load_host_private_key == ((void*)0)) {
  VAR_27 = VAR_3;
  goto out;
 }
 VAR_18 = VAR_11->load_host_public_key(VAR_11->hostkey_type,
     VAR_11->hostkey_nid, VAR_10);
 VAR_17 = VAR_11->load_host_private_key(VAR_11->hostkey_type,
     VAR_11->hostkey_nid, VAR_10);
 if (VAR_18 == ((void*)0)) {
  VAR_27 = VAR_6;
  goto out;
 }
 if ((VAR_12 = FUNC_10(VAR_14)) == ((void*)0)) {
  VAR_27 = VAR_2;
  goto out;
 }
 if ((VAR_27 = FUNC_27(VAR_10, VAR_12, VAR_14)) != 0 ||
     (VAR_27 = FUNC_28(VAR_10)) != 0)
  goto out;





 if (FUNC_24(VAR_14, VAR_12) != 0) {
  FUNC_26(VAR_10, "invalid client public key");
  VAR_27 = VAR_5;
  goto out;
 }


 VAR_25 = (FUNC_4(VAR_14) + 7) / 8;
 if ((VAR_21 = FUNC_18(VAR_25)) == ((void*)0) ||
     (VAR_16 = FUNC_2()) == ((void*)0)) {
  VAR_27 = VAR_2;
  goto out;
 }
 if (FUNC_3(VAR_21, VAR_25, VAR_12,
     VAR_13, ((void*)0)) != (int)VAR_25 ||
     FUNC_0(VAR_21, VAR_25, VAR_16) == ((void*)0)) {
  VAR_27 = VAR_4;
  goto out;
 }





 if ((VAR_27 = FUNC_25(VAR_18, &VAR_19,
     &VAR_24)) != 0)
  goto out;
 VAR_26 = sizeof(VAR_22);
 if ((VAR_27 = FUNC_16(
     VAR_11->hash_alg,
     VAR_14,
     VAR_11->client_version_string,
     VAR_11->server_version_string,
     FUNC_21(VAR_11->peer), FUNC_20(VAR_11->peer),
     FUNC_21(VAR_11->my), FUNC_20(VAR_11->my),
     VAR_19, VAR_24,
     VAR_12,
     FUNC_8(VAR_13),
     VAR_16,
     VAR_22, &VAR_26)) != 0)
  goto out;


 if (VAR_11->session_id == ((void*)0)) {
  VAR_11->session_id_len = VAR_26;
  VAR_11->session_id = FUNC_18(VAR_11->session_id_len);
  if (VAR_11->session_id == ((void*)0)) {
   VAR_27 = VAR_2;
   goto out;
  }
  FUNC_19(VAR_11->session_id, VAR_22, VAR_11->session_id_len);
 }


 if ((VAR_27 = VAR_11->sign(VAR_17, VAR_18, &VAR_20,
      &VAR_23, VAR_22, VAR_26, VAR_11->hostkey_alg, VAR_10->compat)) < 0)
  goto out;



 VAR_15 = FUNC_8(VAR_13);

 if ((VAR_27 = FUNC_32(VAR_10, VAR_0)) != 0 ||
     (VAR_27 = FUNC_30(VAR_10, VAR_19, VAR_24)) != 0 ||
     (VAR_27 = FUNC_29(VAR_10, VAR_15, VAR_14)) != 0 ||
     (VAR_27 = FUNC_30(VAR_10, VAR_20, VAR_23)) != 0 ||
     (VAR_27 = FUNC_31(VAR_10)) != 0)
  goto out;

 if ((VAR_27 = FUNC_15(VAR_10, VAR_22, VAR_26, VAR_16)) == 0)
  VAR_27 = FUNC_17(VAR_10);
 out:
 FUNC_12(VAR_22, sizeof(VAR_22));
 FUNC_5(VAR_11->ec_client_key);
 VAR_11->ec_client_key = ((void*)0);
 FUNC_5(VAR_13);
 if (VAR_21) {
  FUNC_12(VAR_21, VAR_25);
  FUNC_14(VAR_21);
 }
 FUNC_1(VAR_16);
 FUNC_14(VAR_19);
 FUNC_14(VAR_20);
 return VAR_27;
}
