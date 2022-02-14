
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_end_io; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int VAR_4 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (char*,unsigned long long,struct ocfs2_caching_info*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ocfs2_super*) ;
 int FUNC_9 (struct ocfs2_caching_info*) ;
 int FUNC_10 (struct ocfs2_caching_info*) ;
 int FUNC_11 (struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (int ,struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;

int FUNC_16(struct ocfs2_super *VAR_5, struct buffer_head *VAR_6,
        struct ocfs2_caching_info *VAR_7)
{
 int VAR_8 = 0;

 FUNC_6("(bh->b_blocknr = %llu, ci=%p)\n",
     (unsigned long long)VAR_6->b_blocknr, VAR_7);

 FUNC_0(VAR_6->b_blocknr < VAR_2);
 FUNC_0(FUNC_1(VAR_6));




 if (FUNC_8(VAR_5)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_7);

 FUNC_5(VAR_6);
 FUNC_13(VAR_6);


 FUNC_3(VAR_6);

 FUNC_4(VAR_6);
 VAR_6->b_end_io = VAR_4;
 FUNC_14(VAR_3, VAR_6);

 FUNC_15(VAR_6);

 if (FUNC_2(VAR_6)) {
  FUNC_11(VAR_7, VAR_6);
 } else {



  VAR_8 = -VAR_0;
  FUNC_12(VAR_6);
 }

 FUNC_10(VAR_7);
out:
 FUNC_7(VAR_8);
 return VAR_8;
}
