
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vm_pindex_t ;
typedef int * vm_page_t ;
typedef TYPE_2__* vm_object_t ;
struct vnode {scalar_t__ v_type; int v_mount; } ;
struct TYPE_11__ {TYPE_2__* tn_aobj; } ;
struct tmpfs_node {int tn_size; TYPE_1__ tn_reg; } ;
struct tmpfs_mount {int tm_pages_used; } ;
typedef int off_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tmpfs_mount* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 struct tmpfs_node* FUNC_5 (struct vnode*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct tmpfs_mount*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,int ,int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_2__*,int **,int,int *,int *) ;
 scalar_t__ FUNC_22 (TYPE_2__*,scalar_t__,int *,int *) ;
 int FUNC_23 (int *) ;

int
FUNC_24(struct vnode *VAR_9, off_t VAR_10, boolean_t VAR_11)
{
 struct tmpfs_mount *VAR_12;
 struct tmpfs_node *VAR_13;
 vm_object_t VAR_14;
 vm_page_t VAR_15;
 vm_pindex_t VAR_16, VAR_17, VAR_18;
 off_t VAR_19;
 int VAR_20, VAR_21;

 FUNC_0(VAR_9->v_type == VAR_8);
 FUNC_0(VAR_10 >= 0);

 VAR_13 = FUNC_5(VAR_9);
 VAR_14 = VAR_13->tn_reg.tn_aobj;
 VAR_12 = FUNC_2(VAR_9->v_mount);







 VAR_19 = VAR_13->tn_size;
 VAR_18 = FUNC_1(VAR_19 + VAR_2);
 FUNC_0(VAR_18 == VAR_14->size);
 VAR_17 = FUNC_1(VAR_10 + VAR_2);

 if (FUNC_6(VAR_17 == VAR_18 && VAR_10 >= VAR_19)) {
  VAR_13->tn_size = VAR_10;
  return (0);
 }

 if (VAR_17 > VAR_18 &&
     FUNC_10(VAR_12, VAR_17 - VAR_18) == 0)
  return (VAR_1);

 FUNC_3(VAR_14);
 if (VAR_10 < VAR_19) {



  VAR_20 = VAR_10 & VAR_2;
  if (VAR_20 != 0) {
   VAR_16 = FUNC_1(VAR_10);
retry:
   VAR_15 = FUNC_16(VAR_14, VAR_16, VAR_4);
   if (VAR_15 != ((void*)0)) {
    FUNC_0(FUNC_12(VAR_15));
   } else if (FUNC_22(VAR_14, VAR_16, ((void*)0), ((void*)0))) {
    VAR_15 = FUNC_13(VAR_14, VAR_16, VAR_5 |
        VAR_6);
    if (VAR_15 == ((void*)0))
     goto retry;
    VAR_21 = FUNC_21(VAR_14, &VAR_15, 1, ((void*)0),
        ((void*)0));
    if (VAR_21 == VAR_7) {
     FUNC_18(VAR_15);
     FUNC_17(VAR_15);
     FUNC_19(VAR_15);
    } else {
     FUNC_15(VAR_15);
     if (VAR_11)
      VAR_15 = ((void*)0);
     else {
      FUNC_4(VAR_14);
      return (VAR_0);
     }
    }
   }
   if (VAR_15 != ((void*)0)) {
    FUNC_8(VAR_15, VAR_20, VAR_3 - VAR_20);
    FUNC_14(VAR_15);
    FUNC_20(VAR_15);
    FUNC_23(VAR_15);
   }
  }




  if (VAR_17 < VAR_18) {
   FUNC_9(VAR_14, VAR_17, VAR_18 -
       VAR_17);
   FUNC_11(VAR_14, VAR_17, 0, 0);
  }
 }
 VAR_14->size = VAR_17;
 FUNC_4(VAR_14);

 FUNC_7(&VAR_12->tm_pages_used, VAR_17 - VAR_18);

 VAR_13->tn_size = VAR_10;
 return (0);
}
