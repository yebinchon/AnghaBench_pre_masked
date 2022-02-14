
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;






 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static const char * FUNC_2(const EVP_PKEY *VAR_0)
{
 if (!VAR_0)
  return "NULL";
 switch (FUNC_1(FUNC_0(VAR_0))) {
 case 128:
  return "RSA";
 case 130:
  return "DSA";
 case 131:
  return "DH";
 case 129:
  return "EC";
 }
 return "?";
}
