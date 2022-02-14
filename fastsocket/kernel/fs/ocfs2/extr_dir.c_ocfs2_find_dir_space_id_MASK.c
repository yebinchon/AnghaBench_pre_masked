
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; } ;
struct ocfs2_dir_entry {int name_len; int rec_len; } ;
struct TYPE_3__ {char* id_data; } ;
struct TYPE_4__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct ocfs2_dir_entry*,struct buffer_head*,unsigned long) ;
 int FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct ocfs2_dir_entry*,unsigned int) ;
 scalar_t__ FUNC_7 (int,char const*,struct ocfs2_dir_entry*) ;
 scalar_t__ FUNC_8 (struct inode*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3, struct buffer_head *VAR_4,
       const char *VAR_5, int VAR_6,
       struct buffer_head **VAR_7,
       unsigned int *VAR_8)
{
 int VAR_9;
 struct super_block *VAR_10 = VAR_3->i_sb;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *)VAR_4->b_data;
 struct ocfs2_dir_entry *VAR_12, *VAR_13 = ((void*)0);
 char *VAR_14, *VAR_15;
 unsigned long VAR_16 = 0;
 unsigned int VAR_17, VAR_18, VAR_19 = VAR_3->i_sb->s_blocksize;





 if (FUNC_8(VAR_3))
  VAR_19 = FUNC_5(VAR_10) - FUNC_2(VAR_3);
 else
  VAR_19 = VAR_3->i_sb->s_blocksize - FUNC_2(VAR_3);

 VAR_14 = VAR_11->id2.i_data.id_data;
 VAR_15 = VAR_14 + FUNC_2(VAR_3);
 VAR_17 = FUNC_0(VAR_6);

 while (VAR_14 < VAR_15) {
  VAR_12 = (struct ocfs2_dir_entry *)VAR_14;

  if (!FUNC_4(VAR_3, VAR_12, VAR_4, VAR_16)) {
   VAR_9 = -VAR_1;
   goto out;
  }
  if (FUNC_7(VAR_6, VAR_5, VAR_12)) {
   VAR_9 = -VAR_0;
   goto out;
  }





  if (FUNC_6(VAR_12, VAR_17)) {


   *VAR_7 = VAR_4;
   FUNC_1(*VAR_7);
   VAR_9 = 0;
   goto out;
  }

  VAR_13 = VAR_12;
  VAR_14 += FUNC_3(VAR_12->rec_len);
  VAR_16 += FUNC_3(VAR_12->rec_len);
 }






 *VAR_8 = 1;
 VAR_18 = FUNC_3(VAR_13->rec_len) + VAR_19;
 if (VAR_18 < (VAR_17 + FUNC_0(VAR_13->name_len)))
  *VAR_8 = 2;

 VAR_9 = -VAR_2;
out:
 return VAR_9;
}
