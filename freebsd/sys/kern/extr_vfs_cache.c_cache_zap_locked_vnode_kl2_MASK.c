
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct rwlock {int dummy; } ;
struct namecache {int nc_flag; struct vnode* nc_vp; struct vnode* nc_dvp; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct rwlock* FUNC_1 (struct namecache*) ;
 struct mtx* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct mtx**,struct mtx**) ;
 int FUNC_5 (struct namecache*,int) ;
 int FUNC_6 (struct namecache*,struct vnode*) ;
 int FUNC_7 (struct mtx*) ;
 int FUNC_8 (struct mtx*) ;
 int FUNC_9 (struct mtx*) ;
 int FUNC_10 (struct rwlock*) ;
 int FUNC_11 (struct rwlock*) ;

__attribute__((used)) static bool
FUNC_12(struct namecache *VAR_1, struct vnode *VAR_2,
    struct mtx **VAR_3)
{
 struct mtx *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct rwlock *VAR_8;

 FUNC_0(VAR_2 == VAR_1->nc_dvp || VAR_2 == VAR_1->nc_vp);
 FUNC_3(VAR_2);

 if (VAR_1->nc_flag & VAR_0) {
  if (*VAR_3 != ((void*)0)) {
   FUNC_9(*VAR_3);
   *VAR_3 = ((void*)0);
  }
  FUNC_6(VAR_1, VAR_2);
  return (1);
 }

 VAR_4 = FUNC_2(VAR_2);
 VAR_8 = FUNC_1(VAR_1);
 VAR_5 = FUNC_2(VAR_1->nc_dvp);
 VAR_6 = FUNC_2(VAR_1->nc_vp);

 if (*VAR_3 == VAR_5 || *VAR_3 == VAR_6) {
  VAR_7 = *VAR_3;
  *VAR_3 = ((void*)0);
 } else {
  if (*VAR_3 != ((void*)0)) {
   FUNC_9(*VAR_3);
   *VAR_3 = ((void*)0);
  }
  FUNC_4(&VAR_5, &VAR_6);
  if (VAR_5 == VAR_4) {
   FUNC_7(VAR_6);
   VAR_7 = VAR_6;
  } else {
   if (!FUNC_8(VAR_5))
    goto out_relock;
   VAR_7 = VAR_5;
  }
 }
 FUNC_10(VAR_8);
 FUNC_5(VAR_1, 0);
 FUNC_11(VAR_8);
 if (VAR_7 != ((void*)0))
  FUNC_9(VAR_7);
 return (1);

out_relock:
 FUNC_9(VAR_6);
 FUNC_7(VAR_5);
 FUNC_7(VAR_6);
 FUNC_0(*VAR_3 == ((void*)0));
 *VAR_3 = VAR_5;
 return (0);
}
