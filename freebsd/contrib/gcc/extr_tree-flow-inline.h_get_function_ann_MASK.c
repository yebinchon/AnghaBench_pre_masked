
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_4__* tree ;
typedef scalar_t__ function_ann_t ;
struct TYPE_10__ {TYPE_2__* ann; } ;
struct TYPE_11__ {TYPE_3__ common; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline function_ann_t
FUNC_3 (tree VAR_1)
{
  function_ann_t VAR_2 = FUNC_1 (VAR_1);
  FUNC_2 (!VAR_1->common.ann || VAR_1->common.ann->common.type == VAR_0);
  return (VAR_2) ? VAR_2 : FUNC_0 (VAR_1);
}
