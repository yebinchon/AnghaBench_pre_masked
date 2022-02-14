
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; } ;
struct thread {int td_proc; } ;
struct file {scalar_t__ f_type; struct fadvise_info* f_advice; struct vnode* f_vnode; TYPE_1__* f_ops; } ;
struct fadvise_info {int fa_advice; scalar_t__ fa_start; scalar_t__ fa_end; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {int fo_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct file*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;






 int FUNC_3 (struct vnode*,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct thread*,int,int *,struct file**) ;
 int FUNC_6 (struct fadvise_info*,int ) ;
 struct fadvise_info* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int ,struct file*) ;
 int FUNC_9 (int ,struct file*) ;
 int VAR_10 ;

int
FUNC_10(struct thread *VAR_11, int VAR_12, off_t VAR_13, off_t VAR_14,
    int VAR_15)
{
 struct fadvise_info *VAR_16, *VAR_17;
 struct file *VAR_18;
 struct vnode *VAR_19;
 off_t VAR_20;
 int VAR_21;

 if (VAR_13 < 0 || VAR_14 < 0 || VAR_13 > VAR_7 - VAR_14)
  return (VAR_2);
 FUNC_2(VAR_15);
 switch (VAR_15) {
 case 129:
 case 130:
 case 132:
  VAR_17 = FUNC_7(sizeof(*VAR_16), VAR_5, VAR_6);
  break;
 case 131:
 case 128:
 case 133:
  VAR_17 = ((void*)0);
  break;
 default:
  return (VAR_2);
 }

 FUNC_0(VAR_12);
 VAR_21 = FUNC_5(VAR_11, VAR_12, &VAR_9, &VAR_18);
 if (VAR_21 != 0)
  goto out;
 FUNC_1(VAR_11->td_proc, VAR_18);
 if ((VAR_18->f_ops->fo_flags & VAR_0) == 0) {
  VAR_21 = VAR_4;
  goto out;
 }
 if (VAR_18->f_type != VAR_1) {
  VAR_21 = VAR_3;
  goto out;
 }
 VAR_19 = VAR_18->f_vnode;
 if (VAR_19->v_type != VAR_8) {
  VAR_21 = VAR_3;
  goto out;
 }
 if (VAR_14 == 0)
  VAR_20 = VAR_7;
 else
  VAR_20 = VAR_13 + VAR_14 - 1;
 switch (VAR_15) {
 case 129:
 case 130:
 case 132:





  FUNC_8(VAR_10, VAR_18);
  VAR_16 = VAR_18->f_advice;
  if (VAR_16 != ((void*)0) && VAR_16->fa_advice == VAR_15 &&
      ((VAR_16->fa_start <= VAR_20 && VAR_16->fa_end >= VAR_13) ||
      (VAR_20 != VAR_7 && VAR_16->fa_start == VAR_20 + 1) ||
      (VAR_16->fa_end != VAR_7 && VAR_16->fa_end + 1 == VAR_13))) {
   if (VAR_13 < VAR_16->fa_start)
    VAR_16->fa_start = VAR_13;
   if (VAR_20 > VAR_16->fa_end)
    VAR_16->fa_end = VAR_20;
  } else {
   VAR_17->fa_advice = VAR_15;
   VAR_17->fa_start = VAR_13;
   VAR_17->fa_end = VAR_20;
   VAR_18->f_advice = VAR_17;
   VAR_17 = VAR_16;
  }
  FUNC_9(VAR_10, VAR_18);
  break;
 case 131:





  FUNC_8(VAR_10, VAR_18);
  VAR_16 = VAR_18->f_advice;
  if (VAR_16 != ((void*)0)) {
   if (VAR_13 <= VAR_16->fa_start && VAR_20 >= VAR_16->fa_end) {
    VAR_17 = VAR_16;
    VAR_18->f_advice = ((void*)0);
   } else if (VAR_13 <= VAR_16->fa_start &&
       VAR_20 >= VAR_16->fa_start)
    VAR_16->fa_start = VAR_20 + 1;
   else if (VAR_13 <= VAR_16->fa_end && VAR_20 >= VAR_16->fa_end)
    VAR_16->fa_end = VAR_13 - 1;
   else if (VAR_13 >= VAR_16->fa_start && VAR_20 <= VAR_16->fa_end) {
    VAR_17 = VAR_16;
    VAR_18->f_advice = ((void*)0);
   }
  }
  FUNC_9(VAR_10, VAR_18);
  break;
 case 128:
 case 133:
  VAR_21 = FUNC_3(VAR_19, VAR_13, VAR_20, VAR_15);
  break;
 }
out:
 if (VAR_18 != ((void*)0))
  FUNC_4(VAR_18, VAR_11);
 FUNC_6(VAR_17, VAR_5);
 return (VAR_21);
}
