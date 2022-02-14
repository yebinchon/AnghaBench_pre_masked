
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aux_mux_port; } ;
typedef int KBDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;

int
FUNC_2(KBDC VAR_3, int VAR_4)
{

 if (!FUNC_0(VAR_3))
  return (VAR_0);

 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return (VAR_0);

 FUNC_1(VAR_3)->aux_mux_port = VAR_4;

 return (VAR_2);
}
