
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct call_single_data {int info; int (* func ) (int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct call_single_data*) ;
 int FUNC_3 (int,struct call_single_data*,int) ;
 unsigned int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int VAR_0 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

void FUNC_11(int VAR_1, struct call_single_data *VAR_2,
    int VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_4();






 FUNC_0(FUNC_1(FUNC_9()) && VAR_3 && FUNC_5()
       && !VAR_0);

 if (VAR_1 == VAR_4) {
  FUNC_7(VAR_5);
  VAR_2->func(VAR_2->info);
  FUNC_6(VAR_5);
 } else {
  FUNC_2(VAR_2);
  FUNC_3(VAR_1, VAR_2, VAR_3);
 }
 FUNC_8();
}
