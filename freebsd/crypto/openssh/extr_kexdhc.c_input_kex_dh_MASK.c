
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {scalar_t__ type; scalar_t__ ecdsa_nid; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {int (* verify_host_key ) (struct sshkey*,struct ssh*) ;scalar_t__ hostkey_type; scalar_t__ hostkey_nid; size_t session_id_len; int * dh; int * session_id; int hostkey_alg; int peer; int my; int server_version_string; int client_version_string; int hash_alg; } ;
typedef int hash ;
typedef int BIGNUM ;


 int * FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const**,int *) ;
 size_t FUNC_8 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (char*,int *,int) ;
 int FUNC_12 (int *,size_t) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ssh*,int *,size_t,int *) ;
 int FUNC_16 (int ,int ,int ,int ,int ,int ,int ,int *,size_t,int const*,int *,int *,int *,size_t*) ;
 int FUNC_17 (struct ssh*) ;
 void* FUNC_18 (size_t) ;
 int FUNC_19 (int *,int *,size_t) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct sshkey*) ;
 int FUNC_23 (int *,size_t,struct sshkey**) ;
 int FUNC_24 (struct sshkey*,int *,size_t,int *,size_t,int ,int ) ;
 int FUNC_25 (struct ssh*,char*) ;
 int FUNC_26 (struct ssh*,int *) ;
 int FUNC_27 (struct ssh*) ;
 int FUNC_28 (struct ssh*,int **,size_t*) ;
 int VAR_8 ;
 int FUNC_29 (struct sshkey*,struct ssh*) ;

__attribute__((used)) static int
FUNC_30(int VAR_9, u_int32_t VAR_10, struct ssh *VAR_11)
{
 struct kex *VAR_12 = VAR_11->kex;
 BIGNUM *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 const BIGNUM *VAR_15;
 struct sshkey *VAR_16 = ((void*)0);
 u_char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 u_char VAR_20[VAR_1];
 size_t VAR_21 = 0, VAR_22, VAR_23, VAR_24;
 int VAR_25, VAR_26;

 if (VAR_12->verify_host_key == ((void*)0)) {
  VAR_26 = VAR_3;
  goto out;
 }

 if ((VAR_26 = FUNC_28(VAR_11, &VAR_18,
     &VAR_23)) != 0 ||
     (VAR_26 = FUNC_23(VAR_18, VAR_23,
     &VAR_16)) != 0)
  goto out;
 if (VAR_16->type != VAR_12->hostkey_type ||
     (VAR_12->hostkey_type == VAR_0 &&
     VAR_16->ecdsa_nid != VAR_12->hostkey_nid)) {
  VAR_26 = VAR_4;
  goto out;
 }
 if (VAR_12->verify_host_key(VAR_16, VAR_11) == -1) {
  VAR_26 = VAR_7;
  goto out;
 }

 if ((VAR_13 = FUNC_2()) == ((void*)0)) {
  VAR_26 = VAR_2;
  goto out;
 }

 if ((VAR_26 = FUNC_26(VAR_11, VAR_13)) != 0 ||
     (VAR_26 = FUNC_28(VAR_11, &VAR_19, &VAR_22)) != 0 ||
     (VAR_26 = FUNC_27(VAR_11)) != 0)
  goto out;






 if (!FUNC_10(VAR_12->dh, VAR_13)) {
  FUNC_25(VAR_11, "bad server public DH value");
  VAR_26 = VAR_6;
  goto out;
 }

 VAR_21 = FUNC_8(VAR_12->dh);
 if ((VAR_17 = FUNC_18(VAR_21)) == ((void*)0) ||
     (VAR_14 = FUNC_2()) == ((void*)0)) {
  VAR_26 = VAR_2;
  goto out;
 }
 if ((VAR_25 = FUNC_5(VAR_17, VAR_13, VAR_12->dh)) < 0 ||
     FUNC_0(VAR_17, VAR_25, VAR_14) == ((void*)0)) {
  VAR_26 = VAR_5;
  goto out;
 }





 FUNC_7(VAR_12->dh, &VAR_15, ((void*)0));
 VAR_24 = sizeof(VAR_20);
 if ((VAR_26 = FUNC_16(
     VAR_12->hash_alg,
     VAR_12->client_version_string,
     VAR_12->server_version_string,
     FUNC_21(VAR_12->my), FUNC_20(VAR_12->my),
     FUNC_21(VAR_12->peer), FUNC_20(VAR_12->peer),
     VAR_18, VAR_23,
     VAR_15,
     VAR_13,
     VAR_14,
     VAR_20, &VAR_24)) != 0)
  goto out;

 if ((VAR_26 = FUNC_24(VAR_16, VAR_19, VAR_22, VAR_20, VAR_24,
     VAR_12->hostkey_alg, VAR_11->compat)) != 0)
  goto out;


 if (VAR_12->session_id == ((void*)0)) {
  VAR_12->session_id_len = VAR_24;
  VAR_12->session_id = FUNC_18(VAR_12->session_id_len);
  if (VAR_12->session_id == ((void*)0)) {
   VAR_26 = VAR_2;
   goto out;
  }
  FUNC_19(VAR_12->session_id, VAR_20, VAR_12->session_id_len);
 }

 if ((VAR_26 = FUNC_15(VAR_11, VAR_20, VAR_24, VAR_14)) == 0)
  VAR_26 = FUNC_17(VAR_11);
 out:
 FUNC_12(VAR_20, sizeof(VAR_20));
 FUNC_6(VAR_12->dh);
 VAR_12->dh = ((void*)0);
 FUNC_1(VAR_13);
 if (VAR_17) {
  FUNC_12(VAR_17, VAR_21);
  FUNC_14(VAR_17);
 }
 FUNC_1(VAR_14);
 FUNC_22(VAR_16);
 FUNC_14(VAR_18);
 FUNC_14(VAR_19);
 return VAR_26;
}
