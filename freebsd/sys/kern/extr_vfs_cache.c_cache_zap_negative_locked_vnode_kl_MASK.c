
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct rwlock {int dummy; } ;
struct namecache {int nc_flag; struct vnode* nc_dvp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct rwlock* FUNC_1 (struct namecache*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct namecache*,int) ;
 int FUNC_4 (struct rwlock*) ;
 int FUNC_5 (struct rwlock*) ;

__attribute__((used)) static void
FUNC_6(struct namecache *VAR_1, struct vnode *VAR_2)
{
 struct rwlock *VAR_3;

 FUNC_0(VAR_1->nc_dvp == VAR_2);
 FUNC_0(VAR_1->nc_flag & VAR_0);
 FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_1);
 FUNC_4(VAR_3);
 FUNC_3(VAR_1, 0);
 FUNC_5(VAR_3);
}
