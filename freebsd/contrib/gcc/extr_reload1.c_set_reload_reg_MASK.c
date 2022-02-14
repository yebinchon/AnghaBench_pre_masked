
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ in; scalar_t__ out; scalar_t__ reg_rtx; int when_needed; int opnum; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int) ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5 (int VAR_6, int VAR_7)
{
  int VAR_8;
  rtx VAR_9 = VAR_4[VAR_6];

  if (VAR_9 == 0 || FUNC_0 (VAR_9) != VAR_3[VAR_7].mode)
    VAR_4[VAR_6] = VAR_9
      = FUNC_2 (VAR_3[VAR_7].mode, VAR_5[VAR_6]);

  VAR_8 = FUNC_4 (VAR_9);



  if (FUNC_1 (VAR_8, VAR_3[VAR_7].mode))
    {
      enum machine_mode VAR_10 = VAR_0;
      if (VAR_3[VAR_7].in)
 VAR_10 = FUNC_0 (VAR_3[VAR_7].in);






      if (! (VAR_3[VAR_7].in != 0 && VAR_10 != VAR_0
      && ! FUNC_1 (VAR_8, VAR_10)))
 if (! (VAR_3[VAR_7].out != 0
        && ! FUNC_1 (VAR_8, FUNC_0 (VAR_3[VAR_7].out))))
   {

     VAR_1 = VAR_6;



     FUNC_3 (VAR_5[VAR_6], VAR_3[VAR_7].opnum,
        VAR_3[VAR_7].when_needed, VAR_3[VAR_7].mode);

     VAR_3[VAR_7].reg_rtx = VAR_9;
     VAR_2[VAR_7] = VAR_5[VAR_6];
     return 1;
   }
    }
  return 0;
}
