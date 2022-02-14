
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_switches; scalar_t__* switches; } ;
typedef TYPE_1__ lash_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(lash_t *VAR_0)
{
 if (VAR_0->switches) {
  unsigned VAR_1;
  for (VAR_1 = 0; ((int)VAR_1) < VAR_0->num_switches; VAR_1++)
   if (VAR_0->switches[VAR_1])
    FUNC_0(VAR_0,
           VAR_0->switches[VAR_1]);
 }
}
