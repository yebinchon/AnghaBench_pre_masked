
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct tdq {scalar_t__ tdq_load; int tdq_switchcnt; int tdq_oldswitchcnt; int tdq_cpu_idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tdq*) ;
 struct tdq* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 struct thread* VAR_5 ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (struct tdq*) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;

void
FUNC_11(void *VAR_8)
{
 struct thread *VAR_9;
 struct tdq *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;

 FUNC_7(&VAR_0, VAR_1);
 VAR_9 = VAR_5;
 VAR_10 = FUNC_1();
 FUNC_2();
 VAR_11 = -1;
 for (;;) {
  if (VAR_10->tdq_load) {
   FUNC_9(VAR_9);
   FUNC_6(VAR_3 | VAR_2, ((void*)0));
   FUNC_10(VAR_9);
  }
  VAR_12 = VAR_10->tdq_switchcnt + VAR_10->tdq_oldswitchcnt;
  VAR_11 = VAR_12;
  if (FUNC_0(VAR_10) && VAR_12 > VAR_7) {
   for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
    if (VAR_10->tdq_load)
     break;
    FUNC_5();
   }
  }


  VAR_12 = VAR_10->tdq_switchcnt + VAR_10->tdq_oldswitchcnt;
  if (VAR_10->tdq_load != 0 || VAR_12 != VAR_11)
   continue;


  VAR_10->tdq_cpu_idle = 1;





  FUNC_3();





  if (VAR_10->tdq_load != 0) {
   VAR_10->tdq_cpu_idle = 0;
   continue;
  }
  FUNC_4(VAR_12 * 4 > VAR_7);
  VAR_10->tdq_cpu_idle = 0;





  VAR_12 = VAR_10->tdq_switchcnt + VAR_10->tdq_oldswitchcnt;
  if (VAR_12 != VAR_11)
   continue;
  VAR_10->tdq_switchcnt++;
  VAR_11++;
 }
}
