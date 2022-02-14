
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int section; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (size_t,void*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,void*,int) ;
 int VAR_5 ;

__attribute__((used)) static unsigned int
FUNC_2 (void * VAR_6)
{


  VAR_3 = 0;
  VAR_5 = VAR_0;


  if (VAR_4 > 0)
    return VAR_4;

  if (FUNC_0 (VAR_2, VAR_6)
      && FUNC_1 (&VAR_1 [VAR_2].section, VAR_6, 1))
    return VAR_4;
  else
    return 0;
}
