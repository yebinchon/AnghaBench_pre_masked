
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int * equiv; scalar_t__ max; scalar_t__ min; } ;
typedef TYPE_1__ value_range_t ;
typedef scalar_t__ tree ;
typedef enum value_range_type { ____Placeholder_value_range_type } value_range_type ;
typedef int * bitmap ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12 (value_range_t *VAR_5, enum value_range_type VAR_6, tree VAR_7,
   tree VAR_8, bitmap VAR_9)
{
  VAR_5->type = VAR_6;
  VAR_5->min = VAR_7;
  VAR_5->max = VAR_8;



  if (VAR_5->equiv == ((void*)0))
    VAR_5->equiv = FUNC_0 (((void*)0));

  if (VAR_9 != VAR_5->equiv)
    {
      if (VAR_9 && !FUNC_5 (VAR_9))
 FUNC_4 (VAR_5->equiv, VAR_9);
      else
 FUNC_3 (VAR_5->equiv);
    }
}
