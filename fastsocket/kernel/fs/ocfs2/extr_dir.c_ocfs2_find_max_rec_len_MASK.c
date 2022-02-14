
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct ocfs2_dir_entry {int rec_len; } ;
struct buffer_head {char* b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct ocfs2_dir_entry*) ;
 scalar_t__ FUNC_3 (struct buffer_head*,struct super_block*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_1,
      struct buffer_head *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9 = VAR_2->b_data;
 struct ocfs2_dir_entry *VAR_10;

 VAR_6 = (char *)FUNC_3(VAR_2, VAR_1);
 VAR_3 = FUNC_1(VAR_1);
 VAR_8 = VAR_9 + VAR_3;
 VAR_7 = VAR_9;
 VAR_10 = (struct ocfs2_dir_entry *)VAR_7;
 do {
  if (VAR_7 != VAR_6) {
   VAR_4 = FUNC_2(VAR_10);
   if (VAR_4 > VAR_5)
    VAR_5 = VAR_4;
  }

  VAR_7 += FUNC_0(VAR_10->rec_len);
  VAR_10 = (struct ocfs2_dir_entry *)VAR_7;
 } while (VAR_7 < VAR_8);

 if (VAR_5 >= VAR_0)
  return VAR_5;
 return 0;
}
