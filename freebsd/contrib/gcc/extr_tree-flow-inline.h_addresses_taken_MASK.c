
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* stmt_ann_t ;
typedef int * bitmap ;
struct TYPE_3__ {int * addresses_taken; } ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static inline bitmap
FUNC_1 (tree VAR_0)
{
  stmt_ann_t VAR_1 = FUNC_0 (VAR_0);
  return VAR_1 ? VAR_1->addresses_taken : ((void*)0);
}
