
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ z_links; int z_unlinked; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_13__ {int z_os; int z_unlinkedobj; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zap_cursor_t ;
struct TYPE_14__ {int za_first_integer; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {scalar_t__ doi_type; } ;
typedef TYPE_4__ dmu_object_info_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int ,scalar_t__*,int,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;
 scalar_t__ FUNC_16 (int *,TYPE_3__*) ;
 int FUNC_17 (TYPE_2__*,int ,TYPE_1__**) ;

void
FUNC_18(zfsvfs_t *VAR_7)
{
 zap_cursor_t VAR_8;
 zap_attribute_t VAR_9;
 dmu_object_info_t VAR_10;
 znode_t *VAR_11;
 dmu_tx_t *VAR_12;
 int VAR_13;




 for (FUNC_15(&VAR_8, VAR_7->z_os, VAR_7->z_unlinkedobj);
     FUNC_16(&VAR_8, &VAR_9) == 0;
     FUNC_13(&VAR_8)) {





  VAR_13 = FUNC_4(VAR_7->z_os,
      VAR_9.za_first_integer, &VAR_10);
  if (VAR_13 != 0)
   continue;

  FUNC_0((VAR_10.doi_type == VAR_3) ||
      (VAR_10.doi_type == VAR_2));




  VAR_13 = FUNC_17(VAR_7, VAR_9.za_first_integer, &VAR_11);







  if (VAR_13 != 0)
   continue;

  FUNC_11(FUNC_3(VAR_11), VAR_4 | VAR_5);
  VAR_11->z_unlinked = VAR_1;
  FUNC_12(FUNC_3(VAR_11));
 }
 FUNC_14(&VAR_8);
}
