
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int * func; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

void
FUNC_1(int VAR_8)
{
 u_int VAR_9;

 if(VAR_2)
  FUNC_0(VAR_3, "poll_stop_timer(%d)", VAR_8);

 VAR_6[VAR_8].func = ((void*)0);
 VAR_7--;

 VAR_1 = 1;

 if(!VAR_0)
  return;

 for(VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  if(VAR_4[VAR_9] == VAR_8) {
   VAR_4[VAR_9] = -1;
   break;
  }
}
