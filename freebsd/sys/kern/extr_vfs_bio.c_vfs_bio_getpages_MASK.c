
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef TYPE_3__* vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_4__* vm_object_t ;
typedef int (* vbg_get_lblkno_t ) (struct vnode*,scalar_t__) ;
typedef void* (* vbg_get_blksize_t ) (struct vnode*,int) ;
struct vnode {struct mount* v_mount; TYPE_4__* v_object; } ;
struct mount {int mnt_kern_flag; } ;
struct buf {int b_flags; int b_dep; } ;
typedef int daddr_t ;
struct TYPE_17__ {scalar_t__ vnp_size; } ;
struct TYPE_18__ {TYPE_1__ vnp; } ;
struct TYPE_20__ {TYPE_2__ un_pager; } ;
struct TYPE_19__ {int pindex; } ;
struct TYPE_16__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 (struct vnode*,int,long,int ,int,struct buf**) ;
 int FUNC_11 (struct buf*) ;
 scalar_t__ VAR_10 ;
 TYPE_13__* VAR_11 ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_3__* FUNC_16 (TYPE_4__*,int,int ) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*,int ) ;

int
FUNC_20(struct vnode *VAR_14, vm_page_t *VAR_15, int VAR_16,
    int *VAR_17, int *VAR_18, vbg_get_lblkno_t VAR_19,
    vbg_get_blksize_t VAR_20)
{
 vm_page_t VAR_21;
 vm_object_t VAR_22;
 struct buf *VAR_23;
 struct mount *VAR_24;
 daddr_t VAR_25, VAR_26;
 vm_ooffset_t VAR_27, VAR_28, VAR_29, VAR_30;
 long VAR_31;
 int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;
 bool VAR_39, VAR_40;

 VAR_22 = VAR_14->v_object;
 VAR_24 = VAR_14->v_mount;
 VAR_34 = 0;
 VAR_27 = FUNC_0(VAR_15[VAR_16 - 1]->pindex);
 if (VAR_27 >= VAR_22->un_pager.vnp.vnp_size)
  return (VAR_7);






 VAR_27 += VAR_4;
 VAR_40 = VAR_27 > VAR_22->un_pager.vnp.vnp_size;
 VAR_32 = VAR_20(VAR_14, VAR_19(VAR_14, FUNC_0(VAR_15[0]->pindex)));




 VAR_36 = VAR_16;
 VAR_28 = FUNC_0(VAR_15[0]->pindex);
 VAR_38 = FUNC_4(VAR_28 - FUNC_12(VAR_28, VAR_32));
 VAR_36 += VAR_38;
 if (VAR_17 != ((void*)0))
  *VAR_17 = VAR_38;
 VAR_37 = FUNC_4(FUNC_13(VAR_27, VAR_32) - VAR_27);
 if (VAR_27 + FUNC_0(VAR_37) >= VAR_22->un_pager.vnp.vnp_size)
  VAR_37 = FUNC_4(FUNC_13(VAR_22->un_pager.vnp.vnp_size,
      VAR_4) - VAR_27);
 VAR_36 += VAR_37;
 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_37;
 FUNC_6(VAR_12);
 FUNC_5(VAR_13, VAR_36);

 VAR_33 = (VAR_24 != ((void*)0) && (VAR_24->mnt_kern_flag & VAR_3)
     != 0) ? VAR_2 : 0;
again:
 for (VAR_35 = 0; VAR_35 < VAR_16; VAR_35++)
  FUNC_15(VAR_15[VAR_35]);

 VAR_26 = -1;
 for (VAR_35 = 0; VAR_35 < VAR_16; VAR_35++) {
  VAR_21 = VAR_15[VAR_35];
  if (FUNC_14(VAR_21))
   continue;

  VAR_29 = FUNC_0(VAR_21->pindex);
  VAR_30 = FUNC_3(VAR_29 + VAR_4, VAR_22->un_pager.vnp.vnp_size);
  for (; VAR_29 < VAR_30; VAR_29 += VAR_31) {
   VAR_25 = VAR_19(VAR_14, VAR_29);
   if (VAR_25 == VAR_26)
    goto next_page;
   VAR_26 = VAR_25;

   VAR_31 = VAR_20(VAR_14, VAR_25);
   VAR_34 = FUNC_10(VAR_14, VAR_25, VAR_31, VAR_11->td_ucred,
       VAR_33, &VAR_23);
   if (VAR_34 != 0)
    goto end_pages;
   if (FUNC_2(&VAR_23->b_dep)) {
    if (VAR_10 ||
        !FUNC_14(VAR_21))
     VAR_23->b_flags |= VAR_1;

    VAR_23->b_flags &= ~VAR_0;
    FUNC_11(VAR_23);
   } else {
    FUNC_9(VAR_23);
   }
  }
  FUNC_1(1 ||
      FUNC_14(VAR_21) || VAR_35 == VAR_16 - 1,
      ("buf %d %p invalid", VAR_35, VAR_21));
  if (VAR_35 == VAR_16 - 1 && VAR_40) {
   if (!FUNC_17(VAR_21) &&
       !FUNC_14(VAR_21))
    FUNC_19(VAR_21, VAR_5);
  }
next_page:;
 }
end_pages:

 FUNC_7(VAR_22);
 VAR_39 = 0;
 for (VAR_35 = 0; VAR_35 < VAR_16; VAR_35++) {
  FUNC_18(VAR_15[VAR_35]);
  VAR_15[VAR_35] = FUNC_16(VAR_22, VAR_15[VAR_35]->pindex, VAR_6);
  if (!FUNC_14(VAR_15[VAR_35]))
   VAR_39 = 1;
 }
 FUNC_8(VAR_22);
 if (VAR_39 && VAR_34 == 0)
  goto again;
 return (VAR_34 != 0 ? VAR_8 : VAR_9);
}
