
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int type; int cert; int * xmss_filename; int * xmss_name; struct sshkey* xmss_sk; struct sshkey* xmss_pk; struct sshkey* ed25519_sk; struct sshkey* ed25519_pk; int * ecdsa; int * dsa; int * rsa; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sshkey*,int) ;
 scalar_t__ FUNC_6 (struct sshkey*) ;
 int FUNC_7 (struct sshkey*) ;
 int FUNC_8 (struct sshkey*) ;
 int FUNC_9 (struct sshkey*) ;

void
FUNC_10(struct sshkey *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 switch (VAR_2->type) {
 case 134:
 case 133:
  FUNC_5(VAR_2->ed25519_pk, VAR_0);
  VAR_2->ed25519_pk = ((void*)0);
  FUNC_5(VAR_2->ed25519_sk, VAR_1);
  VAR_2->ed25519_sk = ((void*)0);
  break;
 case 130:
  break;
 default:
  break;
 }
 if (FUNC_6(VAR_2))
  FUNC_3(VAR_2->cert);
 FUNC_5(VAR_2, sizeof(*VAR_2));
}
