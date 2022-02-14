
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int * FUNC_0 (int,int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;

void
FUNC_12(int VAR_6)
{
    char *VAR_7;

    if ((VAR_7 = FUNC_7("SHLVL")) != ((void*)0)) {

 if (VAR_4)
     VAR_6 = 1;
 else
     VAR_6 += FUNC_3(VAR_7);

 if (VAR_6 <= 0) {
     if (FUNC_2(VAR_2) != ((void*)0))
  FUNC_11(VAR_2);
     FUNC_1(VAR_1);
 }
 else {
     Char *VAR_8;

     VAR_8 = FUNC_0(VAR_6, 0, 0);
     FUNC_5(VAR_8, VAR_5);
     FUNC_9(VAR_2, VAR_8, VAR_3);
     FUNC_4(VAR_8);
     FUNC_6(VAR_8);
     FUNC_10(VAR_1, VAR_8);
 }
    }
    else {
 FUNC_8(VAR_2, VAR_0, VAR_3);
 FUNC_10(VAR_1, VAR_0);
    }
}
