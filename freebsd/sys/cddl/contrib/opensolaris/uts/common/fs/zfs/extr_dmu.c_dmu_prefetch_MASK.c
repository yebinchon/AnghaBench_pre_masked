
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int zio_priority_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int int64_t ;
struct TYPE_7__ {scalar_t__ dn_datablkshift; int dn_datablksz; int dn_struct_rwlock; } ;
typedef TYPE_1__ dnode_t ;
typedef int dnode_phys_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int,int ,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

void
FUNC_8(objset_t *VAR_4, uint64_t VAR_5, int64_t VAR_6, uint64_t VAR_7,
    uint64_t VAR_8, zio_priority_t VAR_9)
{
 dnode_t *VAR_10;
 uint64_t VAR_11;
 int VAR_12, VAR_13;

 if (VAR_8 == 0) {
  VAR_10 = FUNC_0(VAR_4);

  if (VAR_5 == 0 || VAR_5 >= VAR_0)
   return;

  FUNC_6(&VAR_10->dn_struct_rwlock, VAR_2);
  VAR_11 = FUNC_3(VAR_10, VAR_6,
      VAR_5 * sizeof (dnode_phys_t));
  FUNC_2(VAR_10, VAR_6, VAR_11, VAR_9, 0);
  FUNC_7(&VAR_10->dn_struct_rwlock);
  return;
 }




 VAR_8 = FUNC_1(VAR_8, VAR_3);






 VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_1, &VAR_10);
 if (VAR_13 != 0)
  return;

 FUNC_6(&VAR_10->dn_struct_rwlock, VAR_2);







 if (VAR_6 > 0 || VAR_10->dn_datablkshift != 0) {
  VAR_12 = FUNC_3(VAR_10, VAR_6, VAR_7 + VAR_8 - 1) -
      FUNC_3(VAR_10, VAR_6, VAR_7) + 1;
 } else {
  VAR_12 = (VAR_7 < VAR_10->dn_datablksz);
 }

 if (VAR_12 != 0) {
  VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_7);
  for (int VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
   FUNC_2(VAR_10, VAR_6, VAR_11 + VAR_14, VAR_9, 0);
 }

 FUNC_7(&VAR_10->dn_struct_rwlock);

 FUNC_5(VAR_10, VAR_1);
}
