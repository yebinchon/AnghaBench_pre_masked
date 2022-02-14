
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bn; } ;
typedef TYPE_1__ MINT ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, const MINT *VAR_1, const MINT *VAR_2, MINT *VAR_3, MINT *VAR_4,
    BN_CTX *VAR_5)
{
 BIGNUM *VAR_6, *VAR_7;

 VAR_6 = ((void*)0);
 VAR_7 = FUNC_3();
 if (VAR_7 != ((void*)0))
  VAR_6 = FUNC_3();
 if (VAR_7 == ((void*)0) || VAR_6 == ((void*)0))
  FUNC_4(VAR_0);
 FUNC_0(VAR_0, FUNC_1(VAR_6, VAR_7, VAR_1->bn, VAR_2->bn, VAR_5));
 FUNC_5(VAR_0, VAR_6, VAR_3);
 FUNC_5(VAR_0, VAR_7, VAR_4);
 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
}
