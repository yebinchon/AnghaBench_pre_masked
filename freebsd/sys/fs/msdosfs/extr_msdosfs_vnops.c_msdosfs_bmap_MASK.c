
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct vop_bmap_args {int* a_bnp; int* a_runp; int* a_runb; scalar_t__ a_bn; int ** a_bop; struct vnode* a_vp; } ;
struct vnode {struct mount* v_mount; } ;
struct msdosfsmount {scalar_t__ pm_maxcluster; TYPE_1__* pm_devvp; } ;
struct TYPE_4__ {int f_iosize; } ;
struct mount {int mnt_iosize_max; TYPE_2__ mnt_stat; } ;
struct fatcache {int dummy; } ;
struct denode {struct fatcache* de_fc; struct msdosfsmount* de_pmp; } ;
typedef int daddr_t ;
struct TYPE_3__ {int v_bufobj; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct denode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct msdosfsmount*,int) ;
 int FUNC_2 (struct denode*,scalar_t__,int*,int *,int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct vop_bmap_args *VAR_2)
{
 struct fatcache VAR_3;
 struct denode *VAR_4;
 struct mount *VAR_5;
 struct msdosfsmount *VAR_6;
 struct vnode *VAR_7;
 daddr_t VAR_8;
 u_long VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_7 = VAR_2->a_vp;
 VAR_4 = FUNC_0(VAR_7);
 VAR_6 = VAR_4->de_pmp;
 if (VAR_2->a_bop != ((void*)0))
  *VAR_2->a_bop = &VAR_6->pm_devvp->v_bufobj;
 if (VAR_2->a_bnp == ((void*)0))
  return (0);
 if (VAR_2->a_runp != ((void*)0))
  *VAR_2->a_runp = 0;
 if (VAR_2->a_runb != ((void*)0))
  *VAR_2->a_runb = 0;
 VAR_9 = VAR_2->a_bn;
 if (VAR_9 != VAR_2->a_bn)
  return (VAR_0);
 VAR_11 = FUNC_2(VAR_4, VAR_9, VAR_2->a_bnp, ((void*)0), ((void*)0));
 if (VAR_11 != 0 || (VAR_2->a_runp == ((void*)0) && VAR_2->a_runb == ((void*)0)))
  return (VAR_11);
 VAR_3 = VAR_4->de_fc[VAR_1];

 VAR_5 = VAR_7->v_mount;
 VAR_12 = VAR_5->mnt_iosize_max / VAR_5->mnt_stat.f_iosize;
 VAR_10 = FUNC_1(VAR_6, 1);
 if (VAR_2->a_runp != ((void*)0)) {
  VAR_13 = FUNC_3(VAR_12 - 1, VAR_6->pm_maxcluster - VAR_9);
  for (VAR_14 = 1; VAR_14 <= VAR_13; VAR_14++) {
   if (FUNC_2(VAR_4, VAR_9 + VAR_14, &VAR_8, ((void*)0), ((void*)0)) != 0 ||
       VAR_8 != *VAR_2->a_bnp + VAR_14 * VAR_10)
    break;
  }
  *VAR_2->a_runp = VAR_14 - 1;
 }
 if (VAR_2->a_runb != ((void*)0)) {
  VAR_13 = FUNC_3(VAR_12 - 1, VAR_9);
  for (VAR_14 = 1; VAR_14 < VAR_13; VAR_14++) {
   if (FUNC_2(VAR_4, VAR_9 - VAR_14, &VAR_8, ((void*)0), ((void*)0)) != 0 ||
       VAR_8 != *VAR_2->a_bnp - VAR_14 * VAR_10)
    break;
  }
  *VAR_2->a_runb = VAR_14 - 1;
 }
 VAR_4->de_fc[VAR_1] = VAR_3;
 return (0);
}
