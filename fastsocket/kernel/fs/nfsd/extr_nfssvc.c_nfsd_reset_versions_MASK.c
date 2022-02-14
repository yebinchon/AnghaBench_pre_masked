
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * pg_vers; } ;
struct TYPE_3__ {scalar_t__* pg_vers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;
 TYPE_1__ VAR_6 ;
 scalar_t__* VAR_7 ;

void FUNC_0(void)
{
 int VAR_8 = 0;
 int VAR_9;

 for (VAR_9 = VAR_2; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_6.pg_vers[VAR_9])
   VAR_8 = 1;
 }

 if (!VAR_8) {
  for (VAR_9 = VAR_2; VAR_9 < VAR_3; VAR_9++)
   VAR_6.pg_vers[VAR_9] = VAR_7[VAR_9];





 }
}
