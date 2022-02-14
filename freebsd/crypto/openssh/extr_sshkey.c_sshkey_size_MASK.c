
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshkey {int type; int ecdsa_nid; int * dsa; int * rsa; } ;
typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const**,int *,int *) ;
 int FUNC_2 (int *,int const**,int *,int *) ;
 int FUNC_3 (int ) ;

u_int
FUNC_4(const struct sshkey *VAR_0)
{




 switch (VAR_0->type) {
 case 133:
 case 132:
 case 129:
 case 128:
  return 256;
 }
 return 0;
}
