
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct mlx4_vlan_table {int* is_dup; int mutex; int total; scalar_t__* entries; scalar_t__* refs; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_vlan_table vlan_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,size_t,size_t,int*) ;
 int FUNC_2 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_3 (struct mlx4_dev*) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*,size_t,scalar_t__*) ;
 int FUNC_5 (struct mlx4_dev*,char*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct mlx4_dev *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct mlx4_vlan_table *VAR_5 = &FUNC_3(VAR_2)->port[VAR_3].vlan_table;
 int VAR_6;
 bool VAR_7 = FUNC_2(VAR_2);
 u8 VAR_8 = (VAR_3 == 1) ? 2 : 1;
 struct mlx4_vlan_table *VAR_9 = &FUNC_3(VAR_2)->port[VAR_8].vlan_table;

 if (VAR_7) {
  if (VAR_3 == 1) {
   FUNC_6(&VAR_5->mutex);
   FUNC_7(&VAR_9->mutex, VAR_1);
  } else {
   FUNC_6(&VAR_9->mutex);
   FUNC_7(&VAR_5->mutex, VAR_1);
  }
 } else {
  FUNC_6(&VAR_5->mutex);
 }

 if (FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6)) {
  FUNC_5(VAR_2, "vlan 0x%x is not in the vlan table\n", VAR_4);
  goto out;
 }

 if (VAR_6 < VAR_0) {
  FUNC_5(VAR_2, "Trying to free special vlan index %d\n", VAR_6);
  goto out;
 }

 if (--VAR_5->refs[VAR_6] || VAR_5->is_dup[VAR_6]) {
  FUNC_0(VAR_2, "Have %d more references for index %d, no need to modify vlan table\n",
    VAR_5->refs[VAR_6], VAR_6);
  if (!VAR_5->refs[VAR_6])
   VAR_9->is_dup[VAR_6] = 0;
  goto out;
 }
 VAR_5->entries[VAR_6] = 0;
 if (FUNC_4(VAR_2, VAR_3, VAR_5->entries))
  FUNC_5(VAR_2, "Fail to set vlan in port %d during unregister\n", VAR_3);
 --VAR_5->total;
 if (VAR_7) {
  VAR_9->is_dup[VAR_6] = 0;
  if (VAR_9->refs[VAR_6])
   goto out;
  VAR_9->entries[VAR_6] = 0;
  if (FUNC_4(VAR_2, VAR_8, VAR_9->entries))
   FUNC_5(VAR_2, "Fail to set vlan in duplicate port %d during unregister\n", VAR_8);
  --VAR_9->total;
 }
out:
 if (VAR_7) {
  if (VAR_3 == 2) {
   FUNC_8(&VAR_5->mutex);
   FUNC_8(&VAR_9->mutex);
  } else {
   FUNC_8(&VAR_9->mutex);
   FUNC_8(&VAR_5->mutex);
  }
 } else {
  FUNC_8(&VAR_5->mutex);
 }
}
