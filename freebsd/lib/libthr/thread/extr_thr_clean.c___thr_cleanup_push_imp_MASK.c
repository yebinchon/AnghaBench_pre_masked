
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_cleanup {void (* routine ) (void*) ;struct pthread_cleanup* prev; scalar_t__ onheap; void* routine_arg; } ;
struct pthread {struct pthread_cleanup* cleanup; } ;
struct _pthread_cleanup_info {int dummy; } ;


 struct pthread* FUNC_0 () ;

void
FUNC_1(void (*VAR_0)(void *), void *VAR_1,
    struct _pthread_cleanup_info *VAR_2)
{
 struct pthread *VAR_3 = FUNC_0();
 struct pthread_cleanup *VAR_4;

 VAR_4 = (void *)VAR_2;
 VAR_4->routine = VAR_0;
 VAR_4->routine_arg = VAR_1;
 VAR_4->onheap = 0;
 VAR_4->prev = VAR_3->cleanup;
 VAR_3->cleanup = VAR_4;
}
