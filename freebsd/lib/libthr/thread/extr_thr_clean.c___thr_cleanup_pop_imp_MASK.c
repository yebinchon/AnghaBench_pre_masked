
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_cleanup {scalar_t__ onheap; int routine_arg; int (* routine ) (int ) ;struct pthread_cleanup* prev; } ;
struct pthread {struct pthread_cleanup* cleanup; } ;


 struct pthread* FUNC_0 () ;
 int FUNC_1 (struct pthread_cleanup*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(int VAR_0)
{
 struct pthread *VAR_1 = FUNC_0();
 struct pthread_cleanup *VAR_2;

 if ((VAR_2 = VAR_1->cleanup) != ((void*)0)) {
  VAR_1->cleanup = VAR_2->prev;
  if (VAR_0)
   VAR_2->routine(VAR_2->routine_arg);
  if (VAR_2->onheap)
   FUNC_1(VAR_2);
 }
}
