
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_triggers {int ot_triggers; } ;
struct ocfs2_super {int journal; } ;
struct ocfs2_caching_info {int ci_ops; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_size; } ;
typedef int handle_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,struct buffer_head*) ;
 int FUNC_5 (int *,struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*,int *) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*,unsigned long long,int,char*,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct ocfs2_super*) ;
 int FUNC_11 (struct ocfs2_caching_info*) ;
 int FUNC_12 (struct ocfs2_caching_info*) ;
 int FUNC_13 (struct ocfs2_caching_info*) ;
 int FUNC_14 (int ,struct ocfs2_caching_info*) ;

__attribute__((used)) static int FUNC_15(handle_t *VAR_2,
      struct ocfs2_caching_info *VAR_3,
      struct buffer_head *VAR_4,
      struct ocfs2_triggers *VAR_5,
      int VAR_6)
{
 int VAR_7;
 struct ocfs2_super *VAR_8 =
  FUNC_2(FUNC_11(VAR_3));

 FUNC_1(!VAR_3 || !VAR_3->ci_ops);
 FUNC_1(!VAR_2);
 FUNC_1(!VAR_4);

 FUNC_8("bh->b_blocknr=%llu, type=%d (\"%s\"), bh->b_size = %zu\n",
     (unsigned long long)VAR_4->b_blocknr, VAR_6,
     (VAR_6 == 130) ?
     "OCFS2_JOURNAL_ACCESS_CREATE" :
     "OCFS2_JOURNAL_ACCESS_WRITE",
     VAR_4->b_size);


 if (!FUNC_3(VAR_4)) {
  FUNC_7(VAR_1, "giving me a buffer that's not uptodate!\n");
  FUNC_7(VAR_1, "b_blocknr=%llu\n",
       (unsigned long long)VAR_4->b_blocknr);
  FUNC_0();
 }







 FUNC_14(VAR_8->journal, VAR_3);

 FUNC_12(VAR_3);
 switch (VAR_6) {
 case 130:
 case 128:
  VAR_7 = FUNC_5(VAR_2, VAR_4);
  break;

 case 129:
  VAR_7 = FUNC_4(VAR_2, VAR_4);
  break;

 default:
  VAR_7 = -VAR_0;
  FUNC_7(VAR_1, "Uknown access type!\n");
 }
 if (!VAR_7 && FUNC_10(VAR_8) && VAR_5)
  FUNC_6(VAR_4, &VAR_5->ot_triggers);
 FUNC_13(VAR_3);

 if (VAR_7 < 0)
  FUNC_7(VAR_1, "Error %d getting %d access to buffer!\n",
       VAR_7, VAR_6);

 FUNC_9(VAR_7);
 return VAR_7;
}
