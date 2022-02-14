
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sshkey {int type; int * xmss_pk; int xmss_name; int * ed25519_pk; int rsa; int * ecdsa; int ecdsa_nid; int dsa; } const sshkey ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int ,int const**,int *) ;
 int FUNC_3 (int ,int const**,int const**,int const**) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;
 size_t VAR_0 ;
 int FUNC_9 (int ,int const**,int const**,int *) ;
 int FUNC_10 (int ,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_11 (size_t) ;
 int FUNC_12 (int *,int *,size_t) ;
 int FUNC_13 (struct sshkey const*,struct sshkey const*) ;
 int FUNC_14 (struct sshkey const*) ;
 scalar_t__ FUNC_15 (struct sshkey const*) ;
 struct sshkey const* FUNC_16 (int) ;
 int FUNC_17 (struct sshkey const*,int ) ;
 size_t FUNC_18 (struct sshkey const*) ;

int
FUNC_19(const struct sshkey *VAR_5, struct sshkey **VAR_6)
{
 struct sshkey *VAR_7 = ((void*)0);
 int VAR_8 = VAR_2;
 *VAR_6 = ((void*)0);
 switch (VAR_5->type) {
 case 133:
 case 132:
  if ((VAR_7 = FUNC_16(VAR_5->type)) == ((void*)0)) {
   VAR_8 = VAR_1;
   goto out;
  }
  if (VAR_5->ed25519_pk != ((void*)0)) {
   if ((VAR_7->ed25519_pk = FUNC_11(VAR_0)) == ((void*)0)) {
    VAR_8 = VAR_1;
    goto out;
   }
   FUNC_12(VAR_7->ed25519_pk, VAR_5->ed25519_pk, VAR_0);
  }
  break;
 default:
  VAR_8 = VAR_3;
  goto out;
 }
 if (FUNC_15(VAR_5) && (VAR_8 = FUNC_13(VAR_5, VAR_7)) != 0)
  goto out;

 *VAR_6 = VAR_7;
 VAR_7 = ((void*)0);
 VAR_8 = 0;
 out:
 FUNC_14(VAR_7);
 return VAR_8;
}
