
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_private_key {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,size_t) ;
 struct crypto_private_key* FUNC_1 (int const*,size_t,char const*) ;
 struct crypto_private_key* FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

struct crypto_private_key * FUNC_4(const u8 *VAR_1,
            size_t VAR_2,
            const char *VAR_3)
{
 struct crypto_private_key *VAR_4;


 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_3) {

  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
 }


 FUNC_3(VAR_0, "Trying to parse PKCS #1 encoded RSA private "
     "key");
 return (struct crypto_private_key *)
  FUNC_0(VAR_1, VAR_2);
}
