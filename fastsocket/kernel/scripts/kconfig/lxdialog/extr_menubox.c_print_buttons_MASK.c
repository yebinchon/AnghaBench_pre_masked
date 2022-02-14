
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(WINDOW * VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2 / 2 - 16;
 int VAR_5 = VAR_1 - 2;

 FUNC_1(VAR_0, FUNC_0("Select"), VAR_5, VAR_4, VAR_3 == 0);
 FUNC_1(VAR_0, FUNC_0(" Exit "), VAR_5, VAR_4 + 12, VAR_3 == 1);
 FUNC_1(VAR_0, FUNC_0(" Help "), VAR_5, VAR_4 + 24, VAR_3 == 2);

 FUNC_2(VAR_0, VAR_5, VAR_4 + 1 + 12 * VAR_3);
 FUNC_3(VAR_0);
}
