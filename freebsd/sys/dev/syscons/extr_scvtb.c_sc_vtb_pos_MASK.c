
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vtb_size; } ;
typedef TYPE_1__ sc_vtb_t ;



int
FUNC_0(sc_vtb_t *VAR_0, int VAR_1, int VAR_2)
{
 return ((VAR_1 + VAR_2 + VAR_0->vtb_size)%VAR_0->vtb_size);
}
