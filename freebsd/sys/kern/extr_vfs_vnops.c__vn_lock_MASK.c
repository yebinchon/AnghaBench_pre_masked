
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_holdcnt; int v_iflag; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,struct vnode*,char*) ;
 int FUNC_2 (struct vnode*,int,char*,int) ;
 int FUNC_3 (struct vnode*,int ) ;

int
FUNC_4(struct vnode *VAR_5, int VAR_6, char *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_1((VAR_6 & VAR_3) != 0, VAR_5,
     ("vn_lock: no locktype"));
 FUNC_1(VAR_5->v_holdcnt != 0, VAR_5, ("vn_lock: zero hold count"));
retry:
 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_6 &= ~VAR_1;
 FUNC_0((VAR_6 & VAR_2) == 0 || VAR_9 == 0,
     ("vn_lock: error %d incompatible with flags %#x", VAR_9, VAR_6));

 if ((VAR_6 & VAR_2) == 0) {
  if (VAR_9 == 0 && (VAR_5->v_iflag & VAR_4) != 0) {
   FUNC_3(VAR_5, 0);
   VAR_9 = VAR_0;
  }
 } else if (VAR_9 != 0)
  goto retry;
 return (VAR_9);
}
