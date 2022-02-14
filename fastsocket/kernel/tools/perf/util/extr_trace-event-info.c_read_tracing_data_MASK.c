
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_data {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 struct tracing_data* FUNC_0 (struct list_head*,int,int) ;
 int FUNC_1 (struct tracing_data*) ;

int FUNC_2(int VAR_1, struct list_head *VAR_2)
{
 struct tracing_data *VAR_3;





 VAR_3 = FUNC_0(VAR_2, VAR_1, 0);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_3);
 return 0;
}
