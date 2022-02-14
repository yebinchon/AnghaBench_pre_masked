
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {int cb_any_successful; int cb_value; int cb_propname; } ;
typedef TYPE_1__ set_cbdata_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

int
FUNC_1(zpool_handle_t *VAR_1, void *VAR_2)
{
 int VAR_3;
 set_cbdata_t *VAR_4 = (set_cbdata_t *)VAR_2;

 VAR_3 = FUNC_0(VAR_1, VAR_4->cb_propname, VAR_4->cb_value);

 if (!VAR_3)
  VAR_4->cb_any_successful = VAR_0;

 return (VAR_3);
}
