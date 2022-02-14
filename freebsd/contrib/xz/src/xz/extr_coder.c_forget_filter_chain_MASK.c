
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * options; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(void)
{


 while (VAR_1 > 0) {
  --VAR_1;
  FUNC_0(VAR_0[VAR_1].options);
  VAR_0[VAR_1].options = ((void*)0);
 }

 return;
}
