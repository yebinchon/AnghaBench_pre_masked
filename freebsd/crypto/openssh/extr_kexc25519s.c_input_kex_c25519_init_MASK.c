
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {size_t session_id_len; int (* sign ) (struct sshkey*,struct sshkey*,int **,size_t*,int *,size_t,int ,int ) ;int hostkey_alg; int * session_id; struct sshbuf* my; struct sshbuf* peer; int server_version_string; int client_version_string; int hash_alg; int hostkey_nid; int hostkey_type; struct sshkey* (* load_host_private_key ) (int ,int ,struct ssh*) ;struct sshkey* (* load_host_public_key ) (int ,int ,struct ssh*) ;} ;
typedef int server_pubkey ;
typedef int server_key ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int *,size_t,int *,int *,int ,int ,int *,size_t*) ;
 int FUNC_4 (struct ssh*,int *,size_t,struct sshbuf*) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,struct sshbuf*) ;
 int * FUNC_8 (size_t) ;
 int FUNC_9 (int *,int *,size_t) ;
 int FUNC_10 (struct sshbuf*) ;
 int FUNC_11 (struct sshbuf*) ;
 struct sshbuf* FUNC_12 () ;
 int FUNC_13 (struct sshbuf*) ;
 int FUNC_14 (struct sshkey*,int **,size_t*) ;
 int FUNC_15 (struct ssh*) ;
 int FUNC_16 (struct ssh*,int **,size_t*) ;
 int FUNC_17 (struct ssh*,int *,size_t) ;
 int FUNC_18 (struct ssh*) ;
 int FUNC_19 (struct ssh*,int ) ;
 struct sshkey* FUNC_20 (int ,int ,struct ssh*) ;
 struct sshkey* FUNC_21 (int ,int ,struct ssh*) ;
 int FUNC_22 (struct sshkey*,struct sshkey*,int **,size_t*,int *,size_t,int ,int ) ;

__attribute__((used)) static int
FUNC_23(int VAR_7, u_int32_t VAR_8, struct ssh *VAR_9)
{
 struct kex *VAR_10 = VAR_9->kex;
 struct sshkey *VAR_11, *VAR_12;
 struct sshbuf *VAR_13 = ((void*)0);
 u_char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 u_char VAR_16[VAR_0];
 u_char *VAR_17 = ((void*)0);
 u_char VAR_18[VAR_0];
 u_char VAR_19[VAR_2];
 size_t VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24;


 FUNC_6(VAR_16, VAR_18);



 if (VAR_10->load_host_public_key == ((void*)0) ||
     VAR_10->load_host_private_key == ((void*)0)) {
  VAR_24 = VAR_4;
  goto out;
 }
 VAR_12 = VAR_10->load_host_public_key(VAR_10->hostkey_type,
     VAR_10->hostkey_nid, VAR_9);
 VAR_11 = VAR_10->load_host_private_key(VAR_10->hostkey_type,
     VAR_10->hostkey_nid, VAR_9);
 if (VAR_12 == ((void*)0)) {
  VAR_24 = VAR_5;
  goto out;
 }

 if ((VAR_24 = FUNC_16(VAR_9, &VAR_17, &VAR_21)) != 0 ||
     (VAR_24 = FUNC_15(VAR_9)) != 0)
  goto out;
 if (VAR_21 != VAR_0) {
  VAR_24 = VAR_6;
  goto out;
 }




 if ((VAR_13 = FUNC_12()) == ((void*)0)) {
  VAR_24 = VAR_3;
  goto out;
 }
 if ((VAR_24 = FUNC_7(VAR_16, VAR_17,
     VAR_13)) < 0)
  goto out;


 if ((VAR_24 = FUNC_14(VAR_12, &VAR_14,
     &VAR_22)) != 0)
  goto out;
 VAR_23 = sizeof(VAR_19);
 if ((VAR_24 = FUNC_3(
     VAR_10->hash_alg,
     VAR_10->client_version_string,
     VAR_10->server_version_string,
     FUNC_13(VAR_10->peer), FUNC_11(VAR_10->peer),
     FUNC_13(VAR_10->my), FUNC_11(VAR_10->my),
     VAR_14, VAR_22,
     VAR_17,
     VAR_18,
     FUNC_13(VAR_13), FUNC_11(VAR_13),
     VAR_19, &VAR_23)) < 0)
  goto out;


 if (VAR_10->session_id == ((void*)0)) {
  VAR_10->session_id_len = VAR_23;
  VAR_10->session_id = FUNC_8(VAR_10->session_id_len);
  if (VAR_10->session_id == ((void*)0)) {
   VAR_24 = VAR_3;
   goto out;
  }
  FUNC_9(VAR_10->session_id, VAR_19, VAR_10->session_id_len);
 }


 if ((VAR_24 = VAR_10->sign(VAR_11, VAR_12, &VAR_15,
      &VAR_20, VAR_19, VAR_23, VAR_10->hostkey_alg, VAR_9->compat)) < 0)
  goto out;


 if ((VAR_24 = FUNC_19(VAR_9, VAR_1)) != 0 ||
     (VAR_24 = FUNC_17(VAR_9, VAR_14, VAR_22)) != 0 ||
     (VAR_24 = FUNC_17(VAR_9, VAR_18, sizeof(VAR_18))) != 0 ||
     (VAR_24 = FUNC_17(VAR_9, VAR_15, VAR_20)) != 0 ||
     (VAR_24 = FUNC_18(VAR_9)) != 0)
  goto out;

 if ((VAR_24 = FUNC_4(VAR_9, VAR_19, VAR_23, VAR_13)) == 0)
  VAR_24 = FUNC_5(VAR_9);
out:
 FUNC_1(VAR_19, sizeof(VAR_19));
 FUNC_1(VAR_16, sizeof(VAR_16));
 FUNC_2(VAR_14);
 FUNC_2(VAR_15);
 FUNC_2(VAR_17);
 FUNC_10(VAR_13);
 return VAR_24;
}
