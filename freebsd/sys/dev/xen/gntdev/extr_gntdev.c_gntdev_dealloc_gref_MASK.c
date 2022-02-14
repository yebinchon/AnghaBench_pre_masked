
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct per_user_data {int user_data_lock; int gref_tree; } ;
struct ioctl_gntdev_dealloc_gref {scalar_t__ count; int index; } ;
struct gntdev_gref {int dummy; } ;
struct TYPE_4__ {int to_kill_grefs_mtx; int to_kill_grefs; } ;
struct TYPE_3__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gntdev_gref* FUNC_0 (int ,int *,struct gntdev_gref*) ;
 int FUNC_1 (int ,int *,struct gntdev_gref*) ;
 int FUNC_2 (int *,struct gntdev_gref*,int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void**) ;
 struct gntdev_gref* FUNC_4 (struct per_user_data*,int ,scalar_t__) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct per_user_data*,scalar_t__,int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_10(struct ioctl_gntdev_dealloc_gref *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;
 struct gntdev_gref *VAR_10, *VAR_11;
 struct per_user_data *VAR_12;

 VAR_8 = FUNC_3((void**) &VAR_12);
 if (VAR_8 != 0)
  return (VAR_0);

 VAR_10 = FUNC_4(VAR_12, VAR_7->index, VAR_7->count);
 if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_1, "Can't find requested grant-refs.");
  return (VAR_0);
 }


 VAR_9 = VAR_7->count;
 FUNC_6(&VAR_12->user_data_lock);
 FUNC_6(&VAR_2.to_kill_grefs_mtx);
 for (; VAR_10 != ((void*)0) && VAR_9 > 0; VAR_10 = VAR_11) {
  VAR_11 = FUNC_0(VAR_5, &VAR_12->gref_tree, VAR_10);
  FUNC_1(VAR_5, &VAR_12->gref_tree, VAR_10);
  FUNC_2(&VAR_2.to_kill_grefs, VAR_10,
      VAR_4.list);
  VAR_9--;
 }
 FUNC_7(&VAR_2.to_kill_grefs_mtx);
 FUNC_7(&VAR_12->user_data_lock);

 FUNC_9(VAR_6, &VAR_3);
 FUNC_8(VAR_12, VAR_7->count, VAR_7->index);

 return (0);
}
