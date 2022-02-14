
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_group_desc {int bg_blkno; int bg_bits; scalar_t__ bg_free_bits_count; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_5 (int ,struct buffer_head*,int,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
        struct buffer_head *VAR_2,
        u32 VAR_3, u32 VAR_4,
        u64 VAR_5,
        u16 *VAR_6, u16 *VAR_7)
{
 int VAR_8 = -VAR_0;
 u64 VAR_9;
 struct ocfs2_group_desc *VAR_10 = (struct ocfs2_group_desc *) VAR_2->b_data;

 FUNC_0(VAR_4 != 1);
 FUNC_0(FUNC_6(VAR_1));

 if (VAR_10->bg_free_bits_count) {
  VAR_8 = FUNC_5(FUNC_1(VAR_1->i_sb),
       VAR_2, VAR_3,
       FUNC_2(VAR_10->bg_bits),
       VAR_6, VAR_7);
  if (!VAR_8 && VAR_5) {
   VAR_9 = FUNC_3(VAR_10->bg_blkno) + *VAR_6 +
    *VAR_7;
   FUNC_4(0, "Checking %llu against %llu\n",
        (unsigned long long)VAR_9,
        (unsigned long long)VAR_5);
   if (VAR_9 > VAR_5)
    VAR_8 = -VAR_0;
  }
 }

 return VAR_8;
}
