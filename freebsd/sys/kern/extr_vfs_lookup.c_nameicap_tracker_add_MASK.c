
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; } ;
struct nameidata {int ni_lcf; int ni_cap_tracker; struct vnode* ni_beneath_latch; } ;
struct nameicap_tracker {struct vnode* dp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct nameicap_tracker*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct nameicap_tracker* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static void
FUNC_4(struct nameidata *VAR_8, struct vnode *VAR_9)
{
 struct nameicap_tracker *VAR_10;

 if ((VAR_8->ni_lcf & VAR_3) == 0 || VAR_9->v_type != VAR_5)
  return;
 if ((VAR_8->ni_lcf & (VAR_1 | VAR_2)) ==
     VAR_1) {
  FUNC_0((VAR_8->ni_lcf & VAR_4) != 0);
  if (VAR_9 != VAR_8->ni_beneath_latch)
   return;
  VAR_8->ni_lcf |= VAR_2;
 }
 VAR_10 = FUNC_2(VAR_7, VAR_0);
 FUNC_3(VAR_9);
 VAR_10->dp = VAR_9;
 FUNC_1(&VAR_8->ni_cap_tracker, VAR_10, VAR_6);
}
