
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {scalar_t__ type; scalar_t__ ecdsa_nid; } ;
struct sshbuf {int dummy; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {int (* verify_host_key ) (struct sshkey*,struct ssh*) ;scalar_t__ hostkey_type; scalar_t__ hostkey_nid; size_t session_id_len; int * c25519_client_key; int * session_id; int hostkey_alg; int c25519_client_pubkey; struct sshbuf* peer; struct sshbuf* my; int server_version_string; int client_version_string; int hash_alg; } ;
typedef int hash ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int *,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int *,size_t,int ,int *,int ,int ,int *,size_t*) ;
 int FUNC_4 (struct ssh*,int *,size_t,struct sshbuf*) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (int *,int *,struct sshbuf*) ;
 int * FUNC_7 (size_t) ;
 int FUNC_8 (int *,int *,size_t) ;
 int FUNC_9 (struct sshbuf*) ;
 int FUNC_10 (struct sshbuf*) ;
 struct sshbuf* FUNC_11 () ;
 int FUNC_12 (struct sshbuf*) ;
 int FUNC_13 (struct sshkey*) ;
 int FUNC_14 (int *,size_t,struct sshkey**) ;
 int FUNC_15 (struct sshkey*,int *,size_t,int *,size_t,int ,int ) ;
 int FUNC_16 (struct ssh*) ;
 int FUNC_17 (struct ssh*,int **,size_t*) ;
 int FUNC_18 (struct sshkey*,struct ssh*) ;

__attribute__((used)) static int
FUNC_19(int VAR_7, u_int32_t VAR_8, struct ssh *VAR_9)
{
 struct kex *VAR_10 = VAR_9->kex;
 struct sshkey *VAR_11 = ((void*)0);
 struct sshbuf *VAR_12 = ((void*)0);
 u_char *VAR_13 = ((void*)0);
 u_char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 u_char VAR_16[VAR_2];
 size_t VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;

 if (VAR_10->verify_host_key == ((void*)0)) {
  VAR_21 = VAR_4;
  goto out;
 }


 if ((VAR_21 = FUNC_17(VAR_9, &VAR_14,
     &VAR_19)) != 0 ||
     (VAR_21 = FUNC_14(VAR_14, VAR_19,
     &VAR_11)) != 0)
  goto out;
 if (VAR_11->type != VAR_10->hostkey_type ||
     (VAR_10->hostkey_type == VAR_1 &&
     VAR_11->ecdsa_nid != VAR_10->hostkey_nid)) {
  VAR_21 = VAR_5;
  goto out;
 }
 if (VAR_10->verify_host_key(VAR_11, VAR_9) == -1) {
  VAR_21 = VAR_6;
  goto out;
 }



 if ((VAR_21 = FUNC_17(VAR_9, &VAR_13, &VAR_18)) != 0 ||
     (VAR_21 = FUNC_17(VAR_9, &VAR_15, &VAR_17)) != 0 ||
     (VAR_21 = FUNC_16(VAR_9)) != 0)
  goto out;
 if (VAR_18 != VAR_0) {
  VAR_21 = VAR_6;
  goto out;
 }





 if ((VAR_12 = FUNC_11()) == ((void*)0)) {
  VAR_21 = VAR_3;
  goto out;
 }
 if ((VAR_21 = FUNC_6(VAR_10->c25519_client_key, VAR_13,
     VAR_12)) < 0)
  goto out;


 VAR_20 = sizeof(VAR_16);
 if ((VAR_21 = FUNC_3(
     VAR_10->hash_alg,
     VAR_10->client_version_string,
     VAR_10->server_version_string,
     FUNC_12(VAR_10->my), FUNC_10(VAR_10->my),
     FUNC_12(VAR_10->peer), FUNC_10(VAR_10->peer),
     VAR_14, VAR_19,
     VAR_10->c25519_client_pubkey,
     VAR_13,
     FUNC_12(VAR_12), FUNC_10(VAR_12),
     VAR_16, &VAR_20)) < 0)
  goto out;

 if ((VAR_21 = FUNC_15(VAR_11, VAR_15, VAR_17, VAR_16, VAR_20,
     VAR_10->hostkey_alg, VAR_9->compat)) != 0)
  goto out;


 if (VAR_10->session_id == ((void*)0)) {
  VAR_10->session_id_len = VAR_20;
  VAR_10->session_id = FUNC_7(VAR_10->session_id_len);
  if (VAR_10->session_id == ((void*)0)) {
   VAR_21 = VAR_3;
   goto out;
  }
  FUNC_8(VAR_10->session_id, VAR_16, VAR_10->session_id_len);
 }

 if ((VAR_21 = FUNC_4(VAR_9, VAR_16, VAR_20, VAR_12)) == 0)
  VAR_21 = FUNC_5(VAR_9);
out:
 FUNC_1(VAR_16, sizeof(VAR_16));
 FUNC_1(VAR_10->c25519_client_key, sizeof(VAR_10->c25519_client_key));
 FUNC_2(VAR_14);
 FUNC_2(VAR_13);
 FUNC_2(VAR_15);
 FUNC_13(VAR_11);
 FUNC_9(VAR_12);
 return VAR_21;
}
