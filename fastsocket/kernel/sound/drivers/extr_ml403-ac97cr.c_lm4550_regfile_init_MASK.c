
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int def; int value; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 64; VAR_2++)
  if (VAR_1[VAR_2].flag & VAR_0)
   VAR_1[VAR_2].value = VAR_1[VAR_2].def;
}
