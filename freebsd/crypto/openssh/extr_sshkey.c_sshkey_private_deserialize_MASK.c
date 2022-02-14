
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int ecdsa_nid; int type; int rsa; int * xmss_sk; int * xmss_pk; int xmss_name; int * ed25519_sk; int * ed25519_pk; int * ecdsa; int dsa; } ;
struct sshbuf {int dummy; } ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,size_t) ;
 int FUNC_14 (struct sshkey*,int *) ;
 int FUNC_15 (struct sshbuf*,int *) ;
 int FUNC_16 (struct sshbuf*,char**,int *) ;
 int FUNC_17 (struct sshbuf*,int *) ;
 int FUNC_18 (struct sshbuf*,int **,size_t*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (struct sshkey*) ;
 int FUNC_24 (struct sshbuf*,struct sshkey**) ;
 struct sshkey* FUNC_25 (int) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (struct sshkey*,struct sshbuf*) ;
 int FUNC_28 (struct sshkey*,char*) ;
 size_t FUNC_29 (struct sshkey*) ;
 size_t FUNC_30 (struct sshkey*) ;
 int FUNC_31 (char*,int ) ;

int
FUNC_32(struct sshbuf *VAR_9, struct sshkey **VAR_10)
{
 char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct sshkey *VAR_14 = ((void*)0);
 size_t VAR_15 = 0, VAR_16 = 0;
 int VAR_17, VAR_18 = VAR_4;
 u_char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 u_char *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
 if (VAR_10 != ((void*)0))
  *VAR_10 = ((void*)0);
 if ((VAR_18 = FUNC_16(VAR_9, &VAR_11, ((void*)0))) != 0)
  goto out;
 VAR_17 = FUNC_26(VAR_11);
 switch (VAR_17) {
 case 133:
  if ((VAR_14 = FUNC_25(VAR_17)) == ((void*)0)) {
   VAR_18 = VAR_2;
   goto out;
  }
  if ((VAR_18 = FUNC_18(VAR_9, &VAR_19, &VAR_15)) != 0 ||
      (VAR_18 = FUNC_18(VAR_9, &VAR_20, &VAR_16)) != 0)
   goto out;
  if (VAR_15 != VAR_0 || VAR_16 != VAR_1) {
   VAR_18 = VAR_6;
   goto out;
  }
  VAR_14->ed25519_pk = VAR_19;
  VAR_14->ed25519_sk = VAR_20;
  VAR_19 = VAR_20 = ((void*)0);
  break;
 case 132:
  if ((VAR_18 = FUNC_24(VAR_9, &VAR_14)) != 0 ||
      (VAR_18 = FUNC_18(VAR_9, &VAR_19, &VAR_15)) != 0 ||
      (VAR_18 = FUNC_18(VAR_9, &VAR_20, &VAR_16)) != 0)
   goto out;
  if (VAR_15 != VAR_0 || VAR_16 != VAR_1) {
   VAR_18 = VAR_6;
   goto out;
  }
  VAR_14->ed25519_pk = VAR_19;
  VAR_14->ed25519_sk = VAR_20;
  VAR_19 = VAR_20 = ((void*)0);
  break;
 default:
  VAR_18 = VAR_7;
  goto out;
 }
 VAR_18 = 0;
 if (VAR_10 != ((void*)0)) {
  *VAR_10 = VAR_14;
  VAR_14 = ((void*)0);
 }
 out:
 FUNC_12(VAR_11);
 FUNC_12(VAR_12);
 FUNC_23(VAR_14);
 FUNC_13(VAR_19, VAR_15);
 FUNC_13(VAR_20, VAR_16);
 FUNC_12(VAR_13);
 FUNC_13(VAR_21, VAR_15);
 FUNC_13(VAR_22, VAR_16);
 return VAR_18;
}
