
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_cleanup {void (* routine ) (void*) ;int onheap; struct pthread_cleanup* prev; void* routine_arg; } ;
struct pthread {int unwind_disabled; struct pthread_cleanup* cleanup; } ;


 struct pthread* FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2(void (*VAR_0)(void *), void *VAR_1)
{
 struct pthread *VAR_2 = FUNC_0();
 struct pthread_cleanup *VAR_3;



 if ((VAR_3 = (struct pthread_cleanup *)
     FUNC_1(sizeof(struct pthread_cleanup))) != ((void*)0)) {
  VAR_3->routine = VAR_0;
  VAR_3->routine_arg = VAR_1;
  VAR_3->onheap = 1;
  VAR_3->prev = VAR_2->cleanup;
  VAR_2->cleanup = VAR_3;
 }
}
