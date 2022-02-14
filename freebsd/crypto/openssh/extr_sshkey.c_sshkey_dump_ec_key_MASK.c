
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int BIGNUM ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_0 ;

void
FUNC_6(const EC_KEY *VAR_1)
{
 const BIGNUM *VAR_2;

 FUNC_5(FUNC_1(VAR_1),
     FUNC_3(VAR_1));
 FUNC_4("exponent=", VAR_0);
 if ((VAR_2 = FUNC_2(VAR_1)) == ((void*)0))
  FUNC_4("(NULL)", VAR_0);
 else
  FUNC_0(VAR_0, FUNC_2(VAR_1));
 FUNC_4("\n", VAR_0);
}
