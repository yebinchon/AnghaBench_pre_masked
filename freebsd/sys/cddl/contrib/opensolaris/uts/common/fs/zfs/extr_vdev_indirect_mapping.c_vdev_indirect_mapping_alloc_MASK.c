
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* vimp_counts_object; } ;
typedef TYPE_1__ vdev_indirect_mapping_phys_t ;
typedef int uint64_t ;
struct TYPE_11__ {int os_spa; } ;
typedef TYPE_2__ objset_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {TYPE_1__* db_data; } ;
typedef TYPE_3__ dmu_buf_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int ,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 void* FUNC_5 (TYPE_2__*,int ,int ,int ,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int ) ;

uint64_t
FUNC_9(objset_t *VAR_7, dmu_tx_t *VAR_8)
{
 uint64_t VAR_9;
 FUNC_0(FUNC_6(VAR_8));
 uint64_t VAR_10 = VAR_6;

 if (FUNC_8(VAR_7->os_spa, VAR_4)) {
  VAR_10 = sizeof (vdev_indirect_mapping_phys_t);
 }

 VAR_9 = FUNC_5(VAR_7,
     VAR_1, VAR_5,
     VAR_1, VAR_10,
     VAR_8);

 if (FUNC_8(VAR_7->os_spa, VAR_4)) {
  dmu_buf_t *VAR_11;
  vdev_indirect_mapping_phys_t *VAR_12;

  FUNC_1(FUNC_2(VAR_7, VAR_9, VAR_3, &VAR_11));
  FUNC_4(VAR_11, VAR_8);
  VAR_12 = VAR_11->db_data;
  VAR_12->vimp_counts_object = FUNC_5(VAR_7,
      VAR_0, VAR_5,
      VAR_2, 0, VAR_8);
  FUNC_7(VAR_7->os_spa, VAR_4, VAR_8);
  FUNC_3(VAR_11, VAR_3);
 }

 return (VAR_9);
}
