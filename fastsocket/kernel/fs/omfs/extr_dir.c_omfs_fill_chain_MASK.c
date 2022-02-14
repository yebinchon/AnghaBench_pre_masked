
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct omfs_inode {scalar_t__ i_type; int i_name; int i_sibling; int i_head; } ;
struct inode {int i_sb; } ;
struct file {int f_pos; TYPE_1__* f_dentry; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int (* filldir_t ) (void*,int ,int ,int ,int ,unsigned char) ;
struct TYPE_2__ {struct inode* d_inode; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5, filldir_t VAR_6,
  u64 VAR_7, int VAR_8)
{
 struct inode *VAR_9 = VAR_4->f_dentry->d_inode;
 struct buffer_head *VAR_10;
 struct omfs_inode *VAR_11;
 u64 VAR_12;
 int VAR_13 = 0;
 unsigned char VAR_14;


 while (VAR_7 != ~0) {
  VAR_10 = FUNC_5(VAR_9->i_sb, FUNC_3(FUNC_0(VAR_9->i_sb),
    VAR_7));
  if (!VAR_10)
   goto out;

  VAR_11 = (struct omfs_inode *) VAR_10->b_data;
  if (FUNC_4(FUNC_0(VAR_9->i_sb), &VAR_11->i_head, VAR_7)) {
   FUNC_2(VAR_10);
   goto out;
  }

  VAR_12 = VAR_7;
  VAR_7 = FUNC_1(VAR_11->i_sibling);


  if (VAR_8) {
   VAR_8--;
   FUNC_2(VAR_10);
   continue;
  }

  VAR_14 = (VAR_11->i_type == VAR_2) ? VAR_0 : VAR_1;

  VAR_13 = VAR_6(VAR_5, VAR_11->i_name, FUNC_6(VAR_11->i_name,
   VAR_3), VAR_4->f_pos, VAR_12, VAR_14);
  if (VAR_13 == 0)
   VAR_4->f_pos++;
  FUNC_2(VAR_10);
 }
out:
 return VAR_13;
}
