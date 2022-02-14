
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;

int FUNC_6(struct buffer_head *VAR_2)
{
 FUNC_5(VAR_2);
 if (!FUNC_2(VAR_2))
  return -VAR_1;
 if (FUNC_0(VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_2))
  FUNC_3(VAR_2);
 else
  FUNC_4(VAR_2);
 return 0;
}
