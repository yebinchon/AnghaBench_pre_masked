
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct mlx4_mac_table {int* refs; int* is_dup; scalar_t__ total; scalar_t__ max; int mutex; void** entries; } ;
struct mlx4_port_info {struct mlx4_mac_table mac_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_dev*,char*,int,...) ;
 int FUNC_3 (struct mlx4_dev*,char*,unsigned long long) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 TYPE_1__* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,size_t,void**) ;
 int FUNC_8 (struct mlx4_dev*,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct mlx4_dev *VAR_5, u8 VAR_6, u64 VAR_7)
{
 struct mlx4_port_info *VAR_8 = &FUNC_6(VAR_5)->port[VAR_6];
 struct mlx4_mac_table *VAR_9 = &VAR_8->mac_table;
 int VAR_10, VAR_11 = 0;
 int VAR_12 = -1;
 int VAR_13 = -1;
 bool VAR_14 = FUNC_4(VAR_5);
 u8 VAR_15 = (VAR_6 == 1) ? 2 : 1;
 struct mlx4_mac_table *VAR_16 = &FUNC_6(VAR_5)->port[VAR_15].mac_table;
 bool VAR_17 = FUNC_5(VAR_5);
 bool VAR_18 = 1;

 FUNC_2(VAR_5, "Registering MAC: 0x%llx for port %d %s duplicate\n",
   (unsigned long long)VAR_7, VAR_6,
   VAR_14 ? "with" : "without");

 if (VAR_17) {
  if (VAR_6 == 1) {
   FUNC_9(&VAR_9->mutex);
   FUNC_10(&VAR_16->mutex, VAR_4);
  } else {
   FUNC_9(&VAR_16->mutex);
   FUNC_10(&VAR_9->mutex, VAR_4);
  }
 } else {
  FUNC_9(&VAR_9->mutex);
 }

 if (VAR_17) {
  int VAR_19 = -1;
  int VAR_20 = -1;

  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   if (((VAR_1 & VAR_7) == (VAR_1 & FUNC_0(VAR_9->entries[VAR_10]))))
    VAR_19 = VAR_10;
   if (((VAR_1 & VAR_7) == (VAR_1 & FUNC_0(VAR_16->entries[VAR_10]))))
    VAR_20 = VAR_10;
  }


  if ((VAR_19 != VAR_20) &&
      (VAR_19 >= 0) &&
      (VAR_20 >= 0))
   VAR_18 = 0;




  if (VAR_19 >= 0 && VAR_20 < 0 &&
      VAR_16->refs[VAR_19]) {
   VAR_18 = 0;
  }






  if (VAR_20 >= 0) {
   if (!VAR_9->refs[VAR_20] ||
       ((VAR_1 & VAR_7) == (VAR_1 & FUNC_0(VAR_9->entries[VAR_20]))))
    VAR_13 = VAR_20;
   else
    VAR_18 = 0;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (!VAR_9->refs[VAR_10]) {
   if (VAR_12 < 0)
    VAR_12 = VAR_10;
   if (VAR_13 < 0 && VAR_17 && VAR_18) {
    if (!VAR_16->refs[VAR_10])
     VAR_13 = VAR_10;
   }
   continue;
  }

  if ((VAR_1 & VAR_7) ==
       (VAR_1 & FUNC_0(VAR_9->entries[VAR_10]))) {

   VAR_11 = VAR_10;
   ++VAR_9->refs[VAR_10];
   if (VAR_14) {
    u64 VAR_21 = VAR_1 & FUNC_0(VAR_16->entries[VAR_10]);

    if (VAR_21 != VAR_7 || !VAR_16->is_dup[VAR_10]) {
     FUNC_8(VAR_5, "register mac: expect duplicate mac 0x%llx on port %d index %d\n",
        (long long)VAR_7, VAR_15, VAR_10);
    }
   }
   goto out;
  }
 }

 if (VAR_17 && (VAR_13 < 0)) {
  if (VAR_14) {
   FUNC_8(VAR_5, "Fail to allocate duplicate MAC table entry\n");
   FUNC_8(VAR_5, "High Availability for virtual functions may not work as expected\n");
   VAR_14 = 0;
  }
  VAR_18 = 0;
 }

 if (VAR_17 && VAR_18)
  VAR_12 = VAR_13;

 FUNC_2(VAR_5, "Free MAC index is %d\n", VAR_12);

 if (VAR_9->total == VAR_9->max) {

  VAR_11 = -VAR_0;
  goto out;
 }


 VAR_9->entries[VAR_12] = FUNC_1(VAR_7 | VAR_2);

 VAR_11 = FUNC_7(VAR_5, VAR_6, VAR_9->entries);
 if (FUNC_12(VAR_11)) {
  FUNC_3(VAR_5, "Failed adding MAC: 0x%llx\n",
    (unsigned long long) VAR_7);
  VAR_9->entries[VAR_12] = 0;
  goto out;
 }
 VAR_9->refs[VAR_12] = 1;
 VAR_9->is_dup[VAR_12] = 0;
 ++VAR_9->total;
 if (VAR_14) {
  VAR_16->refs[VAR_12] = 0;
  VAR_16->is_dup[VAR_12] = 1;
  VAR_16->entries[VAR_12] = FUNC_1(VAR_7 | VAR_2);

  VAR_11 = FUNC_7(VAR_5, VAR_15, VAR_16->entries);
  if (FUNC_12(VAR_11)) {
   FUNC_8(VAR_5, "Failed adding duplicate mac: 0x%llx\n", (long long)VAR_7);
   VAR_16->is_dup[VAR_12] = 0;
   VAR_16->entries[VAR_12] = 0;
   goto out;
  }
  ++VAR_16->total;
 }
 VAR_11 = VAR_12;
out:
 if (VAR_17) {
  if (VAR_6 == 2) {
   FUNC_11(&VAR_9->mutex);
   FUNC_11(&VAR_16->mutex);
  } else {
   FUNC_11(&VAR_16->mutex);
   FUNC_11(&VAR_9->mutex);
  }
 } else {
  FUNC_11(&VAR_9->mutex);
 }
 return VAR_11;
}
