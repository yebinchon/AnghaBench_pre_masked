
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode {struct namecache* v_cache_dd; } ;
struct rwlock {int dummy; } ;
struct namecache {int nc_flag; int nc_vp; struct vnode* nc_dvp; } ;
struct celockstate {int ** vlp; } ;


 struct rwlock* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rwlock* FUNC_2 (struct namecache*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct celockstate*,struct rwlock*,struct rwlock*) ;
 int FUNC_5 (struct celockstate*,struct vnode*,struct vnode*) ;
 scalar_t__ FUNC_6 (struct celockstate*,int ) ;
 int FUNC_7 (struct celockstate*) ;

__attribute__((used)) static void
FUNC_8(struct celockstate *VAR_2, struct vnode *VAR_3, struct vnode *VAR_4,
    uint32_t VAR_5)
{
 struct namecache *VAR_6;
 struct rwlock *VAR_7[2];

 VAR_7[0] = FUNC_0(VAR_5);
 for (;;) {
  VAR_7[1] = ((void*)0);
  FUNC_5(VAR_2, VAR_3, VAR_4);
  VAR_6 = VAR_3->v_cache_dd;
  if (VAR_6 == ((void*)0))
   break;
  if ((VAR_6->nc_flag & VAR_0) == 0)
   break;
  FUNC_1(VAR_6->nc_dvp == VAR_3);
  VAR_7[1] = FUNC_2(VAR_6);
  if (VAR_6->nc_flag & VAR_1)
   break;
  if (FUNC_6(VAR_2, VAR_6->nc_vp))
   break;
  if (VAR_6 == VAR_3->v_cache_dd &&
      (VAR_6->nc_flag & VAR_0) != 0 &&
      VAR_7[1] == FUNC_2(VAR_6) &&
      FUNC_3(VAR_6->nc_vp) == VAR_2->vlp[2])
   break;
  FUNC_7(VAR_2);
  VAR_2->vlp[0] = ((void*)0);
  VAR_2->vlp[1] = ((void*)0);
  VAR_2->vlp[2] = ((void*)0);
 }
 FUNC_4(VAR_2, VAR_7[0], VAR_7[1]);
}
