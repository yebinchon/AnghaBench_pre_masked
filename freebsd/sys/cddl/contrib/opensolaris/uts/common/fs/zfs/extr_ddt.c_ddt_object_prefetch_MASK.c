
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_5__ {int ** ddt_object; int ddt_os; } ;
typedef TYPE_1__ ddt_t ;
typedef int ddt_entry_t ;
struct TYPE_6__ {int (* ddt_op_prefetch ) (int ,int ,int *) ;} ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 TYPE_2__** VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(ddt_t *VAR_1, enum ddt_type VAR_2, enum ddt_class VAR_3,
    ddt_entry_t *VAR_4)
{
 if (!FUNC_0(VAR_1, VAR_2, VAR_3))
  return;

 VAR_0[VAR_2]->ddt_op_prefetch(VAR_1->ddt_os,
     VAR_1->ddt_object[VAR_2][VAR_3], VAR_4);
}
