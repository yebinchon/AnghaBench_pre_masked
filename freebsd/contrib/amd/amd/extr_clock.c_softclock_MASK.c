
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int opaque_t ;
typedef int (* callout_fun ) (int ) ;
struct TYPE_4__ {scalar_t__ c_time; struct TYPE_4__* c_next; int c_arg; int (* c_fn ) (int ) ;} ;
typedef TYPE_1__ callout ;
struct TYPE_5__ {TYPE_1__* c_next; } ;


 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_4(void)
{
  time_t VAR_2;
  callout *VAR_3;

  do {
    if (VAR_1)
      FUNC_1();

    VAR_2 = FUNC_0(((void*)0));




    while ((VAR_3 = VAR_0.c_next) && VAR_3->c_time <= VAR_2) {
      callout_fun *VAR_4 = &VAR_3->c_fn;
      opaque_t VAR_5 = VAR_3->c_arg;

      VAR_0.c_next = VAR_3->c_next;
      FUNC_2(VAR_3);
      (*VAR_4) (VAR_5);
    }

  } while (VAR_1);





  if ((VAR_3 = VAR_0.c_next))
    return VAR_3->c_time - VAR_2;
  return 0;
}
