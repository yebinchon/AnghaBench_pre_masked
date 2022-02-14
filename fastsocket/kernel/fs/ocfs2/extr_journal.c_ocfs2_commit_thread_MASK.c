
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int checkpoint_event; struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int j_num_trans; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 int VAR_2;
 struct ocfs2_super *VAR_3 = VAR_1;
 struct ocfs2_journal *VAR_4 = VAR_3->journal;





 while (!(FUNC_1() &&
   FUNC_0(&VAR_4->j_num_trans) == 0)) {

  FUNC_5(VAR_3->checkpoint_event,
      FUNC_0(&VAR_4->j_num_trans)
      || FUNC_1());

  VAR_2 = FUNC_4(VAR_3);
  if (VAR_2 < 0)
   FUNC_3(VAR_2);

  if (FUNC_1() && FUNC_0(&VAR_4->j_num_trans)){
   FUNC_2(VAR_0,
        "commit_thread: %u transactions pending on "
        "shutdown\n",
        FUNC_0(&VAR_4->j_num_trans));
  }
 }

 return 0;
}
