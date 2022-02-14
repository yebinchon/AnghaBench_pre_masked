
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bn; } ;
typedef TYPE_1__ MINT ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*) ;
 TYPE_1__* FUNC_6 (char const*,short) ;
 int FUNC_7 (char const*,TYPE_1__*) ;
 int FUNC_8 (char const*,int *,TYPE_1__*) ;
 char* FUNC_9 (char const*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_10 (char*) ;
 short FUNC_11 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_1, const MINT *VAR_2, short VAR_3, MINT *VAR_4, short *VAR_5,
    BN_CTX *VAR_6)
{
 MINT *VAR_7, *VAR_8;
 BIGNUM *VAR_9, *VAR_10;
 char *VAR_11;

 VAR_10 = ((void*)0);
 VAR_9 = FUNC_3();
 if (VAR_9 != ((void*)0))
  VAR_10 = FUNC_3();
 if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  FUNC_5(VAR_1);
 VAR_7 = FUNC_6(VAR_1, VAR_3);
 VAR_8 = FUNC_6(VAR_1, 0);
 FUNC_0(VAR_1, FUNC_1(VAR_9, VAR_10, VAR_2->bn, VAR_7->bn, VAR_6));
 FUNC_8(VAR_1, VAR_9, VAR_4);
 FUNC_8(VAR_1, VAR_10, VAR_8);
 VAR_11 = FUNC_9(VAR_1, VAR_8);
 VAR_0 = 0;
 *VAR_5 = FUNC_11(VAR_11, ((void*)0), 16);
 if (VAR_0 != 0)
  FUNC_4(("%s underflow or overflow", VAR_1));
 FUNC_10(VAR_11);
 FUNC_7(VAR_1, VAR_7);
 FUNC_7(VAR_1, VAR_8);
 FUNC_2(VAR_10);
 FUNC_2(VAR_9);
}
