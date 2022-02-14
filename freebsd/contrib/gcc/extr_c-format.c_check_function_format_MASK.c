
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ first_arg_num; size_t format_type; } ;
typedef TYPE_1__ function_format_info ;
struct TYPE_6__ {int flags; int name; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (scalar_t__,TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_12 (char*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int ,char*,int ) ;

void
FUNC_14 (tree VAR_9, tree VAR_10)
{
  tree VAR_11;


  for (VAR_11 = VAR_9; VAR_11; VAR_11 = FUNC_2 (VAR_11))
    {
      if (FUNC_12 ("format", FUNC_4 (VAR_11)))
 {

   function_format_info VAR_12;
   FUNC_10 (FUNC_6 (VAR_11), &VAR_12, 1);
   if (VAR_7)
     FUNC_9 (&VAR_12, VAR_10);
   if (VAR_8 && VAR_12.first_arg_num == 0
       && (VAR_6[VAR_12.format_type].flags
    & (int) VAR_0))
     {
       tree VAR_13;
       for (VAR_13 = FUNC_7 (FUNC_5 (VAR_5));
     VAR_13;
     VAR_13 = FUNC_2 (VAR_13))
  if (FUNC_12 ("format", FUNC_4 (VAR_13))
      && (FUNC_11 (FUNC_1
         (FUNC_6 (FUNC_6 (VAR_13))))
   == VAR_12.format_type))
    break;
       if (VAR_13 == VAR_1)
  {




    tree VAR_14;
    for (VAR_14 = FUNC_0 (VAR_5);
         VAR_14 != 0;
         VAR_14 = FUNC_2 (VAR_14))
      {
        if (FUNC_3 (FUNC_5 (VAR_14)) == VAR_3
     && (FUNC_8 (FUNC_5 (FUNC_5 (VAR_14)))
         == VAR_4))
   break;
      }
    if (VAR_14 != 0)
      FUNC_13 (VAR_2, "function might "
        "be possible candidate for %qs format attribute",
        VAR_6[VAR_12.format_type].name);
  }
     }
 }
    }
}
