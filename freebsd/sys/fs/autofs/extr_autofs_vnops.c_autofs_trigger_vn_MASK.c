
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_iflag; int * v_mountedhere; struct autofs_node* v_data; } ;
struct autofs_node {int an_cached; } ;
struct TYPE_2__ {int sc_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int,struct vnode**) ;
 int VAR_2 ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (struct autofs_node*,char const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vnode*,int) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;

__attribute__((used)) static int
FUNC_11(struct vnode *VAR_4, const char *VAR_5, int VAR_6,
    struct vnode **VAR_7)
{
 struct autofs_node *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_4->v_data;







 VAR_10 = FUNC_3(VAR_4);
 FUNC_9(VAR_4);
 FUNC_4(VAR_4, 0);

 FUNC_6(&VAR_3->sc_lock);




 if (VAR_4->v_mountedhere != ((void*)0)) {
  VAR_9 = 0;
  goto mounted;
 }

 VAR_9 = FUNC_5(VAR_8, VAR_5, VAR_6);
mounted:
 FUNC_7(&VAR_3->sc_lock);
 FUNC_8(VAR_4, VAR_10 | VAR_1);
 FUNC_10(VAR_4);
 if ((VAR_4->v_iflag & VAR_2) != 0) {
  FUNC_0("VI_DOOMED");
  return (VAR_0);
 }

 if (VAR_9 != 0)
  return (VAR_9);

 if (VAR_4->v_mountedhere == ((void*)0)) {
  *VAR_7 = ((void*)0);
  return (0);
 } else {






  VAR_8->an_cached = 0;
 }

 VAR_9 = FUNC_2(VAR_4->v_mountedhere, VAR_10, VAR_7);
 if (VAR_9 != 0) {
  FUNC_1("VFS_ROOT() failed with error %d", VAR_9);
  return (VAR_9);
 }

 return (0);
}
