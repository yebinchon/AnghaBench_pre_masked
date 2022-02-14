
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
struct sshkey {int dummy; } ;
struct ssh {int compat; struct kex* kex; } ;
struct kex {size_t session_id_len; int (* sign ) (struct sshkey*,struct sshkey*,int **,size_t*,int *,size_t,int ,int ) ;int * dh; int hostkey_alg; int * session_id; int my; int peer; int server_version_string; int client_version_string; int hash_alg; int hostkey_nid; int hostkey_type; struct sshkey* (* load_host_private_key ) (int ,int ,struct ssh*) ;struct sshkey* (* load_host_public_key ) (int ,int ,struct ssh*) ;} ;
typedef int hash ;
typedef int const BIGNUM ;


 int * FUNC_0 (int *,int,int const*) ;
 int FUNC_1 (int const*) ;
 int const* FUNC_2 () ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int const*) ;
 int FUNC_5 (int *,int const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int const**,int *) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,int const*) ;
 int FUNC_12 (char*,int *,int) ;
 int FUNC_13 (int *,size_t) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ssh*,int *,size_t,int const*) ;
 int FUNC_17 (int ,int ,int ,int ,int ,int ,int ,int *,size_t,int const*,int const*,int const*,int *,size_t*) ;
 int FUNC_18 (struct ssh*) ;
 void* FUNC_19 (size_t) ;
 int FUNC_20 (int *,int *,size_t) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct sshkey*,int **,size_t*) ;
 int FUNC_24 (struct ssh*,char*) ;
 int FUNC_25 (struct ssh*,int const*) ;
 int FUNC_26 (struct ssh*) ;
 int FUNC_27 (struct ssh*,int const*) ;
 int FUNC_28 (struct ssh*,int *,size_t) ;
 int FUNC_29 (struct ssh*) ;
 int FUNC_30 (struct ssh*,int ) ;
 int VAR_7 ;
 struct sshkey* FUNC_31 (int ,int ,struct ssh*) ;
 struct sshkey* FUNC_32 (int ,int ,struct ssh*) ;
 int FUNC_33 (struct sshkey*,struct sshkey*,int **,size_t*,int *,size_t,int ,int ) ;

int
FUNC_34(int VAR_8, u_int32_t VAR_9, struct ssh *VAR_10)
{
 struct kex *VAR_11 = VAR_10->kex;
 BIGNUM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 const BIGNUM *VAR_14;
 struct sshkey *VAR_15, *VAR_16;
 u_char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 u_char VAR_20[VAR_1];
 size_t VAR_21, VAR_22;
 size_t VAR_23 = 0, VAR_24;
 int VAR_25, VAR_26;

 if (VAR_11->load_host_public_key == ((void*)0) ||
     VAR_11->load_host_private_key == ((void*)0)) {
  VAR_26 = VAR_3;
  goto out;
 }
 VAR_15 = VAR_11->load_host_public_key(VAR_11->hostkey_type,
     VAR_11->hostkey_nid, VAR_10);
 VAR_16 = VAR_11->load_host_private_key(VAR_11->hostkey_type,
     VAR_11->hostkey_nid, VAR_10);
 if (VAR_15 == ((void*)0)) {
  VAR_26 = VAR_6;
  goto out;
 }


 if ((VAR_13 = FUNC_2()) == ((void*)0)) {
  VAR_26 = VAR_2;
  goto out;
 }
 FUNC_7(VAR_11->dh, &VAR_14, ((void*)0));
 if ((VAR_26 = FUNC_25(VAR_10, VAR_13)) != 0 ||
     (VAR_26 = FUNC_26(VAR_10)) != 0)
  goto out;
 if (!FUNC_11(VAR_11->dh, VAR_13)) {
  FUNC_24(VAR_10, "bad client public DH value");
  VAR_26 = VAR_5;
  goto out;
 }

 VAR_23 = FUNC_8(VAR_11->dh);
 if ((VAR_17 = FUNC_19(VAR_23)) == ((void*)0) ||
     (VAR_12 = FUNC_2()) == ((void*)0)) {
  VAR_26 = VAR_2;
  goto out;
 }
 if ((VAR_25 = FUNC_5(VAR_17, VAR_13, VAR_11->dh)) < 0 ||
     FUNC_0(VAR_17, VAR_25, VAR_12) == ((void*)0)) {
  VAR_26 = VAR_4;
  goto out;
 }



 if ((VAR_26 = FUNC_23(VAR_15, &VAR_19,
     &VAR_21)) != 0)
  goto out;

 VAR_24 = sizeof(VAR_20);
 if ((VAR_26 = FUNC_17(
     VAR_11->hash_alg,
     VAR_11->client_version_string,
     VAR_11->server_version_string,
     FUNC_22(VAR_11->peer), FUNC_21(VAR_11->peer),
     FUNC_22(VAR_11->my), FUNC_21(VAR_11->my),
     VAR_19, VAR_21,
     VAR_13,
     VAR_14,
     VAR_12,
     VAR_20, &VAR_24)) != 0)
  goto out;


 if (VAR_11->session_id == ((void*)0)) {
  VAR_11->session_id_len = VAR_24;
  VAR_11->session_id = FUNC_19(VAR_11->session_id_len);
  if (VAR_11->session_id == ((void*)0)) {
   VAR_26 = VAR_2;
   goto out;
  }
  FUNC_20(VAR_11->session_id, VAR_20, VAR_11->session_id_len);
 }


 if ((VAR_26 = VAR_11->sign(VAR_16, VAR_15, &VAR_18,
      &VAR_22, VAR_20, VAR_24, VAR_11->hostkey_alg, VAR_10->compat)) < 0)
  goto out;




 if ((VAR_26 = FUNC_30(VAR_10, VAR_0)) != 0 ||
     (VAR_26 = FUNC_28(VAR_10, VAR_19, VAR_21)) != 0 ||
     (VAR_26 = FUNC_27(VAR_10, VAR_14)) != 0 ||
     (VAR_26 = FUNC_28(VAR_10, VAR_18, VAR_22)) != 0 ||
     (VAR_26 = FUNC_29(VAR_10)) != 0)
  goto out;

 if ((VAR_26 = FUNC_16(VAR_10, VAR_20, VAR_24, VAR_12)) == 0)
  VAR_26 = FUNC_18(VAR_10);
 out:
 FUNC_13(VAR_20, sizeof(VAR_20));
 FUNC_6(VAR_11->dh);
 VAR_11->dh = ((void*)0);
 FUNC_1(VAR_13);
 if (VAR_17) {
  FUNC_13(VAR_17, VAR_23);
  FUNC_15(VAR_17);
 }
 FUNC_1(VAR_12);
 FUNC_15(VAR_19);
 FUNC_15(VAR_18);
 return VAR_26;
}
