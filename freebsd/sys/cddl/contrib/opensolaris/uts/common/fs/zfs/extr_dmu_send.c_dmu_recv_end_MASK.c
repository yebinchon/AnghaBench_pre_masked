
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int drc_newsnapobj; int * drc_guid_to_ds_map; int drc_tofs; scalar_t__ drc_newfs; void* drc_owner; } ;
typedef TYPE_1__ dmu_recv_cookie_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(dmu_recv_cookie_t *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_0->drc_owner = VAR_1;

 if (VAR_0->drc_newfs)
  VAR_2 = FUNC_3(VAR_0);
 else
  VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 != 0) {
  FUNC_1(VAR_0);
 } else if (VAR_0->drc_guid_to_ds_map != ((void*)0)) {
  (void) FUNC_0(VAR_0->drc_tofs,
      VAR_0->drc_guid_to_ds_map,
      VAR_0->drc_newsnapobj);
 }
 return (VAR_2);
}
