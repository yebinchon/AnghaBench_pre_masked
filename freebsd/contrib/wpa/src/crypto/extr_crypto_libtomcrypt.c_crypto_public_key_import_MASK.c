
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct crypto_public_key {TYPE_1__ rsa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_public_key*) ;
 struct crypto_public_key* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const*,size_t,TYPE_1__*) ;
 int FUNC_5 (int ,char*,...) ;

struct crypto_public_key * FUNC_6(const u8 *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct crypto_public_key *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_3, VAR_4, &VAR_6->rsa);
 if (VAR_5 != VAR_0) {
  FUNC_5(VAR_1, "LibTomCrypt: Failed to import "
      "public key (res=%d '%s')",
      VAR_5, FUNC_0(VAR_5));
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 if (VAR_6->rsa.type != VAR_2) {
  FUNC_5(VAR_1, "LibTomCrypt: Public key was not of "
      "correct type");
  FUNC_3(&VAR_6->rsa);
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
