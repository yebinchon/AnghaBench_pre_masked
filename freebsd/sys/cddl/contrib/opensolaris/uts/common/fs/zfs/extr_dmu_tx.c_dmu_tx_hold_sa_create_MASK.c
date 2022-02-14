
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ sa_master_obj; scalar_t__ sa_layout_attr_obj; int sa_force_spill; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_11__ {TYPE_8__* tx_objset; } ;
typedef TYPE_2__ dmu_tx_t ;
struct TYPE_12__ {TYPE_1__* os_sa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,TYPE_8__*,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int ,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

void
FUNC_4(dmu_tx_t *VAR_6, int VAR_7)
{
 sa_os_t *VAR_8 = VAR_6->tx_objset->os_sa;

 FUNC_0(VAR_6, VAR_1);

 if (VAR_6->tx_objset->os_sa->sa_master_obj == 0)
  return;

 if (VAR_6->tx_objset->os_sa->sa_layout_attr_obj) {
  FUNC_2(VAR_6, VAR_8->sa_layout_attr_obj, VAR_0, ((void*)0));
 } else {
  FUNC_2(VAR_6, VAR_8->sa_master_obj, VAR_0, VAR_3);
  FUNC_2(VAR_6, VAR_8->sa_master_obj, VAR_0, VAR_4);
  FUNC_2(VAR_6, VAR_1, VAR_0, ((void*)0));
  FUNC_2(VAR_6, VAR_1, VAR_0, ((void*)0));
 }

 FUNC_3(VAR_8, VAR_6);

 if (VAR_7 <= VAR_2 && !VAR_8->sa_force_spill)
  return;

 (void) FUNC_1(VAR_6, VAR_6->tx_objset, VAR_1,
     VAR_5, 0, 0);
}
