
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clocksource {int mult; int maxadj; int max_idle_ns; int shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,int,int,int) ;
 int FUNC_1 (struct clocksource*) ;
 int FUNC_2 (struct clocksource*) ;
 void* FUNC_3 (struct clocksource*) ;
 int FUNC_4 (struct clocksource*) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct clocksource *VAR_3, u32 VAR_4, u32 VAR_5)
{







 FUNC_0(&VAR_3->mult, &VAR_3->shift, VAR_5,
          VAR_1/VAR_4,
          VAR_0*VAR_4);






 VAR_3->maxadj = FUNC_3(VAR_3);
 while ((VAR_3->mult + VAR_3->maxadj < VAR_3->mult)
  || (VAR_3->mult - VAR_3->maxadj > VAR_3->mult)) {
  VAR_3->mult >>= 1;
  VAR_3->shift--;
  VAR_3->maxadj = FUNC_3(VAR_3);
 }

 VAR_3->max_idle_ns = FUNC_4(VAR_3);

 FUNC_6(&VAR_2);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_5();
 FUNC_7(&VAR_2);
 return 0;
}
