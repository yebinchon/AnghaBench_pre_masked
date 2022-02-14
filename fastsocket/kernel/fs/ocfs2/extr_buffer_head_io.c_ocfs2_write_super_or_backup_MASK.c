
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int sb; } ;
struct buffer_head {int b_end_io; int b_blocknr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct ocfs2_super*) ;
 scalar_t__ FUNC_10 (struct ocfs2_super*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;

int FUNC_15(struct ocfs2_super *VAR_4,
    struct buffer_head *VAR_5)
{
 int VAR_6 = 0;

 FUNC_6();

 FUNC_0(FUNC_1(VAR_5));
 FUNC_8(VAR_4->sb, VAR_5->b_blocknr);

 if (FUNC_9(VAR_4) || FUNC_10(VAR_4)) {
  VAR_6 = -VAR_1;
  goto out;
 }

 FUNC_5(VAR_5);
 FUNC_12(VAR_5);


 FUNC_3(VAR_5);

 FUNC_4(VAR_5);
 VAR_5->b_end_io = VAR_3;
 FUNC_13(VAR_2, VAR_5);

 FUNC_14(VAR_5);

 if (!FUNC_2(VAR_5)) {
  VAR_6 = -VAR_0;
  FUNC_11(VAR_5);
 }

out:
 FUNC_7(VAR_6);
 return VAR_6;
}
