
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;

extern void
FUNC_4(int VAR_6)
{





 for (int VAR_7 = 0; VAR_7 <= 2; ++VAR_7) {

  if (FUNC_2(VAR_7, VAR_1) == -1 && VAR_5 == VAR_0) {




   const int VAR_8 = FUNC_3("/dev/null", VAR_2
     | (VAR_7 == 0 ? VAR_4 : VAR_3));

   if (VAR_8 != VAR_7) {
    if (VAR_8 != -1)
     (void)FUNC_0(VAR_8);






    FUNC_1(VAR_6);
   }
  }
 }


 return;
}
