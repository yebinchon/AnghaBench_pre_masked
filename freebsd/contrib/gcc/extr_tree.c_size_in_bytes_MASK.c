
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {int (* incomplete_type_error ) (int ,scalar_t__) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int,int) ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,scalar_t__) ;

tree
FUNC_5 (tree VAR_6)
{
  tree VAR_7;

  if (VAR_6 == VAR_2)
    return VAR_3;

  VAR_6 = FUNC_1 (VAR_6);
  VAR_7 = FUNC_2 (VAR_6);

  if (VAR_7 == 0)
    {
      VAR_4.types.incomplete_type_error (VAR_1, VAR_6);
      return VAR_5;
    }

  if (FUNC_0 (VAR_7) == VAR_0)
    VAR_7 = FUNC_3 (VAR_7, 0, 0, 0);

  return VAR_7;
}
