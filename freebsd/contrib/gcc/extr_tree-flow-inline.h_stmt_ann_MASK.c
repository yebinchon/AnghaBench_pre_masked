
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_4__* tree ;
typedef int stmt_ann_t ;
struct TYPE_9__ {TYPE_2__* ann; } ;
struct TYPE_10__ {TYPE_3__ common; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static inline stmt_ann_t
FUNC_2 (tree VAR_1)
{



  FUNC_0 (!VAR_1->common.ann || VAR_1->common.ann->common.type == VAR_0);
  return (stmt_ann_t) VAR_1->common.ann;
}
