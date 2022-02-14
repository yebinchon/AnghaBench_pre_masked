
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int tb_path; struct buffer_head** FL; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*,int) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int) ;
 struct buffer_head* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct tree_balance *VAR_0, int VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_4(VAR_0->tb_path, VAR_1)) == ((void*)0) ||
     (VAR_2 = VAR_0->FL[VAR_1]) == ((void*)0))
  return 0;

 if (VAR_3 == VAR_2)
  VAR_4 = FUNC_3(VAR_0->tb_path, VAR_1) - 1;
 else {
  VAR_4 = FUNC_0(VAR_2);
  VAR_3 = VAR_2;
 }

 return (FUNC_2(VAR_3) - FUNC_5(FUNC_1(VAR_3, VAR_4)));
}
