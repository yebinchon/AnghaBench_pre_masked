
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aux_mux_enabled; } ;
typedef int KBDC ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(KBDC VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 >= 0) {
  FUNC_0(VAR_1)->aux_mux_enabled = VAR_0;
  FUNC_1(VAR_1, 0);
 }

 return (VAR_2);
}
