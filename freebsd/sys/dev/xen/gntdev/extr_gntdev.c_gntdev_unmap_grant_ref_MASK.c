
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct per_user_data {int user_data_lock; int gmap_tree; } ;
struct ioctl_gntdev_unmap_grant_ref {int index; int count; } ;
struct gntdev_gmap {TYPE_1__* map; } ;
struct TYPE_6__ {int to_kill_gmaps_mtx; int to_kill_gmaps; } ;
struct TYPE_5__ {int list; } ;
struct TYPE_4__ {int mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct gntdev_gmap*) ;
 int FUNC_1 (int *,struct gntdev_gmap*,int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void**) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 struct gntdev_gmap* FUNC_3 (struct per_user_data*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct per_user_data*,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct ioctl_gntdev_unmap_grant_ref *VAR_7)
{
 int VAR_8;
 struct gntdev_gmap *VAR_9;
 struct per_user_data *VAR_10;

 VAR_8 = FUNC_2((void**) &VAR_10);
 if (VAR_8 != 0)
  return (VAR_0);

 VAR_9 = FUNC_3(VAR_10, VAR_7->index, VAR_7->count);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_1, "Can't find requested grant-map.");
  return (VAR_0);
 }

 FUNC_5(&VAR_10->user_data_lock);
 FUNC_5(&VAR_2.to_kill_gmaps_mtx);
 FUNC_0(VAR_5, &VAR_10->gmap_tree, VAR_9);
 FUNC_1(&VAR_2.to_kill_gmaps, VAR_9, VAR_4.list);
 FUNC_6(&VAR_2.to_kill_gmaps_mtx);
 FUNC_6(&VAR_10->user_data_lock);

 if (VAR_9->map)
  FUNC_9(VAR_9->map->mem);

 FUNC_8(VAR_6, &VAR_3);
 FUNC_7(VAR_10, VAR_7->count, VAR_7->index);

 return (0);
}
