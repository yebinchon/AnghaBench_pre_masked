
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct vop_revoke_args {int a_flags; struct vnode* a_vp; } ;
struct vnode {struct cdev* v_rdev; } ;
struct devfs_dirent {struct vnode* de_vnode; } ;
struct cdev_priv {scalar_t__ cdp_inuse; size_t cdp_maxdirent; int cdp_flags; int cdp_c; struct devfs_dirent** cdp_dirents; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct cdev_priv*,int ) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,int ) ;
 struct cdev_priv* FUNC_4 (struct cdev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vnode*) ;
 scalar_t__ FUNC_11 (struct vnode*,int,int ) ;
 int FUNC_12 (struct vnode*) ;
 int FUNC_13 (struct vnode*) ;
 int FUNC_14 (struct vnode*,int) ;
 int FUNC_15 (struct vnode*) ;

__attribute__((used)) static int
FUNC_16(struct vop_revoke_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_vp, *VAR_11;
 struct cdev *VAR_12;
 struct cdev_priv *VAR_13;
 struct devfs_dirent *VAR_14;
 u_int VAR_15;

 FUNC_0((VAR_9->a_flags & VAR_4) != 0, ("devfs_revoke !REVOKEALL"));

 VAR_12 = VAR_10->v_rdev;
 VAR_13 = FUNC_4(VAR_12);

 FUNC_5();
 VAR_13->cdp_inuse++;
 FUNC_7();

 FUNC_13(VAR_10);
 FUNC_12(VAR_10);
 FUNC_10(VAR_10);

 FUNC_3(VAR_10,0);
 loop:
 for (;;) {
  FUNC_8(&VAR_8);
  FUNC_5();
  VAR_11 = ((void*)0);
  for (VAR_15 = 0; VAR_15 <= VAR_13->cdp_maxdirent; VAR_15++) {
   VAR_14 = VAR_13->cdp_dirents[VAR_15];
   if (VAR_14 == ((void*)0))
    continue;

   VAR_11 = VAR_14->de_vnode;
   if (VAR_11 != ((void*)0)) {
    FUNC_7();
    FUNC_2(VAR_11);
    FUNC_9(&VAR_8);
    if (FUNC_11(VAR_11, VAR_1 | VAR_2,
        VAR_7))
     goto loop;
    FUNC_13(VAR_11);
    FUNC_12(VAR_11);
    FUNC_10(VAR_11);
    FUNC_15(VAR_11);
    break;
   }
  }
  if (VAR_11 != ((void*)0)) {
   continue;
  }
  FUNC_7();
  FUNC_9(&VAR_8);
  break;
 }
 FUNC_5();
 VAR_13->cdp_inuse--;
 if (!(VAR_13->cdp_flags & VAR_0) && VAR_13->cdp_inuse == 0) {
  FUNC_1(&VAR_5, VAR_13, VAR_6);
  FUNC_7();
  FUNC_6(&VAR_13->cdp_c);
 } else
  FUNC_7();

 FUNC_14(VAR_10, VAR_1 | VAR_3);
 return (0);
}
