
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct componentname {int cn_flags; char* cn_nameptr; } ;
struct nameidata {int ni_lcf; struct vnode* ni_rootdir; int ni_pathlen; struct componentname ni_cnd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (struct nameidata*,int) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static int
FUNC_4(struct nameidata *VAR_8, struct vnode **VAR_9)
{
 struct componentname *VAR_10;

 VAR_10 = &VAR_8->ni_cnd;
 if ((VAR_8->ni_lcf & VAR_6) != 0) {




  return (VAR_2);
 }
 if ((VAR_10->cn_flags & VAR_0) != 0) {
  VAR_8->ni_lcf |= VAR_4;
  VAR_8->ni_lcf &= ~VAR_5;
  FUNC_2(VAR_8, 0);
 }
 while (*(VAR_10->cn_nameptr) == '/') {
  VAR_10->cn_nameptr++;
  VAR_8->ni_pathlen--;
 }
 *VAR_9 = VAR_8->ni_rootdir;
 FUNC_3(*VAR_9);
 return (0);
}
