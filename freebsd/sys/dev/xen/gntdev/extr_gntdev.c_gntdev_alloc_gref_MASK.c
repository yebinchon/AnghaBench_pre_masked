
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
typedef size_t uint32_t ;
struct per_user_data {int user_data_lock; int gref_tree; } ;
struct ioctl_gntdev_alloc_gref {int flags; int count; int * gref_ids; void* index; int domid; } ;
struct gntdev_gref {int gref_id; TYPE_1__* page; int * notify; void* file_index; } ;
struct TYPE_8__ {int to_kill_grefs_mtx; int to_kill_grefs; } ;
struct TYPE_7__ {int list; } ;
struct TYPE_6__ {int flags; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *,struct gntdev_gref*) ;
 int FUNC_1 (int *,struct gntdev_gref*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (void**) ;
 int FUNC_4 (struct per_user_data*,int,void**) ;
 int FUNC_5 (int ,int,int,int *) ;
 TYPE_3__ VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int ,char*) ;
 struct gntdev_gref* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int *) ;
 int VAR_19 ;
 TYPE_1__* FUNC_13 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_14(struct ioctl_gntdev_alloc_gref *VAR_20)
{
 uint32_t VAR_21;
 int VAR_22, VAR_23;
 uint64_t VAR_24;
 struct gntdev_gref *VAR_25;
 struct per_user_data *VAR_26;

 VAR_23 = !(VAR_20->flags & VAR_2);

 VAR_22 = FUNC_3((void**) &VAR_26);
 if (VAR_22 != 0)
  return (VAR_0);


 FUNC_12(VAR_19, &VAR_16);


 VAR_22 = FUNC_4(VAR_26, VAR_20->count, &VAR_24);
 if (VAR_22 != 0)
  return (VAR_22);


 VAR_25 = FUNC_7(sizeof(*VAR_25) * VAR_20->count, VAR_5, VAR_6);

 for (VAR_21 = 0; VAR_21 < VAR_20->count; VAR_21++) {
  VAR_25[VAR_21].file_index = VAR_24 + VAR_21 * VAR_8;
  VAR_25[VAR_21].gref_id = VAR_3;
  VAR_25[VAR_21].notify = ((void*)0);
  VAR_25[VAR_21].page = FUNC_13(((void*)0), 0, VAR_11
   | VAR_10 | VAR_12 | VAR_13);
  if (VAR_25[VAR_21].page == ((void*)0)) {
   FUNC_6(VAR_4, "Page allocation failed.");
   VAR_22 = VAR_1;
   break;
  }
  if ((VAR_25[VAR_21].page->flags & VAR_9) == 0) {




   FUNC_10(VAR_25[VAR_21].page);
  }
  VAR_25[VAR_21].page->valid = VAR_14;

  VAR_22 = FUNC_5(VAR_20->domid,
   (FUNC_2(VAR_25[VAR_21].page) >> VAR_7),
   VAR_23, &VAR_25[VAR_21].gref_id);
  if (VAR_22 != 0) {
   FUNC_6(VAR_4, "Grant Table Hypercall failed.");
   break;
  }
 }

 if (VAR_22 != 0) {






  FUNC_8(&VAR_15.to_kill_grefs_mtx);
  for (VAR_21 = 0; VAR_21 < VAR_20->count; VAR_21++)
   FUNC_1(&VAR_15.to_kill_grefs,
       &VAR_25[VAR_21], VAR_17.list);
  FUNC_9(&VAR_15.to_kill_grefs_mtx);

  FUNC_12(VAR_19, &VAR_16);

  return (VAR_22);
 }


 VAR_20->index = VAR_24;
 for (VAR_21 = 0; VAR_21 < VAR_20->count; VAR_21++)
  FUNC_11(&VAR_20->gref_ids[VAR_21], VAR_25[VAR_21].gref_id);


 FUNC_8(&VAR_26->user_data_lock);
 for (VAR_21 = 0; VAR_21 < VAR_20->count; VAR_21++)
  FUNC_0(VAR_18, &VAR_26->gref_tree, &VAR_25[VAR_21]);
 FUNC_9(&VAR_26->user_data_lock);

 return (VAR_22);
}
