
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct function {TYPE_1__* expr; } ;
typedef int rtx ;
struct TYPE_2__ {int x_forced_labels; } ;


 int VAR_0 ;
 struct function* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct function* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;

rtx
FUNC_5 (tree VAR_3)
{
  rtx VAR_4 = FUNC_4 (VAR_3);
  tree VAR_5 = FUNC_0 (VAR_3);
  struct function *VAR_6;

  FUNC_2 (VAR_5);

  if (VAR_5 != VAR_2)
    VAR_6 = FUNC_1 (VAR_5);
  else
    VAR_6 = VAR_1;

  VAR_6->expr->x_forced_labels = FUNC_3 (VAR_0, VAR_4,
      VAR_6->expr->x_forced_labels);
  return VAR_4;
}
