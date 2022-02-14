
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int mangled_name; } ;
typedef TYPE_1__ operator_name_info_t ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (int const) ;
 int * FUNC_6 (int const) ;
 scalar_t__ FUNC_7 (int const) ;
 scalar_t__ FUNC_8 (int const) ;
 size_t FUNC_9 (int const) ;
 int FUNC_10 (char*,int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int const) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_14 (int const,int *) ;
 scalar_t__ FUNC_15 (int const) ;
 int FUNC_16 (int const) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (char) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (int const) ;
 int FUNC_23 (int const) ;
 int FUNC_24 (int ) ;

__attribute__((used)) static void
FUNC_25 (const tree VAR_4)
{
  FUNC_10 ("unqualified-name", VAR_4);

  if (FUNC_6 (VAR_4) != ((void*)0) && FUNC_2 (VAR_4))
    FUNC_22 (VAR_4);
  else if (FUNC_6 (VAR_4) != ((void*)0) && FUNC_5 (VAR_4))
    FUNC_23 (VAR_4);
  else if (FUNC_7 (VAR_4) == VAR_0)
    FUNC_21 (FUNC_0 (VAR_4));
  else if (FUNC_3 (VAR_4))
    {


      tree VAR_5;
      if (FUNC_14 (VAR_4, ((void*)0)))
 {
   tree VAR_6;
   FUNC_18 ();
   VAR_6 = FUNC_16 (VAR_4);
   FUNC_17 ();
   VAR_5 = FUNC_12 (VAR_6);
 }
      else
 VAR_5 = FUNC_4 (VAR_4);
      FUNC_20 (VAR_5);
    }
  else if (FUNC_9 (VAR_4))
    {
      operator_name_info_t *VAR_7;
      if (FUNC_1 (VAR_4))
 VAR_7 = VAR_1;
      else
 VAR_7 = VAR_3;

      FUNC_24 (VAR_7[FUNC_9 (VAR_4)].mangled_name);
    }
  else if (FUNC_13 (VAR_4) && ! FUNC_11 (VAR_4)
    && FUNC_8 (VAR_4)
    && FUNC_15 (VAR_4) == VAR_2)
    {
      FUNC_10 ("local-source-name", VAR_4);
      FUNC_19 ('L');
      FUNC_21 (FUNC_7 (VAR_4));


    }
  else
    FUNC_21 (FUNC_7 (VAR_4));
}
