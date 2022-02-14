
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct per_user_data {int user_data_lock; int gmap_tree; } ;
struct ioctl_gntdev_map_grant_ref {int count; int index; int * refs; } ;
struct ioctl_gntdev_grant_ref {int ref; int domid; } ;
struct gnttab_map_grant_ref {int dummy; } ;
struct gntdev_gmap {int count; int handle; int file_index; struct gntdev_gmap* grant_map_ops; int flags; int ref; int dom; } ;
typedef int ref ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,struct gntdev_gmap*) ;
 int FUNC_1 (int *,struct ioctl_gntdev_grant_ref*,int) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (struct gntdev_gmap*,int ) ;
 int FUNC_4 (struct per_user_data*,size_t,int *) ;
 int VAR_5 ;
 void* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct ioctl_gntdev_map_grant_ref *VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;
 struct gntdev_gmap *VAR_9;
 struct per_user_data *VAR_10;

 VAR_8 = FUNC_2((void**) &VAR_10);
 if (VAR_8 != 0)
  return (VAR_0);

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2, VAR_3 | VAR_4);
 VAR_9->count = VAR_6->count;
 VAR_9->grant_map_ops =
     FUNC_5(sizeof(struct gnttab_map_grant_ref) * VAR_6->count,
         VAR_2, VAR_3 | VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_6->count; VAR_7++) {
  struct ioctl_gntdev_grant_ref VAR_11;

  VAR_8 = FUNC_1(&VAR_6->refs[VAR_7], &VAR_11, sizeof(VAR_11));
  if (VAR_8 != 0) {
   FUNC_3(VAR_9->grant_map_ops, VAR_2);
   FUNC_3(VAR_9, VAR_2);
   return (VAR_8);
  }
  VAR_9->grant_map_ops[VAR_7].dom = VAR_11.domid;
  VAR_9->grant_map_ops[VAR_7].ref = VAR_11.ref;
  VAR_9->grant_map_ops[VAR_7].handle = -1;
  VAR_9->grant_map_ops[VAR_7].flags = VAR_1;
 }

 VAR_8 = FUNC_4(VAR_10, VAR_6->count, &VAR_9->file_index);
 if (VAR_8 != 0) {
  FUNC_3(VAR_9->grant_map_ops, VAR_2);
  FUNC_3(VAR_9, VAR_2);
  return (VAR_8);
 }

 FUNC_6(&VAR_10->user_data_lock);
 FUNC_0(VAR_5, &VAR_10->gmap_tree, VAR_9);
 FUNC_7(&VAR_10->user_data_lock);

 VAR_6->index = VAR_9->file_index;

 return (VAR_8);
}
