
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_4__ {scalar_t__ name_mem_tag; } ;
struct TYPE_3__ {scalar_t__ symbol_mem_tag; } ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int *,int *,int *) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 TYPE_1__* FUNC_12 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_13 (tree VAR_3, tree VAR_4)
{
  tree VAR_5 = FUNC_7 (VAR_3);
  tree VAR_6 = VAR_1, VAR_7, VAR_8;
  HOST_WIDE_INT VAR_9, VAR_10, VAR_11;

  for (VAR_8 = VAR_4; FUNC_10 (VAR_8); VAR_8 = FUNC_5 (VAR_8, 0))
    {
      VAR_6 = FUNC_8 (VAR_8, &VAR_9, &VAR_10, &VAR_11);
      if (VAR_3)
 break;
    }

  if (VAR_6 && FUNC_3 (VAR_6) && FUNC_9 (VAR_6))
    return FUNC_11 (VAR_8);

  if (!VAR_5)
    return VAR_1;

  if (FUNC_4 (VAR_5) == VAR_0)
    {


      VAR_5 = FUNC_5 (VAR_5, 0);
      if (FUNC_4 (VAR_5) != VAR_2)
 return VAR_1;

      if (FUNC_1 (VAR_5))
 {
   VAR_7 = FUNC_1 (VAR_5)->name_mem_tag;
   if (VAR_7)
     return VAR_7;
 }

      VAR_5 = FUNC_2 (VAR_5);
      VAR_7 = FUNC_12 (VAR_5)->symbol_mem_tag;
      FUNC_6 (VAR_7 != VAR_1);
      return VAR_7;
    }
  else
    {
      if (!FUNC_0 (VAR_5))
 return VAR_1;

      VAR_7 = FUNC_12 (VAR_5)->symbol_mem_tag;
      if (VAR_7)
 return VAR_7;

      return VAR_5;
    }
}
