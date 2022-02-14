
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
struct TYPE_6__ {int (* ddt_op_lookup ) (int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 TYPE_2__** VAR_1 ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(ddt_t *VAR_2, enum ddt_type VAR_3, enum ddt_class VAR_4,
    ddt_entry_t *VAR_5)
{
 if (!FUNC_1(VAR_2, VAR_3, VAR_4))
  return (FUNC_0(VAR_0));

 return (VAR_1[VAR_3]->ddt_op_lookup(VAR_2->ddt_os,
     VAR_2->ddt_object[VAR_3][VAR_4], VAR_5));
}
