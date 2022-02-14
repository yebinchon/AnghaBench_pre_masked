
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_sb_info {int s_ninodes; int s_inodes_per_block_1; int * s_sb_total_free_inodes; } ;
struct sysv_inode {scalar_t__ i_mode; scalar_t__ i_nlink; } ;
struct super_block {int s_flags; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct sysv_sb_info*,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct sysv_sb_info*,int ) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (char*,...) ;
 struct sysv_inode* FUNC_7 (struct super_block*,int,struct buffer_head**) ;
 int FUNC_8 (struct super_block*) ;

unsigned long FUNC_9(struct super_block * VAR_2)
{
 struct sysv_sb_info *VAR_3 = FUNC_0(VAR_2);
 struct buffer_head * VAR_4;
 struct sysv_inode * VAR_5;
 int VAR_6, VAR_7, VAR_8;

 FUNC_5(VAR_2);

 VAR_8 = FUNC_4(VAR_3, *VAR_3->s_sb_total_free_inodes);

 if (0)
  goto trust_sb;


 VAR_7 = 0;
 VAR_6 = VAR_1+1;
 VAR_5 = FUNC_7(VAR_2, VAR_6, &VAR_4);
 if (!VAR_5)
  goto Eio;
 while (VAR_6 <= VAR_3->s_ninodes) {
  if (VAR_5->i_mode == 0 && VAR_5->i_nlink == 0)
   VAR_7++;
  if ((VAR_6++ & VAR_3->s_inodes_per_block_1) == 0) {
   FUNC_1(VAR_4);
   VAR_5 = FUNC_7(VAR_2, VAR_6, &VAR_4);
   if (!VAR_5)
    goto Eio;
  } else
   VAR_5++;
 }
 FUNC_1(VAR_4);
 if (VAR_7 != VAR_8)
  goto Einval;
out:
 FUNC_8(VAR_2);
 return VAR_7;

Einval:
 FUNC_6("sysv_count_free_inodes: "
  "free inode count was %d, correcting to %d\n",
  VAR_8, VAR_7);
 if (!(VAR_2->s_flags & VAR_0)) {
  *VAR_3->s_sb_total_free_inodes = FUNC_2(FUNC_0(VAR_2), VAR_7);
  FUNC_3(VAR_2);
 }
 goto out;

Eio:
 FUNC_6("sysv_count_free_inodes: unable to read inode table\n");
trust_sb:
 VAR_7 = VAR_8;
 goto out;
}
