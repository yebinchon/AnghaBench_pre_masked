
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_8 (tree VAR_6, tree VAR_7, rtx VAR_8, enum machine_mode VAR_9)
{
  if (FUNC_7 (VAR_7, VAR_2, VAR_2, VAR_3))
    {
      tree VAR_10 = FUNC_6 (VAR_6, VAR_7, 0);
      if (VAR_10)
 {
   while (FUNC_1 (VAR_10) == VAR_0)
     {
       FUNC_4 (FUNC_2 (VAR_10, 0), VAR_5, VAR_4,
      VAR_1);
       VAR_10 = FUNC_2 (VAR_10, 1);
     }
   return FUNC_4 (VAR_10, VAR_8, VAR_9, VAR_1);
 }

      return FUNC_5 (FUNC_3 (VAR_7),
       FUNC_3 (FUNC_0 (VAR_7)),
       VAR_8, 0);
    }
  return 0;
}
