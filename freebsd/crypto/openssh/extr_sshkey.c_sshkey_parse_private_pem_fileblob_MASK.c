
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int ecdsa_nid; int * ecdsa; int dsa; int rsa; } ;
struct sshbuf {int dummy; } ;
typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_12 (int *,int *,int *,char*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (struct sshbuf*) ;
 int FUNC_19 (struct sshbuf*) ;
 int * FUNC_20 (int) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int ,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct sshkey*) ;
 struct sshkey* FUNC_26 (int) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_27(struct sshbuf *VAR_12, int VAR_13,
    const char *VAR_14, struct sshkey **VAR_15)
{
 EVP_PKEY *VAR_16 = ((void*)0);
 struct sshkey *VAR_17 = ((void*)0);
 BIO *VAR_18 = ((void*)0);
 int VAR_19;

 if (VAR_15 != ((void*)0))
  *VAR_15 = ((void*)0);

 if ((VAR_18 = FUNC_1(FUNC_2())) == ((void*)0) || FUNC_18(VAR_12) > VAR_3)
  return VAR_8;
 if (FUNC_3(VAR_18, FUNC_19(VAR_12), FUNC_18(VAR_12)) !=
     (int)FUNC_18(VAR_12)) {
  VAR_19 = VAR_8;
  goto out;
 }

 FUNC_16();
 if ((VAR_16 = FUNC_12(VAR_18, ((void*)0), ((void*)0),
     (char *)VAR_14)) == ((void*)0)) {
  VAR_19 = FUNC_17();
  goto out;
 }
 if (FUNC_7(VAR_16) == VAR_2 &&
     (VAR_13 == VAR_7 || VAR_13 == VAR_6)) {
  if ((VAR_17 = FUNC_26(VAR_7)) == ((void*)0)) {
   VAR_19 = VAR_8;
   goto out;
  }
  VAR_17->rsa = FUNC_11(VAR_16);
  VAR_17->type = VAR_6;



  if (FUNC_13(VAR_17->rsa, ((void*)0)) != 1) {
   VAR_19 = VAR_10;
   goto out;
  }
  if ((VAR_19 = FUNC_15(VAR_17->rsa)) != 0)
   goto out;
 } else if (FUNC_7(VAR_16) == VAR_0 &&
     (VAR_13 == VAR_7 || VAR_13 == VAR_4)) {
  if ((VAR_17 = FUNC_26(VAR_7)) == ((void*)0)) {
   VAR_19 = VAR_8;
   goto out;
  }
  VAR_17->dsa = FUNC_9(VAR_16);
  VAR_17->type = VAR_4;
 } else {
  VAR_19 = VAR_9;
  goto out;
 }
 VAR_19 = 0;
 if (VAR_15 != ((void*)0)) {
  *VAR_15 = VAR_17;
  VAR_17 = ((void*)0);
 }
 out:
 FUNC_0(VAR_18);
 FUNC_8(VAR_16);
 FUNC_25(VAR_17);
 return VAR_19;
}
