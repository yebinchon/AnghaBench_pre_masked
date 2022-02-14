
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {struct gcov_info* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct gcov_info*) ;
 int VAR_1 ;
 struct gcov_info* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
 struct gcov_info *VAR_4;

 FUNC_1(&VAR_3);
 VAR_1 = 1;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
  FUNC_0(VAR_0, VAR_4);
 FUNC_2(&VAR_3);
}
