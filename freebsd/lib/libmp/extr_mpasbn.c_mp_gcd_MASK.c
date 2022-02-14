
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bn; } ;
typedef TYPE_1__ MINT ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *,TYPE_1__*) ;

void
FUNC_8(const MINT *VAR_0, const MINT *VAR_1, MINT *VAR_2)
{
 BIGNUM *VAR_3;
 BN_CTX *VAR_4;

 VAR_3 = ((void*)0);
 VAR_4 = FUNC_1();
 if (VAR_4 != ((void*)0))
  VAR_3 = FUNC_5();
 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
  FUNC_6("gcd");
 FUNC_2("gcd", FUNC_4(VAR_3, VAR_0->bn, VAR_1->bn, VAR_4));
 FUNC_7("gcd", VAR_3, VAR_2);
 FUNC_3(VAR_3);
 FUNC_0(VAR_4);
}
