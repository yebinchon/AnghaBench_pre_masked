
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_2__ {int need_abi_warning; } ;


 scalar_t__ FUNC_0 (int * const) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int * const) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char*,int * const) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int * const) ;
 int * FUNC_6 (int * const) ;
 int * FUNC_7 (int * const) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int * const) ;
 int FUNC_10 (int *,int **) ;
 scalar_t__ FUNC_11 (int * const) ;
 int * const VAR_3 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int * const) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16 (const tree VAR_4)
{
  tree VAR_5;

  tree VAR_6 = ((void*)0);

  FUNC_3 ("prefix", VAR_4);

  if (VAR_4 == ((void*)0)
      || VAR_4 == VAR_3)
    return;

  if (FUNC_11 (VAR_4))
    return;

  if (FUNC_2 (VAR_4))
    {





      if (FUNC_5 (VAR_4) == VAR_0)
 return;

      VAR_5 = VAR_4;
      FUNC_10 (VAR_5, &VAR_6);
    }
  else
    {

      VAR_5 = FUNC_6 (VAR_4);
      if (FUNC_0 (VAR_4))
 VAR_6 = FUNC_7 (VAR_4);
    }


  if (FUNC_5 (VAR_4) == VAR_2
      && !FUNC_8 (2))
    VAR_1.need_abi_warning = 1;

  if (FUNC_5 (VAR_4) == VAR_2
      && FUNC_8 (2))
    FUNC_13 (VAR_4);
  else if (VAR_6 != ((void*)0))

    {
      FUNC_14 (VAR_5);
      FUNC_12 (FUNC_4 (VAR_6));
    }
  else

    {
      FUNC_16 (FUNC_1 (VAR_5));
      FUNC_15 (VAR_5);
    }

  FUNC_9 (VAR_4);
}
