
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshkey {int type; int rsa; int ecdsa; int ecdsa_nid; int dsa; int * ed25519_sk; int * ed25519_pk; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sshkey*) ;
 struct sshkey* FUNC_6 (int ) ;
 int FUNC_7 (struct sshkey*,int ) ;

int
FUNC_8(int VAR_6, u_int VAR_7, struct sshkey **VAR_8)
{
 struct sshkey *VAR_9;
 int VAR_10 = VAR_4;

 if (VAR_8 == ((void*)0))
  return VAR_5;
 *VAR_8 = ((void*)0);
 if ((VAR_9 = FUNC_6(VAR_2)) == ((void*)0))
  return VAR_3;
 switch (VAR_6) {
 case 130:
  if ((VAR_9->ed25519_pk = FUNC_3(VAR_0)) == ((void*)0) ||
      (VAR_9->ed25519_sk = FUNC_3(VAR_1)) == ((void*)0)) {
   VAR_10 = VAR_3;
   break;
  }
  FUNC_0(VAR_9->ed25519_pk, VAR_9->ed25519_sk);
  VAR_10 = 0;
  break;
 default:
  VAR_10 = VAR_5;
 }
 if (VAR_10 == 0) {
  VAR_9->type = VAR_6;
  *VAR_8 = VAR_9;
 } else
  FUNC_5(VAR_9);
 return VAR_10;
}
