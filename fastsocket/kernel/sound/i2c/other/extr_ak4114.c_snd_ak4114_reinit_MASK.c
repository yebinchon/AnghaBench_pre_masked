
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4114 {int init; int work; scalar_t__* kctls; } ;


 int VAR_0 ;
 int FUNC_0 (struct ak4114*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct ak4114 *VAR_1)
{
 VAR_1->init = 1;
 FUNC_2();
 FUNC_1();
 FUNC_0(VAR_1);

 VAR_1->init = 0;
 if (VAR_1->kctls[0])
  FUNC_3(&VAR_1->work, VAR_0 / 10);
}
