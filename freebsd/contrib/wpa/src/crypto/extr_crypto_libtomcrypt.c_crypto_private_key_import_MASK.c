
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct crypto_private_key {TYPE_1__ rsa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_private_key*) ;
 struct crypto_private_key* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const*,size_t,TYPE_1__*) ;
 int FUNC_5 (int ,char*,...) ;

struct crypto_private_key * FUNC_6(const u8 *VAR_3,
            size_t VAR_4,
            const char *VAR_5)
{
 int VAR_6;
 struct crypto_private_key *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_3, VAR_4, &VAR_7->rsa);
 if (VAR_6 != VAR_0) {
  FUNC_5(VAR_1, "LibTomCrypt: Failed to import "
      "private key (res=%d '%s')",
      VAR_6, FUNC_0(VAR_6));
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 if (VAR_7->rsa.type != VAR_2) {
  FUNC_5(VAR_1, "LibTomCrypt: Private key was not of "
      "correct type");
  FUNC_3(&VAR_7->rsa);
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
