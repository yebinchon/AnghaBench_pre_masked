
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int * xmss_pk; int * ed25519_pk; int * ecdsa; int * dsa; int * rsa; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int const*,int const*) ;
 int FUNC_3 (int *,int const**,int *) ;
 int FUNC_4 (int *,int const**,int const**,int const**) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_9 (int *,int const**,int const**,int *) ;
 int FUNC_10 (int *,int *,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct sshkey const*) ;

int
FUNC_13(const struct sshkey *VAR_1, const struct sshkey *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) ||
     FUNC_11(VAR_1->type) != FUNC_11(VAR_2->type))
  return 0;

 switch (VAR_1->type) {
 case 133:
 case 132:
  return VAR_1->ed25519_pk != ((void*)0) && VAR_2->ed25519_pk != ((void*)0) &&
      FUNC_10(VAR_1->ed25519_pk, VAR_2->ed25519_pk, VAR_0) == 0;







 default:
  return 0;
 }

}
