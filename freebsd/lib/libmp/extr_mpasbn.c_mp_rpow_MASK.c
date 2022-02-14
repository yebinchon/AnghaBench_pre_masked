
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bn; } ;
typedef TYPE_1__ MINT ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (char*,short) ;
 int FUNC_8 (char*,TYPE_1__*) ;
 int FUNC_9 (char*,int *,TYPE_1__*) ;

void
FUNC_10(const MINT *VAR_0, short VAR_1, MINT *VAR_2)
{
 MINT *VAR_3;
 BIGNUM *VAR_4;
 BN_CTX *VAR_5;

 VAR_4 = ((void*)0);
 VAR_5 = FUNC_1();
 if (VAR_5 != ((void*)0))
  VAR_4 = FUNC_5();
 if (VAR_5 == ((void*)0) || VAR_4 == ((void*)0))
  FUNC_6("rpow");
 VAR_3 = FUNC_7("rpow", VAR_1);
 FUNC_2("rpow", FUNC_3(VAR_4, VAR_0->bn, VAR_3->bn, VAR_5));
 FUNC_9("rpow", VAR_4, VAR_2);
 FUNC_8("rpow", VAR_3);
 FUNC_4(VAR_4);
 FUNC_0(VAR_5);
}
