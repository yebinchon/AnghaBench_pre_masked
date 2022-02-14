
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int* VAR_5 ;
 void* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(int VAR_9)
{
    int VAR_10;

    if (VAR_9 != VAR_1 && VAR_9 != VAR_2)
 ++VAR_8;





    VAR_10 = *++VAR_5;
    if (VAR_10 == VAR_0)
 FUNC_5();

    for (;;)
    {
 if (FUNC_2(VAR_10))
 {
     if (VAR_9 == VAR_1)
  VAR_4 = FUNC_0();
     else
  VAR_3 = FUNC_0();
     break;
 }





 else if (VAR_10 == '\n' || FUNC_1(VAR_10) || !FUNC_3(VAR_10))
 {
     FUNC_4(VAR_7, VAR_6, VAR_5);
 }
 else
 {
     VAR_10 = *++VAR_5;
     if (VAR_10 == VAR_0)
  FUNC_5();
 }
    }
}
