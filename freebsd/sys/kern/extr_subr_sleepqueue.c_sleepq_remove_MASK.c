
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {void* td_wchan; } ;
struct sleepqueue {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 struct sleepqueue* FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct sleepqueue*,struct thread*,int ) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;

void
FUNC_9(struct thread *VAR_0, void *VAR_1)
{
 struct sleepqueue *VAR_2;
 int VAR_3;






 FUNC_0(VAR_1 != ((void*)0));
 FUNC_3(VAR_1);
 VAR_2 = FUNC_4(VAR_1);






 if (!FUNC_1(VAR_0) || VAR_0->td_wchan != VAR_1) {
  FUNC_5(VAR_1);
  return;
 }

 FUNC_7(VAR_0);
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_0->td_wchan == VAR_1);
 VAR_3 = FUNC_6(VAR_2, VAR_0, 0);
 FUNC_8(VAR_0);
 FUNC_5(VAR_1);
 if (VAR_3)
  FUNC_2();
}
