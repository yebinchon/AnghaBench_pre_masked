
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; struct mount* v_mount; } ;
struct uio {scalar_t__ uio_offset; struct thread* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct mount {int mnt_flag; } ;
struct file {int f_flag; scalar_t__ f_nextoff; int f_cred; struct vnode* f_vnode; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;




 scalar_t__ VAR_16 ;
 int FUNC_2 (struct vnode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*,struct uio*,int,int ) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_5 () ;
 int FUNC_6 (struct file*,struct uio*) ;
 int FUNC_7 (struct ucred*,int ,struct vnode*) ;
 int FUNC_8 (struct uio*,struct file*) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_12(struct file *VAR_19, struct uio *VAR_20, struct ucred *VAR_21, int VAR_22,
    struct thread *VAR_23)
{
 struct vnode *VAR_24;
 struct mount *VAR_25;
 off_t VAR_26;
 int VAR_27, VAR_28, VAR_29;
 int VAR_30;

 FUNC_0(VAR_20->uio_td == VAR_23, ("uio_td %p is not td %p",
     VAR_20->uio_td, VAR_23));
 FUNC_0(VAR_22 & VAR_1, ("No FOF_OFFSET"));
 VAR_24 = VAR_19->f_vnode;
 if (VAR_24->v_type == VAR_17)
  FUNC_5();
 VAR_28 = VAR_6;
 if (VAR_24->v_type == VAR_17 && (VAR_19->f_flag & VAR_11))
  VAR_28 |= VAR_2;
 if (VAR_19->f_flag & VAR_0)
  VAR_28 |= VAR_4;
 if (VAR_19->f_flag & VAR_12)
  VAR_28 |= VAR_3;
 if ((VAR_19->f_flag & VAR_13) ||
     (VAR_24->v_mount && (VAR_24->v_mount->mnt_flag & VAR_10)))
  VAR_28 |= VAR_5;
 VAR_25 = ((void*)0);
 if (VAR_24->v_type != VAR_16 &&
     (VAR_27 = FUNC_11(VAR_24, &VAR_25, VAR_18 | VAR_14)) != 0)
  goto unlock;

 VAR_30 = FUNC_6(VAR_19, VAR_20);

 if (FUNC_1(VAR_25) ||
     (VAR_25 == ((void*)0) && FUNC_1(VAR_24->v_mount))) {
  VAR_29 = VAR_9;
 } else {
  VAR_29 = VAR_7;
 }

 FUNC_10(VAR_24, VAR_29 | VAR_8);
 switch (VAR_30) {
 case 130:
 case 128:
 case 131:
  VAR_28 |= FUNC_8(VAR_20, VAR_19);
  break;
 case 129:

  break;
 }
 VAR_26 = VAR_20->uio_offset;





  VAR_27 = FUNC_4(VAR_24, VAR_20, VAR_28, VAR_19->f_cred);
 VAR_19->f_nextoff = VAR_20->uio_offset;
 FUNC_3(VAR_24, 0);
 if (VAR_24->v_type != VAR_16)
  FUNC_9(VAR_25);
 if (VAR_27 == 0 && VAR_30 == 131 &&
     VAR_26 != VAR_20->uio_offset)





  VAR_27 = FUNC_2(VAR_24, VAR_26, VAR_20->uio_offset - 1,
      VAR_15);
unlock:
 return (VAR_27);
}
