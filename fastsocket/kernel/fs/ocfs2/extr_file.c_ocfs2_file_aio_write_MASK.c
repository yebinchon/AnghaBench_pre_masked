
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_super {TYPE_3__* journal; } ;
struct kiocb {scalar_t__ ki_pos; int ki_left; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {scalar_t__ i_size; int i_mutex; int i_alloc_sem; int i_mode; int i_sb; } ;
struct TYPE_7__ {TYPE_4__* dentry; } ;
struct file {int f_flags; int f_mapping; TYPE_2__ f_path; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_10__ {scalar_t__ ip_clusters; } ;
struct TYPE_6__ {int name; int len; } ;
struct TYPE_9__ {TYPE_1__ d_name; struct inode* d_inode; } ;
struct TYPE_8__ {int j_journal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct kiocb*,struct iovec const*,unsigned long*,scalar_t__,scalar_t__*,size_t,size_t) ;
 int FUNC_10 (struct iovec const*,unsigned long*,size_t*,int ) ;
 int FUNC_11 (struct file*,scalar_t__*,size_t*,int ) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,struct file*,unsigned int,int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct kiocb*) ;
 int FUNC_20 (struct kiocb*,int) ;
 int FUNC_21 (TYPE_4__*,scalar_t__*,int ,int,int*) ;
 int FUNC_22 (struct inode*,int) ;
 int FUNC_23 (struct inode*,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (struct inode*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_27(struct kiocb *VAR_6,
        const struct iovec *VAR_7,
        unsigned long VAR_8,
        loff_t VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 int VAR_15;
 ssize_t VAR_16 = 0;
 size_t VAR_17;
 size_t VAR_18;
 loff_t VAR_19, *VAR_20 = &VAR_6->ki_pos;
 u32 VAR_21;
 struct file *VAR_22 = VAR_6->ki_filp;
 struct inode *VAR_23 = VAR_22->f_path.dentry->d_inode;
 struct ocfs2_super *VAR_24 = FUNC_3(VAR_23->i_sb);

 FUNC_14("(0x%p, %u, '%.*s')\n", VAR_22,
     (unsigned int)VAR_8,
     VAR_22->f_path.dentry->d_name.len,
     VAR_22->f_path.dentry->d_name.name);

 if (VAR_6->ki_left == 0)
  return 0;

 FUNC_25(VAR_23->i_sb, VAR_4);

 VAR_12 = VAR_22->f_flags & VAR_1 ? 1 : 0;
 VAR_11 = VAR_22->f_flags & VAR_2 ? 1 : 0;

 FUNC_17(&VAR_23->i_mutex);

relock:

 if (VAR_11) {
  FUNC_6(&VAR_23->i_alloc_sem);
  VAR_14 = 1;
 }


 VAR_13 = !VAR_11;
 VAR_10 = FUNC_22(VAR_23, VAR_13);
 if (VAR_10 < 0) {
  FUNC_15(VAR_10);
  goto out_sems;
 }

 VAR_15 = VAR_11;
 VAR_10 = FUNC_21(VAR_22->f_path.dentry, VAR_20,
         VAR_6->ki_left, VAR_12,
         &VAR_15);
 if (VAR_10 < 0) {
  FUNC_15(VAR_10);
  goto out;
 }





 if (VAR_11 && !VAR_15) {
  FUNC_23(VAR_23, VAR_13);
  FUNC_24(&VAR_23->i_alloc_sem);

  VAR_14 = 0;
  VAR_13 = -1;

  VAR_11 = 0;
  goto relock;
 }





 VAR_19 = FUNC_12(VAR_23);
 VAR_21 = FUNC_2(VAR_23)->ip_clusters;


 FUNC_20(VAR_6, VAR_13);

 if (VAR_11) {
  VAR_10 = FUNC_10(VAR_7, &VAR_8, &VAR_17,
          VAR_5);
  if (VAR_10)
   goto out_dio;

  VAR_18 = VAR_17;
  VAR_10 = FUNC_11(VAR_22, VAR_20, &VAR_18,
        FUNC_4(VAR_23->i_mode));
  if (VAR_10)
   goto out_dio;

  VAR_16 = FUNC_9(VAR_6, VAR_7, &VAR_8, *VAR_20,
          VAR_20, VAR_18, VAR_17);
  if (VAR_16 < 0) {





   if (*VAR_20 + VAR_18 > VAR_23->i_size)
    FUNC_26(VAR_23, VAR_23->i_size);
   VAR_10 = VAR_16;
   goto out_dio;
  }
 } else {
  VAR_16 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_20);
 }

out_dio:

 FUNC_0(VAR_10 == -VAR_0 && !(VAR_22->f_flags & VAR_2));

 if ((VAR_22->f_flags & VAR_3 && !VAR_11) || FUNC_1(VAR_23)) {
  VAR_10 = FUNC_8(VAR_22->f_mapping, VAR_9,
            VAR_9 + VAR_18 - 1);
  if (VAR_10 < 0)
   VAR_16 = VAR_10;

  if (!VAR_10 && (VAR_19 != FUNC_12(VAR_23) ||
      VAR_21 != FUNC_2(VAR_23)->ip_clusters)) {
   VAR_10 = FUNC_13(VAR_24->journal->j_journal);
   if (VAR_10 < 0)
    VAR_16 = VAR_10;
  }

  if (!VAR_10)
   VAR_10 = FUNC_7(VAR_22->f_mapping, VAR_9,
            VAR_9 + VAR_18 - 1);
 }
 if (VAR_10 == -VAR_0 || !FUNC_19(VAR_6)) {
  VAR_13 = -1;
  VAR_14 = 0;
 }

out:
 if (VAR_13 != -1)
  FUNC_23(VAR_23, VAR_13);

out_sems:
 if (VAR_14)
  FUNC_24(&VAR_23->i_alloc_sem);

 FUNC_18(&VAR_23->i_mutex);

 if (VAR_16)
  VAR_10 = VAR_16;
 FUNC_16(VAR_10);
 return VAR_10;
}
