
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef scalar_t__ optab ;
typedef enum optab_methods { ____Placeholder_optab_methods } optab_methods ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_4 (optab VAR_3, rtx VAR_4, rtx VAR_5,
   rtx VAR_6, rtx VAR_7,
   int VAR_8, enum optab_methods VAR_9)
{
  if (VAR_7 != 0)
    if (!FUNC_3 (VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_7, VAR_8, VAR_9))
      return 0;

  if (VAR_6 != 0)
    {


      if (VAR_3 != VAR_1)
 FUNC_2 (VAR_6, FUNC_0 (VAR_2));
      else
 if (!FUNC_3 (VAR_2, VAR_3,
     VAR_4, FUNC_1 (VAR_0 - 1),
     VAR_6, VAR_8, VAR_9))
   return 0;
    }
  return 1;
}
