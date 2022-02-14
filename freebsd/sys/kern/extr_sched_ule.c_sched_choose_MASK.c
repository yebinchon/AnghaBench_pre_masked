
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_priority; } ;
struct tdq {int tdq_lowpri; } ;


 int VAR_0 ;
 struct thread* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct tdq*,int ) ;
 struct tdq* FUNC_2 () ;
 int VAR_2 ;
 struct thread* FUNC_3 (struct tdq*) ;
 int FUNC_4 (struct tdq*,struct thread*) ;

struct thread *
FUNC_5(void)
{
 struct thread *VAR_3;
 struct tdq *VAR_4;

 VAR_4 = FUNC_2();
 FUNC_1(VAR_4, VAR_0);
 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3) {
  FUNC_4(VAR_4, VAR_3);
  VAR_4->tdq_lowpri = VAR_3->td_priority;
  return (VAR_3);
 }
 VAR_4->tdq_lowpri = VAR_1;
 return (FUNC_0(VAR_2));
}
