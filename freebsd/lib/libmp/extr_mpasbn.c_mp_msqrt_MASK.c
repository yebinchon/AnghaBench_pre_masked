
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const MINT ;
typedef int BN_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*) ;
 int const* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int const*,int const*,int const*) ;
 int FUNC_5 (char*,int const*,int const*) ;
 int FUNC_6 (char*,int const*,int const*,int const*,int const*,int *) ;
 int FUNC_7 (char*,int const*) ;
 int FUNC_8 (char*,int const*,int const*) ;
 int FUNC_9 (char*,int const*,int const*,int const*) ;
 int FUNC_10 (char*,int const*,int const*,int const*,int *) ;
 int FUNC_11 (char*,int const*,int,int const*,short*,int *) ;

void
FUNC_12(const MINT *VAR_0, MINT *VAR_1, MINT *VAR_2)
{
 BN_CTX *VAR_3;
 MINT *VAR_4;
 MINT *VAR_5, *VAR_6;
 MINT *VAR_7, *VAR_8, *VAR_9;
 short VAR_10;

 VAR_3 = FUNC_1();
 if (VAR_3 == ((void*)0))
  FUNC_2("msqrt");
 VAR_4 = FUNC_3("msqrt", 1);
 VAR_6 = FUNC_3("msqrt", 1);
 VAR_5 = FUNC_3("msqrt", 0);
 VAR_7 = FUNC_3("msqrt", 0);
 VAR_8 = FUNC_3("msqrt", 0);
 VAR_9 = FUNC_3("msqrt", 0);
 do {
  FUNC_8("msqrt", VAR_6, VAR_5);
  FUNC_6("msqrt", VAR_0, VAR_6, VAR_7, VAR_8, VAR_3);
  FUNC_4("msqrt", VAR_6, VAR_7, VAR_8);
  FUNC_11("msqrt", VAR_8, 2, VAR_6, &VAR_10, VAR_3);
  FUNC_9("msqrt", VAR_5, VAR_6, VAR_9);
 } while (FUNC_5("msqrt", VAR_9, VAR_4) == 1);
 FUNC_8("msqrt", VAR_6, VAR_1);
 FUNC_10("msqrt", VAR_6, VAR_6, VAR_7, VAR_3);
 FUNC_9("msqrt", VAR_0, VAR_7, VAR_8);
 FUNC_8("msqrt", VAR_8, VAR_2);
 FUNC_7("msqrt", VAR_4);
 FUNC_7("msqrt", VAR_5);
 FUNC_7("msqrt", VAR_6);
 FUNC_7("msqrt", VAR_7);
 FUNC_7("msqrt", VAR_8);
 FUNC_7("msqrt", VAR_9);
 FUNC_0(VAR_3);
}
