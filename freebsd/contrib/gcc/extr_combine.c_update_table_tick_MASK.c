
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {int last_set_table_tick; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 unsigned int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int** VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_5)
{
  enum rtx_code VAR_6 = FUNC_1 (VAR_5);
  const char *VAR_7 = FUNC_3 (VAR_6);
  int VAR_8;

  if (VAR_6 == VAR_1)
    {
      unsigned int VAR_9 = FUNC_5 (VAR_5);
      unsigned int VAR_10
 = VAR_9 + (VAR_9 < VAR_0
     ? VAR_2[VAR_9][FUNC_2 (VAR_5)] : 1);
      unsigned int VAR_11;

      for (VAR_11 = VAR_9; VAR_11 < VAR_10; VAR_11++)
 VAR_4[VAR_11].last_set_table_tick = VAR_3;

      return;
    }

  for (VAR_8 = FUNC_4 (VAR_6) - 1; VAR_8 >= 0; VAR_8--)


    if (VAR_7[VAR_8] == 'e')
      {



 if (VAR_8 == 0 && FUNC_0 (VAR_5))
   {


     rtx VAR_12 = FUNC_6 (VAR_5, 0);
     rtx VAR_13 = FUNC_6 (VAR_5, 1);



     if (VAR_12 == VAR_13)
       break;




     if (FUNC_0 (VAR_13)
  && (VAR_12 == FUNC_6 (VAR_13, 0) || VAR_12 == FUNC_6 (VAR_13, 1)))
       break;



     if (FUNC_0 (VAR_12)
  && (VAR_13 == FUNC_6 (VAR_12, 0) || VAR_13 == FUNC_6 (VAR_12, 1)))
       {
  FUNC_7 (FUNC_6 (VAR_12, VAR_13 == FUNC_6 (VAR_12, 0) ? 1 : 0));
  break;
       }
   }

 FUNC_7 (FUNC_6 (VAR_5, VAR_8));
      }
}
