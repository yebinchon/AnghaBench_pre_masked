
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct vop_readdir_args {scalar_t__* a_ncookies; TYPE_5__* a_vp; struct uio* a_uio; } ;
struct uio {int uio_offset; int uio_resid; TYPE_2__* uio_td; } ;
struct filedesc {int fd_nfiles; TYPE_3__* fd_ofiles; } ;
struct fdescmount {int flags; } ;
struct dirent {int d_namlen; int d_reclen; int d_off; int d_fileno; int d_type; int d_name; } ;
typedef int caddr_t ;
struct TYPE_10__ {int v_mount; } ;
struct TYPE_9__ {scalar_t__ fd_type; } ;
struct TYPE_8__ {int * fde_file; } ;
struct TYPE_7__ {TYPE_1__* td_proc; } ;
struct TYPE_6__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct fdescmount* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct dirent*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct dirent*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_10(struct vop_readdir_args *VAR_9)
{
 struct fdescmount *VAR_10;
 struct uio *VAR_11 = VAR_9->a_uio;
 struct filedesc *VAR_12;
 struct dirent VAR_13;
 struct dirent *VAR_14 = &VAR_13;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 if (FUNC_3(VAR_9->a_vp)->fd_type != VAR_7)
  FUNC_7("fdesc_readdir: not dir");

 VAR_10 = FUNC_2(VAR_9->a_vp->v_mount);
 if (VAR_9->a_ncookies != ((void*)0))
  *VAR_9->a_ncookies = 0;

 VAR_17 = (int)VAR_11->uio_offset;
 if (VAR_17 != VAR_11->uio_offset || VAR_17 < 0 || (u_int)VAR_17 % VAR_8 != 0 ||
     VAR_11->uio_resid < VAR_8)
  return (VAR_3);
 VAR_16 = (u_int)VAR_17 / VAR_8;
 VAR_12 = VAR_11->uio_td->td_proc->p_fd;
 VAR_15 = 0;

 VAR_18 = VAR_16 - 2;

 FUNC_0(VAR_12);
 while (VAR_16 < VAR_12->fd_nfiles + 2 && VAR_11->uio_resid >= VAR_8) {
  FUNC_5((caddr_t)VAR_14, VAR_8);
  switch (VAR_16) {
  case 0:
  case 1:
   VAR_14->d_fileno = VAR_16 + VAR_5;
   VAR_14->d_namlen = VAR_16 + 1;
   VAR_14->d_reclen = VAR_8;
   FUNC_4("..", VAR_14->d_name, VAR_14->d_namlen);
   VAR_14->d_type = VAR_1;
   FUNC_6(VAR_14);
   break;
  default:
   if (VAR_12->fd_ofiles[VAR_18].fde_file == ((void*)0))
    break;
   VAR_14->d_namlen = FUNC_8(VAR_14->d_name, "%d", VAR_18);
   VAR_14->d_reclen = VAR_8;
   VAR_14->d_type = (VAR_10->flags & VAR_6) == 0 ?
       VAR_0 : VAR_2;
   VAR_14->d_fileno = VAR_16 + VAR_4;
   FUNC_6(VAR_14);
   break;
  }

  VAR_14->d_off = VAR_8 * (VAR_16 + 1);
  if (VAR_14->d_namlen != 0) {



   FUNC_1(VAR_12);
   VAR_15 = FUNC_9(VAR_14, VAR_8, VAR_11);
   if (VAR_15)
    goto done;
   FUNC_0(VAR_12);
  }
  VAR_16++;
  VAR_18++;
 }
 FUNC_1(VAR_12);

done:
 VAR_11->uio_offset = VAR_16 * VAR_8;
 return (VAR_15);
}
