
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chtype ;
typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *,int ,int) ;

void
FUNC_7(WINDOW *VAR_2, const char *VAR_3)
{
    if (VAR_3 != ((void*)0)) {
 chtype VAR_4 = VAR_0;
 chtype VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = FUNC_0(FUNC_5(VAR_2), VAR_3);

 FUNC_1(VAR_2, VAR_1);
 FUNC_6(VAR_2, 0, VAR_6);
 FUNC_4(VAR_2, VAR_3, FUNC_5(VAR_2) - VAR_6, &VAR_4);
 FUNC_1(VAR_2, VAR_5);
 FUNC_2(VAR_3);
    }
}
