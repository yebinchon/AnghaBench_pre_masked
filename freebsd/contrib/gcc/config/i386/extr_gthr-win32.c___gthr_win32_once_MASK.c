
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ done; int started; } ;
typedef TYPE_1__ __gthread_once_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 void FUNC_2 () ;

int
FUNC_3 (__gthread_once_t *VAR_2, void (*VAR_3) (void))
{
  if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    return VAR_0;

  if (! VAR_2->done)
    {
      if (FUNC_0 (&(VAR_2->started)) == 0)
        {
   (*VAR_3) ();
   VAR_2->done = VAR_1;
 }
      else
 {





   while (! VAR_2->done)
     FUNC_1 (0);
 }
    }
  return 0;
}
