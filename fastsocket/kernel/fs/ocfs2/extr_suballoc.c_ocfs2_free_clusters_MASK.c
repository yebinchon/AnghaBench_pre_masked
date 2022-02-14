
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef unsigned long long u16 ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__*,unsigned long long*) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,struct inode*,struct buffer_head*,unsigned long long,scalar_t__,unsigned int) ;
 int FUNC_10 (int ,unsigned int) ;

int FUNC_11(handle_t *VAR_0,
         struct inode *VAR_1,
         struct buffer_head *VAR_2,
         u64 VAR_3,
         unsigned int VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 u64 VAR_7;
 struct ocfs2_dinode *VAR_8;





 FUNC_3();



 FUNC_0(VAR_3 != FUNC_8(VAR_1->i_sb, FUNC_7(VAR_1->i_sb, VAR_3)));

 VAR_8 = (struct ocfs2_dinode *) VAR_2->b_data;

 FUNC_6(VAR_1, VAR_3, &VAR_7,
         &VAR_6);

 FUNC_2(0, "want to free %u clusters starting at block %llu\n",
      VAR_4, (unsigned long long)VAR_3);
 FUNC_2(0, "bg_blkno = %llu, bg_start_bit = %u\n",
      (unsigned long long)VAR_7, VAR_6);

 VAR_5 = FUNC_9(VAR_0, VAR_1, VAR_2,
       VAR_6, VAR_7,
       VAR_4);
 if (VAR_5 < 0) {
  FUNC_4(VAR_5);
  goto out;
 }

 FUNC_10(FUNC_1(VAR_1->i_sb),
      VAR_4);

out:
 FUNC_5(VAR_5);
 return VAR_5;
}
