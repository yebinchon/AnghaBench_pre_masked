
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_offset; int uio_rw; int uio_resid; int uio_td; int uio_segflg; struct iovec* uio_iov; } ;
struct mount {int dummy; } ;
struct iovec {int dummy; } ;
struct beri_vtblk_softc {int cred; struct vnode* vnode; } ;
typedef int auio ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct vnode*,struct uio*,int ,int ) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct vnode*,struct uio*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct uio*,int) ;
 int VAR_6 ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (struct vnode*,struct mount**,int ) ;

__attribute__((used)) static int
FUNC_8(struct beri_vtblk_softc *VAR_7, struct iovec *VAR_8,
 int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct vnode *VAR_13;
 struct mount *VAR_14;
 struct uio VAR_15;
 int VAR_16;

 FUNC_4(&VAR_15, sizeof(VAR_15));

 VAR_13 = VAR_7->vnode;

 FUNC_0(VAR_13 != ((void*)0), ("file not opened"));

 VAR_15.uio_iov = VAR_8;
 VAR_15.uio_iovcnt = VAR_9;
 VAR_15.uio_offset = VAR_10;
 VAR_15.uio_segflg = VAR_4;
 VAR_15.uio_rw = VAR_11;
 VAR_15.uio_resid = VAR_12;
 VAR_15.uio_td = VAR_6;

 if (VAR_11 == 0) {
  FUNC_6(VAR_13, VAR_2 | VAR_3);
  VAR_16 = FUNC_1(VAR_13, &VAR_15, VAR_0, VAR_7->cred);
  FUNC_2(VAR_13, 0);
 } else {
  (void) FUNC_7(VAR_13, &VAR_14, VAR_5);
  FUNC_6(VAR_13, VAR_2 | VAR_3);
  VAR_16 = FUNC_3(VAR_13, &VAR_15, VAR_1, VAR_7->cred);
  FUNC_2(VAR_13, 0);
  FUNC_5(VAR_14);
 }

 return (VAR_16);
}
