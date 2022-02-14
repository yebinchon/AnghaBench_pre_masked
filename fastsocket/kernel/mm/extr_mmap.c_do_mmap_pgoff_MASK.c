
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mm_struct {scalar_t__ map_count; unsigned int def_flags; scalar_t__ locked_vm; } ;
struct inode {int dummy; } ;
struct TYPE_12__ {TYPE_4__* mnt; TYPE_3__* dentry; } ;
struct file {int f_mode; TYPE_6__* f_op; TYPE_5__ f_path; } ;
struct TYPE_14__ {int personality; TYPE_2__* signal; struct mm_struct* mm; } ;
struct TYPE_13__ {int mmap; } ;
struct TYPE_11__ {int mnt_flags; } ;
struct TYPE_10__ {struct inode* d_inode; } ;
struct TYPE_9__ {TYPE_1__* rlim; } ;
struct TYPE_8__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct inode*) ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;


 unsigned long VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_7__* VAR_28 ;
 unsigned long FUNC_6 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int FUNC_7 (struct inode*) ;
 unsigned long FUNC_8 (struct file*,unsigned long,unsigned long,unsigned long,unsigned int,unsigned long) ;
 unsigned long FUNC_9 (unsigned long) ;
 int FUNC_10 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ VAR_29 ;

unsigned long FUNC_11(struct file *VAR_30, unsigned long VAR_31,
   unsigned long VAR_32, unsigned long VAR_33,
   unsigned long VAR_34, unsigned long VAR_35)
{
 struct mm_struct * VAR_36 = VAR_28->mm;
 struct inode *VAR_37;
 unsigned int VAR_38;
 int VAR_39;
 unsigned long VAR_40 = VAR_33;







 if ((VAR_33 & VAR_17) && (VAR_28->personality & VAR_19))
  if (!(VAR_30 && (VAR_30->f_path.mnt->mnt_flags & VAR_13)))
   VAR_33 |= VAR_16;

 if (!VAR_32)
  return -VAR_3;

 if (!(VAR_34 & VAR_10))
  VAR_31 = FUNC_9(VAR_31);


 VAR_32 = FUNC_1(VAR_32);
 if (!VAR_32)
  return -VAR_5;


 if ((VAR_35 + (VAR_32 >> VAR_15)) < VAR_35)
               return -VAR_6;


 if (VAR_36->map_count > VAR_29)
  return -VAR_5;




 VAR_31 = FUNC_6(VAR_30, VAR_31, VAR_32, VAR_35, VAR_34,
  VAR_33 & VAR_16);
 if (VAR_31 & ~VAR_14)
  return VAR_31;





 VAR_38 = FUNC_3(VAR_33) | FUNC_2(VAR_34) |
   VAR_36->def_flags | VAR_24 | VAR_26 | VAR_23;

 if (VAR_34 & VAR_11)
  if (!FUNC_4())
   return -VAR_7;


 if (VAR_38 & VAR_22) {
  unsigned long VAR_41, VAR_42;
  VAR_41 = VAR_32 >> VAR_15;
  VAR_41 += VAR_36->locked_vm;
  VAR_42 = VAR_28->signal->rlim[VAR_20].rlim_cur;
  VAR_42 >>= VAR_15;
  if (VAR_41 > VAR_42 && !FUNC_5(VAR_0))
   return -VAR_2;
 }

 VAR_37 = VAR_30 ? VAR_30->f_path.dentry->d_inode : ((void*)0);

 if (VAR_30) {
  switch (VAR_34 & VAR_12) {
  case 128:
   if ((VAR_33&VAR_18) && !(VAR_30->f_mode&VAR_9))
    return -VAR_1;





   if (FUNC_0(VAR_37) && (VAR_30->f_mode & VAR_9))
    return -VAR_1;




   if (FUNC_7(VAR_37))
    return -VAR_2;

   VAR_38 |= VAR_27 | VAR_25;
   if (!(VAR_30->f_mode & VAR_9))
    VAR_38 &= ~(VAR_26 | VAR_27);


  case 129:
   if (!(VAR_30->f_mode & VAR_8))
    return -VAR_1;
   if (VAR_30->f_path.mnt->mnt_flags & VAR_13) {
    if (VAR_38 & VAR_21)
     return -VAR_7;
    VAR_38 &= ~VAR_23;
   }

   if (!VAR_30->f_op || !VAR_30->f_op->mmap)
    return -VAR_4;
   break;

  default:
   return -VAR_3;
  }
 } else {
  switch (VAR_34 & VAR_12) {
  case 128:



   VAR_35 = 0;
   VAR_38 |= VAR_27 | VAR_25;
   break;
  case 129:



   VAR_35 = VAR_31 >> VAR_15;
   break;
  default:
   return -VAR_3;
  }
 }

 VAR_39 = FUNC_10(VAR_30, VAR_40, VAR_33, VAR_34, VAR_31, 0);
 if (VAR_39)
  return VAR_39;

 return FUNC_8(VAR_30, VAR_31, VAR_32, VAR_34, VAR_38, VAR_35);
}
