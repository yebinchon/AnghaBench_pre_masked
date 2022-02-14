
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ,int *) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct Qdisc*) ;

void FUNC_4(struct Qdisc *VAR_2)
{
 unsigned long VAR_3 = VAR_1;

 while (FUNC_3(VAR_2)) {





  if (FUNC_2() || VAR_1 != VAR_3) {
   FUNC_0(VAR_2);
   break;
  }
 }

 FUNC_1(VAR_0, &VAR_2->state);
}
