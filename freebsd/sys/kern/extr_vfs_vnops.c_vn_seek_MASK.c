
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct vattr {scalar_t__ va_size; } ;
struct ucred {int dummy; } ;
struct TYPE_2__ {scalar_t__ tdu_off; } ;
struct thread {TYPE_1__ td_uretoff; struct ucred* td_ucred; } ;
struct file {struct vnode* f_vnode; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;


 scalar_t__ VAR_10 ;
 int FUNC_0 (struct vnode*,int ) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (struct file*,int ,scalar_t__*,struct ucred*,struct thread*) ;
 scalar_t__ FUNC_4 (struct file*,int ) ;
 int FUNC_5 (struct file*,scalar_t__,int ) ;
 int FUNC_6 (struct vnode*,int) ;

int
FUNC_7(struct file *VAR_11, off_t VAR_12, int VAR_13, struct thread *VAR_14)
{
 struct ucred *VAR_15;
 struct vnode *VAR_16;
 struct vattr VAR_17;
 off_t VAR_18, VAR_19;
 int VAR_20, VAR_21;

 VAR_15 = VAR_14->td_ucred;
 VAR_16 = VAR_11->f_vnode;
 VAR_18 = FUNC_4(VAR_11, 0);
 VAR_21 = (VAR_16->v_type != VAR_10);
 VAR_20 = 0;
 switch (VAR_13) {
 case 132:
  if (VAR_21 &&
      (VAR_18 < 0 ||
      (VAR_12 > 0 && VAR_18 > VAR_9 - VAR_12))) {
   VAR_20 = VAR_3;
   break;
  }
  VAR_12 += VAR_18;
  break;
 case 130:
  FUNC_6(VAR_16, VAR_8 | VAR_7);
  VAR_20 = FUNC_1(VAR_16, &VAR_17, VAR_15);
  FUNC_2(VAR_16, 0);
  if (VAR_20)
   break;






  if (VAR_17.va_size == 0 && VAR_16->v_type == VAR_10 &&
      FUNC_3(VAR_11, VAR_0, &VAR_19, VAR_15, VAR_14) == 0)
   VAR_17.va_size = VAR_19;
  if (VAR_21 &&
      (VAR_17.va_size > VAR_9 ||
      (VAR_12 > 0 && VAR_17.va_size > VAR_9 - VAR_12))) {
   VAR_20 = VAR_3;
   break;
  }
  VAR_12 += VAR_17.va_size;
  break;
 case 131:
  break;
 case 129:
  VAR_20 = FUNC_3(VAR_11, VAR_4, &VAR_12, VAR_15, VAR_14);
  if (VAR_20 == VAR_2)
   VAR_20 = VAR_1;
  break;
 case 128:
  VAR_20 = FUNC_3(VAR_11, VAR_5, &VAR_12, VAR_15, VAR_14);
  if (VAR_20 == VAR_2)
   VAR_20 = VAR_1;
  break;
 default:
  VAR_20 = VAR_1;
 }
 if (VAR_20 == 0 && VAR_21 && VAR_12 < 0)
  VAR_20 = VAR_1;
 if (VAR_20 != 0)
  goto drop;
 FUNC_0(VAR_16, 0);
 VAR_14->td_uretoff.tdu_off = VAR_12;
drop:
 FUNC_5(VAR_11, VAR_12, VAR_20 != 0 ? VAR_6 : 0);
 return (VAR_20);
}
