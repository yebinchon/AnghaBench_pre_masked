
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* lkey; struct buffer_head** FL; int tb_path; struct super_block* tb_sb; } ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int b_blocknr_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_3 (int ,int) ;
 int FUNC_4 (int,char*,struct buffer_head*,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 struct buffer_head* FUNC_7 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_8(struct tree_balance *VAR_0, int VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3;
 struct super_block *VAR_4 = VAR_0->tb_sb;
 b_blocknr_t VAR_5;
 int VAR_6;


 if (!VAR_0->FL[VAR_1])
  return 0;


 VAR_2 = FUNC_3(VAR_0->tb_path, VAR_1 + 1);

 FUNC_4(!VAR_2 ||
        !FUNC_0(VAR_2) ||
        !FUNC_0(VAR_0->FL[VAR_1]) ||
        !FUNC_5(VAR_2) ||
        !FUNC_5(VAR_0->FL[VAR_1]),
        "vs-8165: F[h] (%b) or FL[h] (%b) is invalid",
        VAR_2, VAR_0->FL[VAR_1]);


 VAR_6 = (VAR_2 == VAR_0->FL[VAR_1]) ?
     VAR_0->lkey[VAR_1] : FUNC_1(VAR_0->FL[VAR_1]);

 VAR_5 =
     FUNC_2(VAR_0->FL[VAR_1], VAR_6);

 if ((VAR_3 = FUNC_7(VAR_4, VAR_5))) {

  FUNC_4(FUNC_5(VAR_3) && !FUNC_0(VAR_3),
         "vs-8170: left neighbor (%b %z) is not in the tree",
         VAR_3, VAR_3);
  FUNC_6(VAR_3);
  return 1;
 }

 return 0;
}
