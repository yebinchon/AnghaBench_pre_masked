
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_4__ {scalar_t__ path; scalar_t__ debug_dv; } ;
struct TYPE_3__ {int prmask; scalar_t__ path; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3 (valueT VAR_4)
{
  int VAR_5;
  int VAR_6 = 0;

  VAR_5 = 0;
  while (VAR_5 < VAR_2)
    {
      if ((VAR_1[VAR_5].prmask & VAR_4) != 0)
 {

   if (VAR_1[VAR_5].prmask == VAR_4
       && VAR_1[VAR_5].path == VAR_0.path)
     {
       VAR_5++;
       VAR_6 = -1;
     }
   else
     {
       int VAR_7 = 0;

       if (VAR_0.debug_dv)
  {
    FUNC_1 (VAR_3, "  Clearing mutex relation");
    FUNC_2 (VAR_1[VAR_5].prmask);
    FUNC_1 (VAR_3, "\n");
  }






       if (VAR_1[VAR_5].path == VAR_0.path)
  {


    if (VAR_6 == 0
        && (VAR_1[VAR_5].prmask & VAR_4) == VAR_4)
      VAR_6 = 1;

    VAR_1[VAR_5].prmask &= ~VAR_4;
    if (VAR_1[VAR_5].prmask & (VAR_1[VAR_5].prmask - 1))
      {


        VAR_7 = 1;
        VAR_5++;
      }
  }

       if (VAR_7 == 0)

  VAR_1[VAR_5] = VAR_1[--VAR_2];
     }
 }
      else
 ++VAR_5;
    }

  if (VAR_6 == 1)
    FUNC_0 (VAR_4);

  return VAR_6;
}
