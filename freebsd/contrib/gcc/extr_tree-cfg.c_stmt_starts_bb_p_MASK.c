
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int num_merged_labels; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline bool
FUNC_4 (tree VAR_3, tree VAR_4)
{
  if (VAR_3 == VAR_1)
    return 0;





  if (FUNC_3 (VAR_3) == VAR_0)
    {

      if (FUNC_0 (FUNC_2 (VAR_3))
   || FUNC_1 (FUNC_2 (VAR_3)))
 return 1;

      if (VAR_4 && FUNC_3 (VAR_4) == VAR_0)
 {
   if (FUNC_0 (FUNC_2 (VAR_4)))
     return 1;

   VAR_2.num_merged_labels++;
   return 0;
 }
      else
 return 1;
    }

  return 0;
}
