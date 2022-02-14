
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_rsa_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,int*,size_t*,struct crypto_rsa_key*,int) ;
 int FUNC_1 (int*,int*,size_t) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct crypto_rsa_key *VAR_1,
      const u8 *VAR_2, size_t VAR_3,
      u8 *VAR_4, size_t *VAR_5)
{
 int VAR_6;
 u8 *VAR_7, *VAR_8;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1, 1);
 if (VAR_6)
  return VAR_6;

 if (*VAR_5 < 2 || VAR_4[0] != 0 || VAR_4[1] != 2)
  return -1;


 VAR_7 = VAR_4 + 2;
 VAR_8 = VAR_4 + *VAR_5;
 while (*VAR_7 && VAR_7 < VAR_8)
  VAR_7++;
 if (VAR_7 == VAR_8)
  return -1;
 if (VAR_7 - VAR_4 - 2 < 8) {

  FUNC_2(VAR_0, "LibTomCrypt: Too short padding");
  return -1;
 }
 VAR_7++;

 *VAR_5 -= VAR_7 - VAR_4;


 FUNC_1(VAR_4, VAR_7, *VAR_5);

 return 0;
}
