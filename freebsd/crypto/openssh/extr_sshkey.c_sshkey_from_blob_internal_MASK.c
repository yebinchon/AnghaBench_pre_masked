
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
struct sshkey {char* ed25519_pk; char* xmss_pk; int * ecdsa; int ecdsa_nid; int dsa; int rsa; } ;
struct sshbuf {int dummy; } ;
typedef int EC_POINT ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 size_t VAR_0 ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (struct sshbuf*,struct sshkey*,struct sshbuf*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct sshbuf*,int ) ;
 int FUNC_17 (struct sshbuf*) ;
 struct sshbuf* FUNC_18 (struct sshbuf*) ;
 int FUNC_19 (struct sshbuf*,int *) ;
 scalar_t__ FUNC_20 (struct sshbuf*,char**,int *) ;
 int FUNC_21 (struct sshbuf*,int *,int ) ;
 int FUNC_22 (struct sshbuf*,char**,size_t*) ;
 int FUNC_23 (struct sshbuf*,int *,int *) ;
 scalar_t__ FUNC_24 (struct sshbuf*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (struct sshkey*) ;
 scalar_t__ FUNC_30 (struct sshkey*) ;
 struct sshkey* FUNC_31 (int) ;
 int FUNC_32 (char*) ;
 scalar_t__ FUNC_33 (int) ;
 int FUNC_34 (struct sshkey*,struct sshbuf*) ;
 int FUNC_35 (struct sshkey*,char*) ;
 size_t FUNC_36 (struct sshkey*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_37(struct sshbuf *VAR_11, struct sshkey **VAR_12,
    int VAR_13)
{
 int VAR_14, VAR_15 = VAR_4;
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct sshkey *VAR_19 = ((void*)0);
 size_t VAR_20;
 u_char *VAR_21 = ((void*)0);
 struct sshbuf *VAR_22;
 if (VAR_12 != ((void*)0))
  *VAR_12 = ((void*)0);
 if ((VAR_22 = FUNC_18(VAR_11)) == ((void*)0)) {
  VAR_15 = VAR_1;
  goto out;
 }
 if (FUNC_20(VAR_11, &VAR_16, ((void*)0)) != 0) {
  VAR_15 = VAR_5;
  goto out;
 }

 VAR_14 = FUNC_32(VAR_16);
 if (!VAR_13 && FUNC_33(VAR_14)) {
  VAR_15 = VAR_6;
  goto out;
 }
 switch (VAR_14) {
 case 133:

  if (FUNC_23(VAR_11, ((void*)0), ((void*)0)) != 0) {
   VAR_15 = VAR_5;
   goto out;
  }

 case 134:
  if ((VAR_15 = FUNC_22(VAR_11, &VAR_21, &VAR_20)) != 0)
   goto out;
  if (VAR_20 != VAR_0) {
   VAR_15 = VAR_5;
   goto out;
  }
  if ((VAR_19 = FUNC_31(VAR_14)) == ((void*)0)) {
   VAR_15 = VAR_1;
   goto out;
  }
  VAR_19->ed25519_pk = VAR_21;
  VAR_21 = ((void*)0);
  break;
 case 130:
 default:
  VAR_15 = VAR_8;
  goto out;
 }


 if (FUNC_30(VAR_19) && (VAR_15 = FUNC_13(VAR_11, VAR_19, VAR_22)) != 0)
  goto out;

 if (VAR_19 != ((void*)0) && FUNC_24(VAR_11) != 0) {
  VAR_15 = VAR_5;
  goto out;
 }
 VAR_15 = 0;
 if (VAR_12 != ((void*)0)) {
  *VAR_12 = VAR_19;
  VAR_19 = ((void*)0);
 }
 out:
 FUNC_17(VAR_22);
 FUNC_29(VAR_19);
 FUNC_15(VAR_18);
 FUNC_15(VAR_16);
 FUNC_15(VAR_17);
 FUNC_15(VAR_21);
 return VAR_15;
}
