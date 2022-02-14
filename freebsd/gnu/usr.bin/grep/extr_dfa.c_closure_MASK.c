
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tindex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  int VAR_9, VAR_10, VAR_11;

  FUNC_1();
  while (VAR_8 == VAR_2 || VAR_8 == VAR_4 || VAR_8 == VAR_1 || VAR_8 == VAR_3)
    if (VAR_8 == VAR_3)
      {
 VAR_10 = FUNC_4(VAR_5->tindex);
 VAR_9 = VAR_5->tindex - VAR_10;
 if (VAR_6 < 0)
   FUNC_0(VAR_1);
 if (VAR_7 == 0)
   FUNC_0(VAR_2);
 for (VAR_11 = 1; VAR_11 < VAR_7; ++VAR_11)
   {
     FUNC_2(VAR_9, VAR_10);
     FUNC_0(VAR_0);
   }
 for (; VAR_11 < VAR_6; ++VAR_11)
   {
     FUNC_2(VAR_9, VAR_10);
     FUNC_0(VAR_2);
     FUNC_0(VAR_0);
   }
 VAR_8 = FUNC_3();
      }
    else
      {
 FUNC_0(VAR_8);
 VAR_8 = FUNC_3();
      }
}
