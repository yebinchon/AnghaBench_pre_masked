
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
struct TYPE_3__ {scalar_t__ (* promote_prototypes ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ calls; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_2__ VAR_2 ;

tree
FUNC_8 (tree VAR_3, tree VAR_4, tree VAR_5, int VAR_6)
{
  tree VAR_7, VAR_8;






  if (!VAR_4
      || (FUNC_2 (FUNC_1 (VAR_5))
   && (FUNC_3 (FUNC_1 (VAR_3))
       == FUNC_3 (FUNC_1 (VAR_4)))))
    return VAR_4;

  VAR_8 = FUNC_1 (VAR_3);
  VAR_7 = FUNC_5 (VAR_8, VAR_4,
    VAR_0, VAR_5,
    VAR_5, VAR_6);
  if (VAR_2.calls.promote_prototypes (FUNC_1 (VAR_5))
      && FUNC_0 (VAR_8)
      && (FUNC_4 (VAR_8) < FUNC_4 (VAR_1)))
    VAR_7 = FUNC_6 (VAR_7);
  return VAR_7;
}
