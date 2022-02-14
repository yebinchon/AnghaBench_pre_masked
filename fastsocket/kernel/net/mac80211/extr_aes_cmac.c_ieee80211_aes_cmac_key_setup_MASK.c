
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_cipher*) ;
 struct crypto_cipher* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct crypto_cipher*,int const*,int ) ;

struct crypto_cipher * FUNC_3(const u8 VAR_2[])
{
 struct crypto_cipher *VAR_3;

 VAR_3 = FUNC_1("aes", 0, VAR_1);
 if (!FUNC_0(VAR_3))
  FUNC_2(VAR_3, VAR_2, VAR_0);

 return VAR_3;
}
