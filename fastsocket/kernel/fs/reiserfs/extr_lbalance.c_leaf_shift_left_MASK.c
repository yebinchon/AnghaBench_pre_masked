
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__ tb_mode; int * lkey; int * CFL; int tb_path; int tb_sb; } ;
struct buffer_head {int b_size; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*,int ) ;
 int FUNC_2 (struct buffer_head*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,int) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 struct buffer_head* FUNC_6 (int ) ;
 int FUNC_7 (int,char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,struct tree_balance*,int,int,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,char*,scalar_t__) ;
 int FUNC_13 (struct tree_balance*,int ,int ,struct buffer_head*,int ) ;

int FUNC_14(struct tree_balance *VAR_3, int VAR_4, int VAR_5)
{
 struct buffer_head *VAR_6 = FUNC_6(VAR_3->tb_path);
 int VAR_7;


 VAR_7 = FUNC_9(VAR_0, VAR_3, VAR_4, VAR_5, ((void*)0));

 if (VAR_4) {
  if (FUNC_0(VAR_6) == 0) {

   FUNC_7(VAR_5 != -1,
          "vs-10270: S0 is empty now, but shift_bytes != -1 (%d)",
          VAR_5);
   if (FUNC_4(VAR_3->tb_path, 1) == 0)
    FUNC_13(VAR_3, VAR_3->CFL[0], VAR_3->lkey[0],
         FUNC_5(VAR_3->tb_path, 0), 0);

  } else {

   FUNC_13(VAR_3, VAR_3->CFL[0], VAR_3->lkey[0], VAR_6, 0);

   FUNC_7((VAR_5 != -1 &&
    !(FUNC_8(FUNC_1(VAR_6, 0))
      && !FUNC_3(FUNC_1(VAR_6, 0)))) &&
          (!FUNC_10
    (FUNC_2(VAR_6, 0), VAR_6->b_size)),
          "vs-10280: item must be mergeable");
  }
 }

 return VAR_7;
}
