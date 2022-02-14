
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {int type; int xmss_sk; int xmss_pk; int * xmss_name; TYPE_1__* cert; int ed25519_sk; int ed25519_pk; int ecdsa; int ecdsa_nid; int dsa; int rsa; } ;
struct sshbuf {int dummy; } ;
typedef enum sshkey_serialize_rep { ____Placeholder_sshkey_serialize_rep } sshkey_serialize_rep ;
struct TYPE_2__ {int certblob; } ;
typedef int BIGNUM ;


 int FUNC_0 (int ,int const**,int const**) ;
 int FUNC_1 (int ,int const**,int const**,int const**) ;
 int const* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *,int const**) ;
 int FUNC_4 (int ,int const**,int const**) ;
 int FUNC_5 (int ,int const**,int const**,int const**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sshbuf*,int const*) ;
 int FUNC_8 (struct sshbuf*,int *) ;
 int FUNC_9 (struct sshbuf*,int ) ;
 int FUNC_10 (struct sshbuf*,int ,int ) ;
 int FUNC_11 (struct sshbuf*,int ) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (struct sshkey const*) ;
 int FUNC_14 (struct sshkey const*) ;
 int FUNC_15 (struct sshkey const*,struct sshbuf*,int) ;
 int FUNC_16 (struct sshkey const*) ;

int
FUNC_17(const struct sshkey *VAR_4, struct sshbuf *VAR_5,
    enum sshkey_serialize_rep VAR_6)
{
 int VAR_7 = VAR_2;





 if ((VAR_7 = FUNC_8(VAR_5, FUNC_13(VAR_4))) != 0)
  goto out;
 switch (VAR_4->type) {
 case 133:
  if ((VAR_7 = FUNC_10(VAR_5, VAR_4->ed25519_pk,
      VAR_0)) != 0 ||
      (VAR_7 = FUNC_10(VAR_5, VAR_4->ed25519_sk,
      VAR_1)) != 0)
   goto out;
  break;
 case 132:
  if (VAR_4->cert == ((void*)0) || FUNC_6(VAR_4->cert->certblob) == 0) {
   VAR_7 = VAR_3;
   goto out;
  }
  if ((VAR_7 = FUNC_11(VAR_5, VAR_4->cert->certblob)) != 0 ||
      (VAR_7 = FUNC_10(VAR_5, VAR_4->ed25519_pk,
      VAR_0)) != 0 ||
      (VAR_7 = FUNC_10(VAR_5, VAR_4->ed25519_sk,
      VAR_1)) != 0)
   goto out;
  break;
 default:
  VAR_7 = VAR_3;
  goto out;
 }

 VAR_7 = 0;
 out:
 return VAR_7;
}
