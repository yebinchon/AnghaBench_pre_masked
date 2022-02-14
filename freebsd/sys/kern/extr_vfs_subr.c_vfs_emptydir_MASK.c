
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; TYPE_1__* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct iovec {int iov_len; struct dirent* iov_base; } ;
struct dirent {scalar_t__ d_type; int d_namlen; char* d_name; } ;
struct TYPE_2__ {int td_ucred; } ;


 int FUNC_0 (struct vnode*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dirent*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct vnode*,struct uio*,int ,int*,int *,int *) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (struct dirent*,int ) ;
 struct dirent* FUNC_4 (int,int ,int ) ;

int
FUNC_5(struct vnode *VAR_9)
{
 struct uio VAR_10;
 struct iovec VAR_11;
 struct dirent *VAR_12, *VAR_13, *VAR_14;
 int VAR_15, VAR_16;

 VAR_15 = 0;
 VAR_16 = 0;

 FUNC_0(VAR_9, "vfs_emptydir");

 VAR_12 = FUNC_4(sizeof(struct dirent), VAR_4, VAR_5);
 VAR_11.iov_base = VAR_12;
 VAR_11.iov_len = sizeof(struct dirent);

 VAR_10.uio_iov = &VAR_11;
 VAR_10.uio_iovcnt = 1;
 VAR_10.uio_offset = 0;
 VAR_10.uio_resid = sizeof(struct dirent);
 VAR_10.uio_segflg = VAR_7;
 VAR_10.uio_rw = VAR_6;
 VAR_10.uio_td = VAR_8;

 while (VAR_16 == 0 && VAR_15 == 0) {
  VAR_15 = FUNC_2(VAR_9, &VAR_10, VAR_8->td_ucred, &VAR_16,
      ((void*)0), ((void*)0));
  if (VAR_15 != 0)
   break;
  VAR_14 = (void *)((uint8_t *)VAR_12 +
      sizeof(struct dirent) - VAR_10.uio_resid);
  for (VAR_13 = VAR_12; VAR_13 < VAR_14;
       VAR_13 = (void *)((uint8_t *)VAR_13 + FUNC_1(VAR_13))) {
   if (VAR_13->d_type == VAR_2)
    continue;
   if (VAR_13->d_namlen == 0)
    continue;
   if (VAR_13->d_type != VAR_0 &&
       VAR_13->d_type != VAR_1) {
    VAR_15 = VAR_3;
    break;
   }
   if (VAR_13->d_namlen > 2) {
    VAR_15 = VAR_3;
    break;
   }
   if (VAR_13->d_namlen == 1 &&
       VAR_13->d_name[0] != '.') {
    VAR_15 = VAR_3;
    break;
   }
   if (VAR_13->d_namlen == 2 &&
       VAR_13->d_name[1] != '.') {
    VAR_15 = VAR_3;
    break;
   }
   VAR_10.uio_resid = sizeof(struct dirent);
  }
 }
 FUNC_3(VAR_12, VAR_4);
 return (VAR_15);
}
