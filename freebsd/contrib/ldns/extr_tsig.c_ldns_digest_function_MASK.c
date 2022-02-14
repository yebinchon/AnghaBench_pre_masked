
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int const* FUNC_0 () ;
 int const* FUNC_1 () ;
 int const* FUNC_2 () ;
 int const* FUNC_3 () ;
 int const* FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static const EVP_MD *
FUNC_6(char *VAR_0)
{


 if (FUNC_5(VAR_0, "hmac-sha512.") == 0) {



  return ((void*)0);

 } else if (FUNC_5(VAR_0, "hmac-shac384.") == 0) {



  return ((void*)0);

 } else if (FUNC_5(VAR_0, "hmac-sha256.") == 0) {



  return ((void*)0);

 } else if (FUNC_5(VAR_0, "hmac-sha1.") == 0) {
  return FUNC_1();
 } else if (FUNC_5(VAR_0, "hmac-md5.sig-alg.reg.int.") == 0) {
  return FUNC_0();
 } else {
  return ((void*)0);
 }
}
