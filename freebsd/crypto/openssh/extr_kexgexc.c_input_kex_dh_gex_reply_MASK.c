
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {scalar_t__ type; scalar_t__ ecdsa_nid; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {int (* verify_host_key ) (struct sshkey*,struct ssh*) ;scalar_t__ hostkey_type; scalar_t__ hostkey_nid; int min; int max; size_t session_id_len; int * dh; int * session_id; int hostkey_alg; int nbits; int peer; int my; int server_version_string; int client_version_string; int hash_alg; } ;
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
 int FUNC_8 (int *,int const**,int *,int const**) ;
 size_t FUNC_9 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char*,int *,int) ;
 int FUNC_13 (int *,size_t) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ssh*,int *,size_t,int *) ;
 int FUNC_17 (struct ssh*) ;
 int FUNC_18 (int ,int ,int ,int ,int ,int ,int ,int *,size_t,int,int ,int,int const*,int const*,int const*,int *,int *,int *,size_t*) ;
 void* FUNC_19 (size_t) ;
 int FUNC_20 (int *,int *,size_t) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct sshkey*) ;
 int FUNC_24 (int *,size_t,struct sshkey**) ;
 int FUNC_25 (struct sshkey*,int *,size_t,int *,size_t,int ,int) ;
 int FUNC_26 (struct ssh*,char*) ;
 int FUNC_27 (struct ssh*,int *) ;
 int FUNC_28 (struct ssh*) ;
 int FUNC_29 (struct ssh*,int **,size_t*) ;
 int VAR_9 ;
 int FUNC_30 (struct sshkey*,struct ssh*) ;

__attribute__((used)) static int
FUNC_31(int VAR_10, u_int32_t VAR_11, struct ssh *VAR_12)
{
 struct kex *VAR_13 = VAR_12->kex;
 BIGNUM *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 const BIGNUM *VAR_16, *VAR_17, *VAR_18;
 struct sshkey *VAR_19 = ((void*)0);
 u_char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
 u_char VAR_23[VAR_1];
 size_t VAR_24 = 0, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29;

 FUNC_10("got SSH2_MSG_KEX_DH_GEX_REPLY");
 if (VAR_13->verify_host_key == ((void*)0)) {
  VAR_29 = VAR_3;
  goto out;
 }

 if ((VAR_29 = FUNC_29(VAR_12, &VAR_22,
     &VAR_26)) != 0 ||
     (VAR_29 = FUNC_24(VAR_22, VAR_26,
     &VAR_19)) != 0)
  goto out;
 if (VAR_19->type != VAR_13->hostkey_type ||
     (VAR_13->hostkey_type == VAR_0 &&
     VAR_19->ecdsa_nid != VAR_13->hostkey_nid)) {
  VAR_29 = VAR_4;
  goto out;
 }
 if (VAR_13->verify_host_key(VAR_19, VAR_12) == -1) {
  VAR_29 = VAR_7;
  goto out;
 }

 if ((VAR_14 = FUNC_2()) == ((void*)0)) {
  VAR_29 = VAR_2;
  goto out;
 }

 if ((VAR_29 = FUNC_27(VAR_12, VAR_14)) != 0 ||
     (VAR_29 = FUNC_29(VAR_12, &VAR_21, &VAR_25)) != 0 ||
     (VAR_29 = FUNC_28(VAR_12)) != 0)
  goto out;






 if (!FUNC_11(VAR_13->dh, VAR_14)) {
  FUNC_26(VAR_12, "bad server public DH value");
  VAR_29 = VAR_6;
  goto out;
 }

 VAR_24 = FUNC_9(VAR_13->dh);
 if ((VAR_20 = FUNC_19(VAR_24)) == ((void*)0) ||
     (VAR_15 = FUNC_2()) == ((void*)0)) {
  VAR_29 = VAR_2;
  goto out;
 }
 if ((VAR_28 = FUNC_5(VAR_20, VAR_14, VAR_13->dh)) < 0 ||
     FUNC_0(VAR_20, VAR_28, VAR_15) == ((void*)0)) {
  VAR_29 = VAR_5;
  goto out;
 }



 if (VAR_12->compat & VAR_8)
  VAR_13->min = VAR_13->max = -1;


 FUNC_7(VAR_13->dh, &VAR_16, ((void*)0));
 FUNC_8(VAR_13->dh, &VAR_17, ((void*)0), &VAR_18);
 VAR_27 = sizeof(VAR_23);
 if ((VAR_29 = FUNC_18(
     VAR_13->hash_alg,
     VAR_13->client_version_string,
     VAR_13->server_version_string,
     FUNC_22(VAR_13->my), FUNC_21(VAR_13->my),
     FUNC_22(VAR_13->peer), FUNC_21(VAR_13->peer),
     VAR_22, VAR_26,
     VAR_13->min, VAR_13->nbits, VAR_13->max,
     VAR_17, VAR_18,
     VAR_16,
     VAR_14,
     VAR_15,
     VAR_23, &VAR_27)) != 0)
  goto out;

 if ((VAR_29 = FUNC_25(VAR_19, VAR_21, VAR_25, VAR_23,
     VAR_27, VAR_13->hostkey_alg, VAR_12->compat)) != 0)
  goto out;


 if (VAR_13->session_id == ((void*)0)) {
  VAR_13->session_id_len = VAR_27;
  VAR_13->session_id = FUNC_19(VAR_13->session_id_len);
  if (VAR_13->session_id == ((void*)0)) {
   VAR_29 = VAR_2;
   goto out;
  }
  FUNC_20(VAR_13->session_id, VAR_23, VAR_13->session_id_len);
 }

 if ((VAR_29 = FUNC_16(VAR_12, VAR_23, VAR_27, VAR_15)) == 0)
  VAR_29 = FUNC_17(VAR_12);
 out:
 FUNC_13(VAR_23, sizeof(VAR_23));
 FUNC_6(VAR_13->dh);
 VAR_13->dh = ((void*)0);
 FUNC_1(VAR_14);
 if (VAR_20) {
  FUNC_13(VAR_20, VAR_24);
  FUNC_15(VAR_20);
 }
 FUNC_1(VAR_15);
 FUNC_23(VAR_19);
 FUNC_15(VAR_22);
 FUNC_15(VAR_21);
 return VAR_29;
}
