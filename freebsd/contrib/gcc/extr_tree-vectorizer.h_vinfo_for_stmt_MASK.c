
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef int * stmt_vec_info ;
typedef TYPE_2__* stmt_ann_t ;
struct TYPE_4__ {scalar_t__ aux; } ;
struct TYPE_5__ {TYPE_1__ common; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static inline stmt_vec_info
FUNC_1 (tree VAR_0)
{
  stmt_ann_t VAR_1 = FUNC_0 (VAR_0);
  return VAR_1 ? (stmt_vec_info) VAR_1->common.aux : ((void*)0);
}
