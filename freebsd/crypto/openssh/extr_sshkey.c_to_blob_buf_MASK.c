
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {int type; char const* xmss_name; int * xmss_pk; int * ed25519_pk; int * rsa; int * ecdsa; int ecdsa_nid; int * dsa; TYPE_1__* cert; } ;
struct sshbuf {int dummy; } ;
typedef enum sshkey_serialize_rep { ____Placeholder_sshkey_serialize_rep } sshkey_serialize_rep ;
struct TYPE_2__ {int certblob; } ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int const**,int *) ;
 int FUNC_1 (int *,int const**,int const**,int const**) ;
 int VAR_0 ;
 int FUNC_2 (int *,int const**,int const**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sshbuf*,int const*) ;
 int FUNC_5 (struct sshbuf*,char const*) ;
 int FUNC_6 (struct sshbuf*,int *) ;
 int FUNC_7 (struct sshbuf*,int *,int ) ;
 int FUNC_8 (struct sshbuf*,int ) ;
 char const* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sshkey const*) ;
 char* FUNC_11 (int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct sshkey const*) ;
 int FUNC_14 (struct sshkey const*,struct sshbuf*,int) ;

__attribute__((used)) static int
FUNC_15(const struct sshkey *VAR_6, struct sshbuf *VAR_7, int VAR_8,
  enum sshkey_serialize_rep VAR_9)
{
 int VAR_10, VAR_11 = VAR_2;
 const char *VAR_12;




 if (VAR_6 == ((void*)0))
  return VAR_3;

 if (FUNC_10(VAR_6)) {
  if (VAR_6->cert == ((void*)0))
   return VAR_1;
  if (FUNC_3(VAR_6->cert->certblob) == 0)
   return VAR_4;
 }
 VAR_10 = VAR_8 ? FUNC_12(VAR_6->type) : VAR_6->type;
 VAR_12 = FUNC_11(VAR_10, VAR_6->ecdsa_nid);

 switch (VAR_10) {





 case 132:





  if ((VAR_11 = FUNC_8(VAR_7, VAR_6->cert->certblob)) != 0)
   return VAR_11;
  break;
 case 133:
  if (VAR_6->ed25519_pk == ((void*)0))
   return VAR_3;
  if ((VAR_11 = FUNC_5(VAR_7, VAR_12)) != 0 ||
      (VAR_11 = FUNC_7(VAR_7,
      VAR_6->ed25519_pk, VAR_0)) != 0)
   return VAR_11;
  break;
 default:
  return VAR_5;
 }
 return 0;
}
