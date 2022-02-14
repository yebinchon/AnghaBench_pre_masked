
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_16__ {int z_sa_hdl; int z_id; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_17__ {int z_unlinkedobj; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int zap_cursor_t ;
struct TYPE_18__ {int * za_name; int za_first_integer; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int dmu_tx_t ;
struct TYPE_15__ {scalar_t__ v_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 TYPE_11__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_11__*,int) ;
 int FUNC_11 (TYPE_11__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int FUNC_16 (TYPE_1__*,int *,TYPE_1__*,int *,int ,int *) ;
 int FUNC_17 (int *,TYPE_1__*) ;
 int FUNC_18 (TYPE_2__*,int ,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_19(znode_t *VAR_8)
{
 zap_cursor_t VAR_9;
 zap_attribute_t VAR_10;
 znode_t *VAR_11;
 dmu_tx_t *VAR_12;
 zfsvfs_t *VAR_13 = VAR_8->z_zfsvfs;
 int VAR_14 = 0;
 int VAR_15;

 for (FUNC_14(&VAR_9, VAR_13->z_os, VAR_8->z_id);
     (VAR_15 = FUNC_15(&VAR_9, &VAR_10)) == 0;
     FUNC_12(&VAR_9)) {
  VAR_15 = FUNC_18(VAR_13,
      FUNC_1(VAR_10.za_first_integer), &VAR_11);
  if (VAR_15) {
   VAR_14 += 1;
   continue;
  }

  FUNC_10(FUNC_2(VAR_11), VAR_3 | VAR_4);
  FUNC_0((FUNC_2(VAR_11)->v_type == VAR_7) ||
      (FUNC_2(VAR_11)->v_type == VAR_6));

  VAR_12 = FUNC_6(VAR_13->z_os);
  FUNC_7(VAR_12, VAR_8->z_sa_hdl, VAR_0);
  FUNC_8(VAR_12, VAR_8->z_id, VAR_2, VAR_10.za_name);
  FUNC_7(VAR_12, VAR_11->z_sa_hdl, VAR_0);
  FUNC_8(VAR_12, VAR_13->z_unlinkedobj, VAR_2, ((void*)0));

  FUNC_17(VAR_12, VAR_11);
  FUNC_9(VAR_12);
  VAR_15 = FUNC_4(VAR_12, VAR_5);
  if (VAR_15) {
   FUNC_3(VAR_12);
   FUNC_11(FUNC_2(VAR_11));
   VAR_14 += 1;
   continue;
  }

  VAR_15 = FUNC_16(VAR_8, VAR_10.za_name, VAR_11, VAR_12, 0, ((void*)0));
  if (VAR_15)
   VAR_14 += 1;
  FUNC_5(VAR_12);

  FUNC_11(FUNC_2(VAR_11));
 }
 FUNC_13(&VAR_9);
 if (VAR_15 != VAR_1)
  VAR_14 += 1;
 return (VAR_14);
}
