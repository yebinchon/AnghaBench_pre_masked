
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int SCR ;
typedef int CL_PRIVATE ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,size_t,size_t) ;
 int FUNC_7 (int *,int ,int ,int,int ,int ,int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t,size_t) ;

int
FUNC_10(SCR *VAR_4)
{
 CL_PRIVATE *VAR_5;
 WINDOW *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_1(VAR_4) ? FUNC_1(VAR_4) : VAR_3;
 if (!FUNC_2(VAR_4, VAR_2) && FUNC_3(VAR_4)) {
  FUNC_6(VAR_6, VAR_7, VAR_8);
  FUNC_7(VAR_6, FUNC_5(VAR_4, FUNC_4(VAR_4)), 0, -1, VAR_0, 0, ((void*)0));
  (void)FUNC_9(VAR_6, VAR_7, VAR_8);
 }





 return (FUNC_8(VAR_6) == VAR_1);
}
