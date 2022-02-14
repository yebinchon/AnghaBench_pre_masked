
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int d_socket; char* d_name; int d_listenqueue; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

void
FUNC_0()
{
 if (VAR_2 == 0)
 {
  VAR_1[VAR_2].d_socket = -1;
  VAR_1[VAR_2].d_listenqueue = VAR_0;
  VAR_1[VAR_2].d_name = "Daemon0";
  VAR_2 = 1;
 }
}
