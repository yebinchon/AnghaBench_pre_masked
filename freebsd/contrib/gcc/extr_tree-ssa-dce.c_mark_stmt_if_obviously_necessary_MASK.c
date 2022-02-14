
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* stmt_ann_t ;
struct TYPE_5__ {int succs; } ;
struct TYPE_4__ {scalar_t__ has_volatile_ops; } ;







 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13 (tree VAR_3, bool VAR_4)
{
  stmt_ann_t VAR_5;
  tree VAR_6;



  if (VAR_2
      && FUNC_12 (VAR_3))
    {
      FUNC_9 (VAR_3, 1);
      return;
    }






  switch (FUNC_1 (VAR_3))
    {
    case 137:
    case 132:
    case 135:
      FUNC_9 (VAR_3, 0);
      return;

    case 138:
    case 130:
    case 129:
      FUNC_9 (VAR_3, 1);
      return;

    case 136:



      if (FUNC_3 (VAR_3))
 FUNC_9 (VAR_3, 1);
      return;

    case 131:
      VAR_6 = FUNC_6 (VAR_3);
      if (VAR_6 && FUNC_3 (VAR_6))
 {
   FUNC_9 (VAR_3, 1);
   return;
 }




      if (FUNC_1 (FUNC_2 (VAR_3, 0)) == VAR_0
   || FUNC_1 (FUNC_2 (VAR_3, 0)) == VAR_1)
 {
   FUNC_9 (VAR_3, 1);
   return;
 }
      break;

    case 133:
      FUNC_5 (!FUNC_10 (VAR_3));
      FUNC_9 (VAR_3, 1);
      return;

    case 134:
      FUNC_5 (FUNC_0 (FUNC_4 (VAR_3)->succs) == 2);


    case 128:
      if (! VAR_4)
 FUNC_9 (VAR_3, 1);
      break;

    default:
      break;
    }

  VAR_5 = FUNC_11 (VAR_3);




  if (VAR_5->has_volatile_ops || FUNC_7 (VAR_3))
    {
      FUNC_9 (VAR_3, 1);
      return;
    }

  if (FUNC_8 (VAR_3))
    {
      FUNC_9 (VAR_3, 1);
      return;
    }

  return;
}
