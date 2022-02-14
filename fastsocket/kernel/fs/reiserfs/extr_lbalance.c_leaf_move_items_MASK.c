
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int dummy; } ;
struct buffer_info {int bi_bh; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_info*,int ,int,int,int) ;
 int FUNC_2 (int,struct tree_balance*,struct buffer_info*,struct buffer_info*,int*,struct buffer_head*) ;
 int FUNC_3 (struct buffer_info*,int,int,int,int) ;

int FUNC_4(int VAR_1, struct tree_balance *VAR_2, int VAR_3,
      int VAR_4, struct buffer_head *VAR_5)
{
 int VAR_6;
 struct buffer_info VAR_7, VAR_8;
 int VAR_9;

 FUNC_2(VAR_1, VAR_2, &VAR_7, &VAR_8,
       &VAR_9, VAR_5);

 VAR_6 =
     FUNC_1(&VAR_7, VAR_8.bi_bh, VAR_9, VAR_3,
       VAR_4);

 FUNC_3(&VAR_8, VAR_9,
     (VAR_9 ==
      VAR_0) ? 0 : (FUNC_0(VAR_8.bi_bh) -
       VAR_3), VAR_3, VAR_4);

 return VAR_6;
}
