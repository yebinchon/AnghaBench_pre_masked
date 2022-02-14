
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ value; int value_is_inherited; TYPE_1__* scope; scalar_t__ type; } ;
typedef TYPE_2__ cxx_binding ;
struct TYPE_4__ {scalar_t__ kind; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int FUNC_12 (char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_13 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static bool
FUNC_16 (cxx_binding *VAR_7, tree VAR_8)
{
  tree VAR_9 = VAR_7->value;
  bool VAR_10 = 1;

  FUNC_14 (VAR_2);
  if (FUNC_9 (VAR_8) == VAR_3 && FUNC_1 (VAR_8))

    VAR_7->type = VAR_8;
  else if (


    !VAR_9





    || VAR_9 == VAR_5


    || (FUNC_9 (VAR_9) == VAR_0
        && FUNC_0 (VAR_9)
        && !FUNC_4 (VAR_9)))
    VAR_7->value = VAR_8;
  else if (FUNC_9 (VAR_9) == VAR_3 && FUNC_1 (VAR_9))
    {





      VAR_7->type = VAR_9;
      VAR_7->value = VAR_8;
      VAR_7->value_is_inherited = 0;
    }
  else if (FUNC_9 (VAR_9) == VAR_3
    && FUNC_9 (VAR_8) == VAR_3
    && FUNC_5 (VAR_8) == FUNC_5 (VAR_9)
    && VAR_7->scope->kind != VAR_6
    && (FUNC_13 (FUNC_10 (VAR_8), FUNC_10 (VAR_9))


        || FUNC_15 (FUNC_10 (VAR_8))
        || FUNC_15 (FUNC_10 (VAR_9))))
    VAR_10 = 0;
  else if (FUNC_9 (VAR_8) == VAR_4 && FUNC_9 (VAR_9) == VAR_4
    && FUNC_3 (VAR_8) && FUNC_3 (VAR_9)
    && !FUNC_2 (VAR_8))
    {
      FUNC_11 (VAR_8, VAR_7->value, 0);
      VAR_10 = 0;
    }
  else if (FUNC_9 (VAR_8) == VAR_1
    && FUNC_9 (VAR_9) == VAR_1
    && FUNC_6 (VAR_8)
    && FUNC_6 (VAR_9)
    && FUNC_7 (VAR_9) == FUNC_7 (VAR_8))






    VAR_10 = 0;
  else
    {
      FUNC_12 ("declaration of %q#D", VAR_8);
      FUNC_12 ("conflicts with previous declaration %q+#D", VAR_9);
      VAR_10 = 0;
    }

  FUNC_8 (VAR_2, VAR_10);
}
