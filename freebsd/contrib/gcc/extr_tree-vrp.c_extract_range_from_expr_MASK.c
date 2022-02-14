
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; } ;
typedef TYPE_1__ value_range_t ;
typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int ,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_15 (int ,int*) ;
 scalar_t__ FUNC_16 (int ,int*) ;

__attribute__((used)) static void
FUNC_17 (value_range_t *VAR_11, tree VAR_12)
{
  enum tree_code VAR_13 = FUNC_1 (VAR_12);

  if (VAR_13 == VAR_0)
    FUNC_4 (VAR_11, VAR_12);
  else if (VAR_13 == VAR_1)
    FUNC_7 (VAR_11, VAR_12);
  else if (FUNC_2 (VAR_13) == VAR_8
    || VAR_13 == VAR_2
    || VAR_13 == VAR_4
    || VAR_13 == VAR_3
    || VAR_13 == VAR_5
    || VAR_13 == VAR_6)
    FUNC_5 (VAR_11, VAR_12);
  else if (FUNC_2 (VAR_13) == VAR_10)
    FUNC_8 (VAR_11, VAR_12);
  else if (FUNC_2 (VAR_13) == VAR_9)
    FUNC_6 (VAR_11, VAR_12);
  else if (FUNC_9 (VAR_12))
    FUNC_13 (VAR_11, VAR_12, ((void*)0));
  else
    FUNC_14 (VAR_11);





  if (VAR_11->type == VAR_7)
    {
      bool VAR_14 = 0;

      if (FUNC_0 (FUNC_3 (VAR_12))
   && FUNC_15 (VAR_12, &VAR_14))
 FUNC_11 (VAR_11, FUNC_3 (VAR_12),
     VAR_14 || FUNC_10 (VAR_12));
      else if (FUNC_16 (VAR_12, &VAR_14)
        && !VAR_14)
        FUNC_12 (VAR_11, FUNC_3 (VAR_12));
    }
}
