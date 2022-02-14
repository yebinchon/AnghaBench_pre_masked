
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;
struct TYPE_3__ {int (* type_for_mode ) (int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static enum gimplify_status
FUNC_7 (tree *VAR_3)
{
  tree VAR_4 = FUNC_1 (*VAR_3, 0);
  tree VAR_5 = FUNC_1 (*VAR_3, 1);

  tree VAR_6 = FUNC_2 (VAR_4);
  tree VAR_7 = VAR_2.types.type_for_mode (FUNC_3 (VAR_6), 1);

  VAR_4 = FUNC_4 (VAR_1, VAR_7, VAR_4);
  VAR_5 = FUNC_4 (VAR_1, VAR_7, VAR_5);

  *VAR_3
    = FUNC_5 (FUNC_0 (*VAR_3), FUNC_2 (*VAR_3), VAR_4, VAR_5);

  return VAR_0;
}
