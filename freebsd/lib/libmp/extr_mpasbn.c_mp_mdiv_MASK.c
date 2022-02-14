
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MINT ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int const*,int const*,int *,int *,int *) ;

void
FUNC_4(const MINT *VAR_0, const MINT *VAR_1, MINT *VAR_2, MINT *VAR_3)
{
 BN_CTX *VAR_4;

 VAR_4 = FUNC_1();
 if (VAR_4 == ((void*)0))
  FUNC_2("mdiv");
 FUNC_3("mdiv", VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_4);
}
