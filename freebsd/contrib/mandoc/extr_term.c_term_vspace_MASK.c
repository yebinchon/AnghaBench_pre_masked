
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {scalar_t__ skipvsp; int (* endline ) (struct termp*) ;scalar_t__ minbl; scalar_t__ viscol; } ;


 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*) ;

void
FUNC_2(struct termp *VAR_0)
{

 FUNC_1(VAR_0);
 VAR_0->viscol = 0;
 VAR_0->minbl = 0;
 if (0 < VAR_0->skipvsp)
  VAR_0->skipvsp--;
 else
  (*VAR_0->endline)(VAR_0);
}
