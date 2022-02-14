
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * prop_tbl; int propname; } ;
typedef TYPE_1__ name_to_prop_cb_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, void *VAR_2)
{
 name_to_prop_cb_t *VAR_3 = VAR_2;

 if (FUNC_0(VAR_3->propname, FUNC_1(VAR_3->propname),
     &VAR_3->prop_tbl[VAR_1]))
  return (VAR_1);

 return (VAR_0);
}
