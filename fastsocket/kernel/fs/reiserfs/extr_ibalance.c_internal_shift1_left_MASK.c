
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int dummy; } ;
struct buffer_info {int bi_bh; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct tree_balance*,int,struct buffer_info*,struct buffer_info*,int*,struct buffer_head**) ;
 int FUNC_2 (struct buffer_info*,int ,struct buffer_head*,int) ;
 int FUNC_3 (struct buffer_info*,struct buffer_info*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct tree_balance *VAR_2,
     int VAR_3, int VAR_4)
{
 struct buffer_info VAR_5, VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8;

 FUNC_1(VAR_1, VAR_2, VAR_3,
           &VAR_5, &VAR_6, &VAR_8, &VAR_7);

 if (VAR_4 > 0)
  FUNC_2(&VAR_5, FUNC_0(VAR_5.bi_bh), VAR_7,
        VAR_8);



 FUNC_3(&VAR_5, &VAR_6, VAR_0,
         VAR_4, 1);

}
