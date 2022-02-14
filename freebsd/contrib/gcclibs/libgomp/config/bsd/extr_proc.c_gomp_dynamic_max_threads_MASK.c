
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int nthreads_var; } ;


 unsigned int FUNC_0 () ;
 int FUNC_1 (double*,int) ;
 TYPE_1__* FUNC_2 (int) ;

unsigned
FUNC_3 (void)
{
  unsigned VAR_0, VAR_1;
  unsigned VAR_2 = FUNC_2 (0)->nthreads_var;

  VAR_0 = FUNC_0 ();
  if (!VAR_0 || VAR_0 > VAR_2)
    VAR_0 = VAR_2;

  VAR_1 = 0;
  if (VAR_1 >= VAR_0)
    return 1;
  else
    return VAR_0 - VAR_1;
}
