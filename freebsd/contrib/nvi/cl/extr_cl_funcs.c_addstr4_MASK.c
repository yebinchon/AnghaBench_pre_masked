
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int SCR ;
typedef int CL_PRIVATE ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *,size_t,size_t) ;
 int * VAR_2 ;
 scalar_t__ FUNC_7 (int *,void*,size_t) ;
 scalar_t__ FUNC_8 (int *,void*,size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(SCR *VAR_3, void *VAR_4, size_t VAR_5, int VAR_6)
{
 CL_PRIVATE *VAR_7;
 WINDOW *VAR_8;
 size_t VAR_9, VAR_10;
 int VAR_11;

 VAR_7 = FUNC_0(VAR_3);
 VAR_8 = FUNC_1(VAR_3) ? FUNC_1(VAR_3) : VAR_2;





 VAR_11 = 0;
 FUNC_6(VAR_8, VAR_9, VAR_10);
 if (!FUNC_2(VAR_3, VAR_1) &&
     VAR_9 == FUNC_5(VAR_3, FUNC_4(VAR_3)) && FUNC_3(VAR_3)) {
  VAR_11 = 1;
  (void)FUNC_10(VAR_8);
 }







     if (FUNC_7(VAR_8, VAR_4, VAR_5) == VAR_0)
      return (1);

 if (VAR_11)
  (void)FUNC_9(VAR_8);
 return (0);
}
