
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ z_blksz; int z_id; int z_rangelock; TYPE_4__* z_zfsvfs; } ;
typedef TYPE_3__ znode_t ;
struct TYPE_20__ {int * z_os; } ;
typedef TYPE_4__ zfsvfs_t ;
typedef TYPE_5__* vm_page_t ;
typedef TYPE_6__* vm_object_t ;
typedef scalar_t__ uint_t ;
struct vnode {int dummy; } ;
typedef int off_t ;
typedef int objset_t ;
typedef int locked_range_t ;
struct TYPE_17__ {int vnp_size; } ;
struct TYPE_18__ {TYPE_1__ vnp; } ;
struct TYPE_22__ {TYPE_2__ un_pager; } ;
struct TYPE_21__ {int pindex; TYPE_6__* object; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (struct vnode*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int ,TYPE_5__**,int,int*,int*,int) ;
 int * FUNC_11 (int *,int,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_18(struct vnode *VAR_7, vm_page_t *VAR_8, int VAR_9, int *VAR_10,
    int *VAR_11)
{
 znode_t *VAR_12 = FUNC_5(VAR_7);
 zfsvfs_t *VAR_13 = VAR_12->z_zfsvfs;
 objset_t *VAR_14 = VAR_12->z_zfsvfs->z_os;
 locked_range_t *VAR_15;
 vm_object_t VAR_16;
 off_t VAR_17, VAR_18, VAR_19;
 uint_t VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;

 FUNC_7(VAR_13);
 FUNC_9(VAR_12);

 VAR_17 = FUNC_0(VAR_8[0]->pindex);
 VAR_18 = FUNC_0(VAR_8[VAR_9 - 1]->pindex + 1);





 for (;;) {
  VAR_20 = VAR_12->z_blksz;
  VAR_15 = FUNC_11(&VAR_12->z_rangelock, FUNC_14(VAR_17, VAR_20),
      FUNC_15(VAR_18, VAR_20) - FUNC_14(VAR_17, VAR_20), VAR_1);
  if (VAR_20 == VAR_12->z_blksz)
   break;
  FUNC_12(VAR_15);
 }

 VAR_16 = VAR_8[0]->object;
 FUNC_16(VAR_16);
 VAR_19 = VAR_16->un_pager.vnp.vnp_size;
 FUNC_17(VAR_16);
 if (FUNC_0(VAR_8[VAR_9 - 1]->pindex) >= VAR_19) {
  FUNC_12(VAR_15);
  FUNC_8(VAR_13);
  return (VAR_4);
 }

 VAR_21 = 0;
 if (VAR_10 != ((void*)0)) {
  VAR_21 = FUNC_2(VAR_17 - FUNC_14(VAR_17, VAR_20));
  VAR_21 = FUNC_1(*VAR_10, VAR_21);
 }

 VAR_22 = 0;
 if (VAR_11 != ((void*)0)) {
  VAR_22 = FUNC_2(FUNC_15(VAR_18, VAR_20) - VAR_18);
  if (VAR_18 + FUNC_0(VAR_22) >= VAR_19)
   VAR_22 = FUNC_2(FUNC_13(VAR_19) - VAR_18);
  VAR_22 = FUNC_1(*VAR_11, VAR_22);
 }







 VAR_23 = FUNC_10(VAR_14, VAR_12->z_id, VAR_8, VAR_9, &VAR_21, &VAR_22,
     FUNC_1(VAR_18, VAR_19) - (VAR_18 - VAR_0));

 FUNC_12(VAR_15);
 FUNC_6(VAR_13, VAR_12);
 FUNC_8(VAR_13);

 if (VAR_23 != 0)
  return (VAR_5);

 FUNC_4(VAR_2);
 FUNC_3(VAR_3, VAR_9 + VAR_21 + VAR_22);
 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_21;
 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_22;
 return (VAR_6);
}
