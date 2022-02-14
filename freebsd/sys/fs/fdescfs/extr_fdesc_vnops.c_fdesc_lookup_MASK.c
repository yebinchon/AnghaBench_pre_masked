
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct vop_lookup_args {struct componentname* a_cnp; struct vnode* a_dvp; struct vnode** a_vpp; } ;
struct vnode {int v_iflag; } ;
struct thread {int dummy; } ;
struct file {int dummy; } ;
struct fdesc_get_ino_args {int fd_fd; struct thread* td; struct file* fp; scalar_t__ ix; int ftype; } ;
struct componentname {char* cn_nameptr; int cn_namelen; int cn_flags; scalar_t__ cn_nameiop; struct thread* cn_thread; } ;
struct TYPE_2__ {scalar_t__ fd_type; scalar_t__ fd_ix; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*) ;
 TYPE_1__* FUNC_2 (struct vnode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int,int *,struct file**) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*,int) ;
 int FUNC_8 (struct vnode*,int ,struct fdesc_get_ino_args*,int,struct vnode**) ;

__attribute__((used)) static int
FUNC_9(struct vop_lookup_args *VAR_14)
{
 struct vnode **VAR_15 = VAR_14->a_vpp;
 struct vnode *VAR_16 = VAR_14->a_dvp;
 struct componentname *VAR_17 = VAR_14->a_cnp;
 char *VAR_18 = VAR_17->cn_nameptr;
 struct thread *VAR_19 = VAR_17->cn_thread;
 struct file *VAR_20;
 struct fdesc_get_ino_args VAR_21;
 int VAR_22 = VAR_17->cn_namelen;
 u_int VAR_23, VAR_24;
 int VAR_25;
 struct vnode *VAR_26;

 if ((VAR_17->cn_flags & VAR_7) &&
     (VAR_17->cn_nameiop == VAR_0 || VAR_17->cn_nameiop == VAR_10)) {
  VAR_25 = VAR_3;
  goto bad;
 }

 if (VAR_17->cn_namelen == 1 && *VAR_18 == '.') {
  *VAR_15 = VAR_16;
  FUNC_1(VAR_16);
  return (0);
 }

 if (FUNC_2(VAR_16)->fd_type != VAR_6) {
  VAR_25 = VAR_2;
  goto bad;
 }

 VAR_23 = 0;

 if (*VAR_18 == '0' && VAR_22 != 1) {
  VAR_25 = VAR_1;
  goto bad;
 }
 while (VAR_22--) {
  if (*VAR_18 < '0' || *VAR_18 > '9') {
   VAR_25 = VAR_1;
   goto bad;
  }
  VAR_24 = 10 * VAR_23 + *VAR_18++ - '0';
  if (VAR_24 < VAR_23) {
   VAR_25 = VAR_1;
   goto bad;
  }
  VAR_23 = VAR_24;
 }




 if ((VAR_25 = FUNC_4(VAR_19, VAR_23, &VAR_12, &VAR_20)) != 0)
  goto bad;


 if (FUNC_2(VAR_16)->fd_ix == VAR_4 + VAR_23) {




  FUNC_6(VAR_16);
  FUNC_0(VAR_16, 0);
  FUNC_3(VAR_20, VAR_19);


  FUNC_7(VAR_16, VAR_9 | VAR_8);
  FUNC_5(VAR_16);
  VAR_26 = VAR_16;
  if ((VAR_16->v_iflag & VAR_11) != 0)
   VAR_25 = VAR_1;
 } else {
  VAR_21.ftype = VAR_5;
  VAR_21.fd_fd = VAR_23;
  VAR_21.ix = VAR_4 + VAR_23;
  VAR_21.fp = VAR_20;
  VAR_21.td = VAR_19;
  VAR_25 = FUNC_8(VAR_16, VAR_13, &VAR_21,
      VAR_8, &VAR_26);
 }

 if (VAR_25)
  goto bad;
 *VAR_15 = VAR_26;
 return (0);

bad:
 *VAR_15 = ((void*)0);
 return (VAR_25);
}
