
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sc_vtb_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(sc_vtb_t *VAR_0, sc_vtb_t *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_2 = FUNC_4(VAR_0);
 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_4, VAR_5);
 VAR_6 = FUNC_6(VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  FUNC_1(VAR_0, VAR_6, VAR_1, VAR_3);
  if (VAR_3 < VAR_5)
   FUNC_5(VAR_1, FUNC_3(VAR_1,
         FUNC_6(VAR_1),
         VAR_5 - VAR_3));
  VAR_6 = FUNC_3(VAR_0, VAR_6, VAR_4);
 }
}
