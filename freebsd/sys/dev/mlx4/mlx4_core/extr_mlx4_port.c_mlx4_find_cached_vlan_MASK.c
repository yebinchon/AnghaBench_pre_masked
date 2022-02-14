
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mlx4_vlan_table {int * entries; scalar_t__* refs; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_vlan_table vlan_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_3, u8 VAR_4, u16 VAR_5, int *VAR_6)
{
 struct mlx4_vlan_table *VAR_7 = &FUNC_1(VAR_3)->port[VAR_4].vlan_table;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  if (VAR_7->refs[VAR_8] &&
      (VAR_5 == (VAR_2 &
         FUNC_0(VAR_7->entries[VAR_8])))) {

   *VAR_6 = VAR_8;
   return 0;
  }
 }

 return -VAR_0;
}
