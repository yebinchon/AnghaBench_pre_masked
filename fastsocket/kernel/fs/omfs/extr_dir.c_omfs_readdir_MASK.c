
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_size; int i_ino; int i_sb; } ;
struct file {int f_pos; TYPE_1__* f_dentry; } ;
struct buffer_head {int * b_data; } ;
typedef int loff_t ;
typedef int (* filldir_t ) (void*,char*,int,int,int ,int ) ;
typedef int __be64 ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct file*,void*,int (*) (void*,char*,int,int,int ,int ),int ,unsigned int) ;
 int FUNC_5 (TYPE_1__*) ;
 struct buffer_head* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, void *VAR_4, filldir_t VAR_5)
{
 struct inode *VAR_6 = VAR_3->f_dentry->d_inode;
 struct buffer_head *VAR_7;
 loff_t VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 u64 VAR_13;
 int VAR_14 = -VAR_1;

 if (VAR_3->f_pos >> 32)
  goto success;

 switch ((unsigned long) VAR_3->f_pos) {
 case 0:
  if (VAR_5(VAR_4, ".", 1, 0, VAR_6->i_ino, VAR_0) < 0)
   goto success;
  VAR_3->f_pos++;

 case 1:
  if (VAR_5(VAR_4, "..", 2, 1,
      FUNC_5(VAR_3->f_dentry), VAR_0) < 0)
   goto success;
  VAR_3->f_pos = 1 << 20;

 }

 VAR_12 = (VAR_6->i_size - VAR_2) / 8;


 VAR_10 = (VAR_3->f_pos >> 20) - 1;
 VAR_11 = VAR_3->f_pos & 0xfffff;

 VAR_7 = FUNC_6(VAR_6->i_sb, FUNC_3(FUNC_0(VAR_6->i_sb), VAR_6->i_ino));
 if (!VAR_7)
  goto out;

 VAR_8 = VAR_2 + VAR_10 * 8;

 for (; VAR_10 < VAR_12; VAR_10++, VAR_8 += 8) {
  VAR_13 = FUNC_1(*((__be64 *) &VAR_7->b_data[VAR_8]));

  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_13, VAR_11);
  VAR_11 = 0;
  if (VAR_9 < 0)
   break;

  VAR_3->f_pos = (VAR_10+2) << 20;
 }
 FUNC_2(VAR_7);
success:
 VAR_14 = 0;
out:
 return VAR_14;
}
