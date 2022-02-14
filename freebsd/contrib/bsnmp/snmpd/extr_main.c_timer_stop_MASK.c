
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer {int id; } ;


 int FUNC_0 (struct timer*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

void
FUNC_6(void *VAR_3)
{
 struct timer *VAR_4 = VAR_3;

 FUNC_0(VAR_4, VAR_2);



 if (FUNC_1(VAR_1, VAR_4->id) == -1) {
  FUNC_5(VAR_0, "cannot stop timer: %m");
  FUNC_2(1);
 }

 FUNC_3(VAR_3);
}
