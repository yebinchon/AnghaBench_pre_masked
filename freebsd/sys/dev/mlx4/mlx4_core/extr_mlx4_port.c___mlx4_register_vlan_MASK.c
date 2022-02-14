
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mlx4_vlan_table {scalar_t__ total; scalar_t__ max; int* refs; int* is_dup; int mutex; void** entries; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct mlx4_vlan_table vlan_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_dev*,char*,int,...) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,size_t,void**) ;
 int FUNC_7 (struct mlx4_dev*,char*,...) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct mlx4_dev *VAR_7, u8 VAR_8, u16 VAR_9,
    int *VAR_10)
{
 struct mlx4_vlan_table *VAR_11 = &FUNC_5(VAR_7)->port[VAR_8].vlan_table;
 int VAR_12, VAR_13 = 0;
 int VAR_14 = -1;
 int VAR_15 = -1;
 bool VAR_16 = FUNC_3(VAR_7);
 u8 VAR_17 = (VAR_8 == 1) ? 2 : 1;
 struct mlx4_vlan_table *VAR_18 = &FUNC_5(VAR_7)->port[VAR_17].vlan_table;
 bool VAR_19 = FUNC_4(VAR_7);
 bool VAR_20 = 1;

 FUNC_2(VAR_7, "Registering VLAN: %d for port %d %s duplicate\n",
   VAR_9, VAR_8,
   VAR_16 ? "with" : "without");

 if (VAR_19) {
  if (VAR_8 == 1) {
   FUNC_8(&VAR_11->mutex);
   FUNC_9(&VAR_18->mutex, VAR_6);
  } else {
   FUNC_8(&VAR_18->mutex);
   FUNC_9(&VAR_11->mutex, VAR_6);
  }
 } else {
  FUNC_8(&VAR_11->mutex);
 }

 if (VAR_11->total == VAR_11->max) {

  VAR_13 = -VAR_1;
  goto out;
 }

 if (VAR_19) {
  int VAR_21 = -1;
  int VAR_22 = -1;

  for (VAR_12 = VAR_4; VAR_12 < VAR_2; VAR_12++) {
   if (VAR_9 == (VAR_3 & FUNC_0(VAR_11->entries[VAR_12])))
    VAR_21 = VAR_12;
   if (VAR_9 == (VAR_3 & FUNC_0(VAR_18->entries[VAR_12])))
    VAR_22 = VAR_12;
  }

  if ((VAR_21 != VAR_22) &&
      (VAR_21 >= 0) &&
      (VAR_22 >= 0))
   VAR_20 = 0;




  if (VAR_21 >= 0 && VAR_22 < 0 &&
      VAR_18->refs[VAR_21]) {
   VAR_20 = 0;
  }






  if (VAR_22 >= 0) {
   if (!VAR_11->refs[VAR_22] ||
       (VAR_9 == (VAR_3 & FUNC_0(VAR_18->entries[VAR_22]))))
    VAR_15 = VAR_22;
   else
    VAR_20 = 0;
  }
 }

 for (VAR_12 = VAR_4; VAR_12 < VAR_2; VAR_12++) {
  if (!VAR_11->refs[VAR_12]) {
   if (VAR_14 < 0)
    VAR_14 = VAR_12;
   if (VAR_15 < 0 && VAR_19 && VAR_20) {
    if (!VAR_18->refs[VAR_12])
     VAR_15 = VAR_12;
   }
  }

  if ((VAR_11->refs[VAR_12] || VAR_11->is_dup[VAR_12]) &&
      (VAR_9 == (VAR_3 &
         FUNC_0(VAR_11->entries[VAR_12])))) {

   FUNC_2(VAR_7, "vlan %u is already registered.\n", VAR_9);
   *VAR_10 = VAR_12;
   ++VAR_11->refs[VAR_12];
   if (VAR_16) {
    u16 VAR_23 = VAR_3 & FUNC_0(VAR_18->entries[VAR_12]);

    if (VAR_23 != VAR_9 || !VAR_18->is_dup[VAR_12]) {
     FUNC_7(VAR_7, "register vlan: expected duplicate vlan %u on port %d index %d\n",
        VAR_9, VAR_17, VAR_12);
    }
   }
   goto out;
  }
 }

 if (VAR_19 && (VAR_15 < 0)) {
  if (VAR_16) {
   FUNC_7(VAR_7, "Fail to allocate duplicate VLAN table entry\n");
   FUNC_7(VAR_7, "High Availability for virtual functions may not work as expected\n");
   VAR_16 = 0;
  }
  VAR_20 = 0;
 }

 if (VAR_19 && VAR_20)
  VAR_14 = VAR_15;

 if (VAR_14 < 0) {
  VAR_13 = -VAR_0;
  goto out;
 }


 VAR_11->refs[VAR_14] = 1;
 VAR_11->is_dup[VAR_14] = 0;
 VAR_11->entries[VAR_14] = FUNC_1(VAR_9 | VAR_5);

 VAR_13 = FUNC_6(VAR_7, VAR_8, VAR_11->entries);
 if (FUNC_11(VAR_13)) {
  FUNC_7(VAR_7, "Failed adding vlan: %u\n", VAR_9);
  VAR_11->refs[VAR_14] = 0;
  VAR_11->entries[VAR_14] = 0;
  goto out;
 }
 ++VAR_11->total;
 if (VAR_16) {
  VAR_18->refs[VAR_14] = 0;
  VAR_18->is_dup[VAR_14] = 1;
  VAR_18->entries[VAR_14] = FUNC_1(VAR_9 | VAR_5);

  VAR_13 = FUNC_6(VAR_7, VAR_17, VAR_18->entries);
  if (FUNC_11(VAR_13)) {
   FUNC_7(VAR_7, "Failed adding duplicate vlan: %u\n", VAR_9);
   VAR_18->is_dup[VAR_14] = 0;
   VAR_18->entries[VAR_14] = 0;
   goto out;
  }
  ++VAR_18->total;
 }

 *VAR_10 = VAR_14;
out:
 if (VAR_19) {
  if (VAR_8 == 2) {
   FUNC_10(&VAR_11->mutex);
   FUNC_10(&VAR_18->mutex);
  } else {
   FUNC_10(&VAR_18->mutex);
   FUNC_10(&VAR_11->mutex);
  }
 } else {
  FUNC_10(&VAR_11->mutex);
 }
 return VAR_13;
}
