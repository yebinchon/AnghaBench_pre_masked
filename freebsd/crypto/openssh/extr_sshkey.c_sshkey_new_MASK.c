
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int ecdsa_nid; int * cert; int * dsa; int * rsa; int * xmss_pk; int * xmss_sk; int * ed25519_pk; int * ed25519_sk; int * ecdsa; } ;
typedef int RSA ;
typedef int DSA ;


 int * FUNC_0 () ;
 int * FUNC_1 () ;
 struct sshkey* FUNC_2 (int,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (struct sshkey*) ;
 int FUNC_5 (struct sshkey*) ;
 scalar_t__ FUNC_6 (struct sshkey*) ;

struct sshkey *
FUNC_7(int VAR_0)
{
 struct sshkey *VAR_1;





 if ((VAR_1 = FUNC_2(1, sizeof(*VAR_1))) == ((void*)0))
  return ((void*)0);
 VAR_1->type = VAR_0;
 VAR_1->ecdsa = ((void*)0);
 VAR_1->ecdsa_nid = -1;
 VAR_1->dsa = ((void*)0);
 VAR_1->rsa = ((void*)0);
 VAR_1->cert = ((void*)0);
 VAR_1->ed25519_sk = ((void*)0);
 VAR_1->ed25519_pk = ((void*)0);
 VAR_1->xmss_sk = ((void*)0);
 VAR_1->xmss_pk = ((void*)0);
 switch (VAR_1->type) {
 case 134:
 case 133:
 case 129:
 case 128:

  break;
 case 130:
  break;
 default:
  FUNC_4(VAR_1);
  return ((void*)0);
 }

 if (FUNC_6(VAR_1)) {
  if ((VAR_1->cert = FUNC_3()) == ((void*)0)) {
   FUNC_5(VAR_1);
   return ((void*)0);
  }
 }

 return VAR_1;
}
