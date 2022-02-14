
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {size_t defrmargin; int (* endline ) (struct termp*) ;int (* letter ) (struct termp*,char) ;} ;


 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*,char) ;
 int FUNC_2 (struct termp*) ;
 int FUNC_3 (struct termp*) ;

void
FUNC_4(void *VAR_0)
{
 struct termp *VAR_1;
 size_t VAR_2;

 VAR_1 = (struct termp *)VAR_0;
 (*VAR_1->endline)(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->defrmargin; VAR_2++)
  (*VAR_1->letter)(VAR_1, '-');
 (*VAR_1->endline)(VAR_1);
 (*VAR_1->endline)(VAR_1);
}
