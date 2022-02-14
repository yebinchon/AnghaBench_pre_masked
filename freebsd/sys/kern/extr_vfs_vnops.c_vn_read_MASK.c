
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct uio {scalar_t__ uio_offset; struct thread* uio_td; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct file {int f_flag; scalar_t__ f_nextoff; int f_cred; struct vnode* f_vnode; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_1 (struct vnode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct vnode*,struct uio*,int,int ) ;
 int FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct file*,struct uio*) ;
 int FUNC_5 (struct ucred*,int ,struct vnode*) ;
 int FUNC_6 (struct uio*,struct file*) ;
 int FUNC_7 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_8, struct uio *VAR_9, struct ucred *VAR_10, int VAR_11,
    struct thread *VAR_12)
{
 struct vnode *VAR_13;
 off_t VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;

 FUNC_0(VAR_9->uio_td == VAR_12, ("uio_td %p is not td %p",
     VAR_9->uio_td, VAR_12));
 FUNC_0(VAR_11 & VAR_1, ("No FOF_OFFSET"));
 VAR_13 = VAR_8->f_vnode;
 VAR_16 = 0;
 if (VAR_8->f_flag & VAR_0)
  VAR_16 |= VAR_3;
 if (VAR_8->f_flag & VAR_6)
  VAR_16 |= VAR_2;
 VAR_17 = FUNC_4(VAR_8, VAR_9);
 FUNC_7(VAR_13, VAR_5 | VAR_4);

 switch (VAR_17) {
 case 130:
 case 128:
 case 131:
  VAR_16 |= FUNC_6(VAR_9, VAR_8);
  break;
 case 129:

  break;
 }
 VAR_14 = VAR_9->uio_offset;





  VAR_15 = FUNC_2(VAR_13, VAR_9, VAR_16, VAR_8->f_cred);
 VAR_8->f_nextoff = VAR_9->uio_offset;
 FUNC_3(VAR_13, 0);
 if (VAR_15 == 0 && VAR_17 == 131 &&
     VAR_14 != VAR_9->uio_offset)





  VAR_15 = FUNC_1(VAR_13, VAR_14, VAR_9->uio_offset - 1,
      VAR_7);
 return (VAR_15);
}
