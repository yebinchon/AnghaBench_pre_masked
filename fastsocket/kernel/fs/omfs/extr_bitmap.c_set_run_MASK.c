
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct omfs_sb_info {unsigned long** s_imap; int s_bitmap_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 struct omfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int,unsigned long*) ;
 scalar_t__ FUNC_3 (struct omfs_sb_info*,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct super_block*,scalar_t__) ;
 int FUNC_6 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_1, int VAR_2,
  int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8;
 struct buffer_head *VAR_9;
 struct omfs_sb_info *VAR_10 = FUNC_0(VAR_1);

  VAR_8 = -VAR_0;
 VAR_9 = FUNC_5(VAR_1, FUNC_3(VAR_10, VAR_10->s_bitmap_ino) + VAR_2);
 if (!VAR_9)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++, VAR_4++) {
  if (VAR_4 >= VAR_3) {
   VAR_4 = 0;
   VAR_2++;

   FUNC_4(VAR_9);
   FUNC_1(VAR_9);
   VAR_9 = FUNC_5(VAR_1,
    FUNC_3(VAR_10, VAR_10->s_bitmap_ino) + VAR_2);
   if (!VAR_9)
    goto out;
  }
  if (VAR_6) {
   FUNC_6(VAR_4, VAR_10->s_imap[VAR_2]);
   FUNC_6(VAR_4, (unsigned long *)VAR_9->b_data);
  } else {
   FUNC_2(VAR_4, VAR_10->s_imap[VAR_2]);
   FUNC_2(VAR_4, (unsigned long *)VAR_9->b_data);
  }
 }
 FUNC_4(VAR_9);
 FUNC_1(VAR_9);
 VAR_8 = 0;
out:
 return VAR_8;
}
