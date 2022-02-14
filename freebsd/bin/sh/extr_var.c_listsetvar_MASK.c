
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void
FUNC_2(struct arglist *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++)
  FUNC_1(FUNC_0(VAR_2->args[VAR_4]), VAR_3);
 VAR_1;
}
