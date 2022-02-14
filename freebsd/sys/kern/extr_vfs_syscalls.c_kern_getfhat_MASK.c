
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vnode {TYPE_2__* v_mount; } ;
struct thread {int dummy; } ;
struct nameidata {struct vnode* ni_vp; } ;
struct TYPE_10__ {int fh_fid; int fh_fsid; } ;
typedef TYPE_3__ fhandle_t ;
typedef int fh ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_8__ {int f_fsid; } ;
struct TYPE_9__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nameidata*,int ,int,int,char const*,int,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct vnode*,int *) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (struct vnode*) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_10, int VAR_11, int VAR_12, const char *VAR_13,
    enum uio_seg VAR_14, fhandle_t *VAR_15)
{
 struct nameidata VAR_16;
 fhandle_t VAR_17;
 struct vnode *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_6(VAR_10, VAR_9);
 if (VAR_19 != 0)
  return (VAR_19);
 FUNC_1(&VAR_16, VAR_6, ((VAR_11 & VAR_1) != 0 ? VAR_8 :
     VAR_4) | ((VAR_11 & VAR_0) != 0 ? VAR_3 : 0) | VAR_5 |
     VAR_2, VAR_14, VAR_13, VAR_12, VAR_10);
 VAR_19 = FUNC_5(&VAR_16);
 if (VAR_19 != 0)
  return (VAR_19);
 FUNC_0(&VAR_16, VAR_7);
 VAR_18 = VAR_16.ni_vp;
 FUNC_3(&VAR_17, sizeof(VAR_17));
 VAR_17.fh_fsid = VAR_18->v_mount->mnt_stat.f_fsid;
 VAR_19 = FUNC_2(VAR_18, &VAR_17.fh_fid);
 FUNC_7(VAR_18);
 if (VAR_19 == 0)
  VAR_19 = FUNC_4(&VAR_17, VAR_15, sizeof (VAR_17));
 return (VAR_19);
}
