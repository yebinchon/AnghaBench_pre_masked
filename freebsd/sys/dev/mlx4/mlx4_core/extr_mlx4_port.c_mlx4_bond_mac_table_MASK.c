
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_mac_table {scalar_t__* entries; int* is_dup; int mutex; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_mac_table mac_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct mlx4_dev*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx4_dev *VAR_2)
{
 struct mlx4_mac_table *VAR_3 = &FUNC_0(VAR_2)->port[1].mac_table;
 struct mlx4_mac_table *VAR_4 = &FUNC_0(VAR_2)->port[2].mac_table;
 int VAR_5 = 0;
 int VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;

 FUNC_3(&VAR_3->mutex);
 FUNC_3(&VAR_4->mutex);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_3->entries[VAR_6] != VAR_4->entries[VAR_6]) &&
      VAR_3->entries[VAR_6] && VAR_4->entries[VAR_6]) {
   FUNC_2(VAR_2, "can't duplicate entry %d in mac table\n", VAR_6);
   VAR_5 = -VAR_0;
   goto unlock;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_3->entries[VAR_6] && !VAR_4->entries[VAR_6]) {
   VAR_4->entries[VAR_6] = VAR_3->entries[VAR_6];
   VAR_4->is_dup[VAR_6] = 1;
   VAR_8 = 1;
  } else if (!VAR_3->entries[VAR_6] && VAR_4->entries[VAR_6]) {
   VAR_3->entries[VAR_6] = VAR_4->entries[VAR_6];
   VAR_3->is_dup[VAR_6] = 1;
   VAR_7 = 1;
  } else if (VAR_3->entries[VAR_6] && VAR_4->entries[VAR_6]) {
   VAR_3->is_dup[VAR_6] = 1;
   VAR_4->is_dup[VAR_6] = 1;
  }
 }

 if (VAR_7) {
  VAR_5 = FUNC_1(VAR_2, 1, VAR_3->entries);
  if (VAR_5)
   FUNC_2(VAR_2, "failed to set MAC table for port 1 (%d)\n", VAR_5);
 }
 if (!VAR_5 && VAR_8) {
  VAR_5 = FUNC_1(VAR_2, 2, VAR_4->entries);
  if (VAR_5)
   FUNC_2(VAR_2, "failed to set MAC table for port 2 (%d)\n", VAR_5);
 }

 if (VAR_5)
  FUNC_2(VAR_2, "failed to create mirror MAC tables\n");
unlock:
 FUNC_4(&VAR_4->mutex);
 FUNC_4(&VAR_3->mutex);
 return VAR_5;
}
