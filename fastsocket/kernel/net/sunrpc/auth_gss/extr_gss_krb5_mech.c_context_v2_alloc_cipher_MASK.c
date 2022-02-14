
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct krb5_ctx {TYPE_1__* gk5e; } ;
struct crypto_blkcipher {int dummy; } ;
struct TYPE_2__ {int keylength; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_blkcipher*) ;
 struct crypto_blkcipher* FUNC_1 (char const*,int ,int ) ;
 scalar_t__ FUNC_2 (struct crypto_blkcipher*,int *,int ) ;
 int FUNC_3 (struct crypto_blkcipher*) ;
 int FUNC_4 (char*,char const*) ;

struct crypto_blkcipher *
FUNC_5(struct krb5_ctx *VAR_1, const char *VAR_2, u8 *VAR_3)
{
 struct crypto_blkcipher *VAR_4;

 VAR_4 = FUNC_1(VAR_2, 0, VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_4("gss_kerberos_mech: unable to initialize "
   "crypto algorithm %s\n", VAR_2);
  return ((void*)0);
 }
 if (FUNC_2(VAR_4, VAR_3, VAR_1->gk5e->keylength)) {
  FUNC_4("gss_kerberos_mech: error setting key for "
   "crypto algorithm %s\n", VAR_2);
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 return VAR_4;
}
