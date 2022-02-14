
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ callback; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(void)
{
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].callback)
   FUNC_1(&VAR_1[VAR_2]);
 }
 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
}
