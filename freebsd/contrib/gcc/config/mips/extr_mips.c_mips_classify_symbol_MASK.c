
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum mips_symbol_type { ____Placeholder_mips_symbol_type } mips_symbol_type ;
struct TYPE_2__ {scalar_t__ (* binds_local_p ) (scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 TYPE_1__ VAR_12 ;

__attribute__((used)) static enum mips_symbol_type
FUNC_13 (rtx VAR_13)
{
  if (FUNC_2 (VAR_13) == VAR_0)
    {
      if (VAR_10)
 return VAR_1;
      if (VAR_8 && !VAR_9)
 return VAR_4;
      return VAR_2;
    }

  FUNC_10 (FUNC_2 (VAR_13) == VAR_5);

  if (FUNC_7 (VAR_13))
    return VAR_7;

  if (FUNC_0 (VAR_13))
    {
      if (VAR_10)
 return VAR_1;

      if (FUNC_3 (FUNC_11 (VAR_13)) <= VAR_11)
 return VAR_6;
    }



  if (FUNC_6 (VAR_13)
      && !FUNC_8 (VAR_13))
    return VAR_6;

  if (VAR_8)
    {
      if (FUNC_4 (VAR_13) == 0)
 {
   if (!FUNC_5 (VAR_13))
     return VAR_3;
 }
      else
 {
   if (FUNC_1 (FUNC_4 (VAR_13))
       && FUNC_9 (FUNC_4 (VAR_13))
       && !(VAR_9
     && VAR_12.binds_local_p (FUNC_4 (VAR_13))))
     return VAR_3;
 }

      if (!VAR_9)
 return VAR_4;
    }

  return VAR_2;
}
