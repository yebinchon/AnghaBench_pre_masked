
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int ra_pages; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {int f_lock; int f_mode; TYPE_5__ f_ra; struct address_space* f_mapping; TYPE_3__ f_path; } ;
struct backing_dev_info {int ra_pages; } ;
struct address_space {struct backing_dev_info* backing_dev_info; TYPE_4__* a_ops; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;
struct TYPE_9__ {scalar_t__ get_xip_mem; } ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int i_mode; } ;
typedef int SYSCALL_DEFINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;






 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct backing_dev_info*) ;
 struct file* FUNC_2 (int) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct address_space*,struct file*,scalar_t__,unsigned long) ;
 int FUNC_5 (struct file*) ;
 unsigned long FUNC_6 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

SYSCALL_DEFINE(FUNC_10)(int VAR_6, loff_t VAR_7, loff_t VAR_8, int VAR_9)
{
 struct file *VAR_10 = FUNC_2(VAR_6);
 struct address_space *VAR_11;
 struct backing_dev_info *VAR_12;
 loff_t VAR_13;
 pgoff_t VAR_14;
 pgoff_t VAR_15;
 unsigned long VAR_16;
 int VAR_17 = 0;

 if (!VAR_10)
  return -VAR_0;

 if (FUNC_0(VAR_10->f_path.dentry->d_inode->i_mode)) {
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_11 = VAR_10->f_mapping;
 if (!VAR_11 || VAR_8 < 0) {
  VAR_17 = -VAR_1;
  goto out;
 }

 if (VAR_11->a_ops->get_xip_mem) {
  switch (VAR_9) {
  case 131:
  case 130:
  case 129:
  case 128:
  case 132:
  case 133:

   break;
  default:
   VAR_17 = -VAR_1;
  }
  goto out;
 }


 VAR_13 = VAR_7 + VAR_8;
 if (!VAR_8 || VAR_13 < VAR_8)
  VAR_13 = -1;
 else
  VAR_13--;

 VAR_12 = VAR_11->backing_dev_info;

 switch (VAR_9) {
 case 131:
  VAR_10->f_ra.ra_pages = VAR_12->ra_pages;
  FUNC_8(&VAR_10->f_lock);
  VAR_10->f_mode &= ~VAR_3;
  FUNC_9(&VAR_10->f_lock);
  break;
 case 130:
  FUNC_8(&VAR_10->f_lock);
  VAR_10->f_mode |= VAR_3;
  FUNC_9(&VAR_10->f_lock);
  break;
 case 129:
  VAR_10->f_ra.ra_pages = VAR_12->ra_pages * 2;
  FUNC_8(&VAR_10->f_lock);
  VAR_10->f_mode &= ~VAR_3;
  FUNC_9(&VAR_10->f_lock);
  break;
 case 128:

  VAR_14 = VAR_7 >> VAR_4;
  VAR_15 = VAR_13 >> VAR_4;


  VAR_16 = VAR_15 - VAR_14 + 1;
  if (!VAR_16)
   VAR_16 = ~0UL;





  FUNC_4(VAR_11, VAR_10, VAR_14,
        VAR_16);
  break;
 case 132:
  break;
 case 133:
  if (!FUNC_1(VAR_11->backing_dev_info))
   FUNC_3(VAR_11);


  VAR_14 = (VAR_7+(VAR_5-1)) >> VAR_4;
  VAR_15 = (VAR_13 >> VAR_4);

  if (VAR_15 >= VAR_14) {
   unsigned long VAR_18 = FUNC_6(VAR_11,
      VAR_14, VAR_15);







   if (VAR_18 < (VAR_15 - VAR_14 + 1)) {
    FUNC_7();
    FUNC_6(VAR_11, VAR_14,
      VAR_15);
   }
  }
  break;
 default:
  VAR_17 = -VAR_1;
 }
out:
 FUNC_5(VAR_10);
 return VAR_17;
}
