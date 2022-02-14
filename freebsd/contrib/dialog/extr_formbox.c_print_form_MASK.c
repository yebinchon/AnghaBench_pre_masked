
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int DIALOG_FORMITEM ;


 char VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(WINDOW *VAR_1, DIALOG_FORMITEM * VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
 VAR_7 += FUNC_0(VAR_1, VAR_2 + VAR_6, VAR_4, VAR_6 == VAR_5);
    }
    if (VAR_7) {
 FUNC_1(VAR_1, VAR_0 | ' ');
 FUNC_2(VAR_1);
 (void) FUNC_3(VAR_1);
    }
}
