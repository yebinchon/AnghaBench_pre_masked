
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vnode {scalar_t__ v_type; struct namecache* v_cache_dd; } ;
struct rwlock {int dummy; } ;
struct namecache {int nc_flag; int nc_vp; struct vnode* nc_dvp; } ;
struct celockstate {int ** vlp; } ;


 struct rwlock* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct rwlock* FUNC_2 (struct namecache*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct celockstate*,struct rwlock*,struct rwlock*) ;
 int FUNC_5 (struct celockstate*,struct vnode*,struct vnode*) ;
 scalar_t__ FUNC_6 (struct celockstate*,int ) ;
 int FUNC_7 (struct celockstate*) ;

__attribute__((used)) static void
FUNC_8(struct celockstate *VAR_3, struct vnode *VAR_4, struct vnode *VAR_5,
    uint32_t VAR_6)
{
 struct namecache *VAR_7;
 struct rwlock *VAR_8[2];

 VAR_8[0] = FUNC_0(VAR_6);
 for (;;) {
  VAR_8[1] = ((void*)0);
  FUNC_5(VAR_3, VAR_4, VAR_5);
  if (VAR_5 == ((void*)0) || VAR_5->v_type != VAR_2)
   break;
  VAR_7 = VAR_5->v_cache_dd;
  if (VAR_7 == ((void*)0))
   break;
  if ((VAR_7->nc_flag & VAR_0) == 0)
   break;
  FUNC_1(VAR_7->nc_dvp == VAR_5);
  VAR_8[1] = FUNC_2(VAR_7);
  if (VAR_7->nc_flag & VAR_1)
   break;
  if (FUNC_6(VAR_3, VAR_7->nc_vp))
   break;




  if (VAR_7 == VAR_5->v_cache_dd &&
      (VAR_7->nc_flag & VAR_0) != 0 &&
      VAR_8[1] == FUNC_2(VAR_7) &&
      FUNC_3(VAR_7->nc_vp) == VAR_3->vlp[2])
   break;
  FUNC_7(VAR_3);
  VAR_3->vlp[0] = ((void*)0);
  VAR_3->vlp[1] = ((void*)0);
  VAR_3->vlp[2] = ((void*)0);
 }
 FUNC_4(VAR_3, VAR_8[0], VAR_8[1]);
}
