
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_4__ {scalar_t__ vtb_type; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,int) ;

void
FUNC_2(sc_vtb_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{

 if (VAR_1->vtb_type == VAR_0)
  FUNC_1(FUNC_0(VAR_1, VAR_2), VAR_4 | VAR_3);
 else

  *(u_int16_t *)FUNC_0(VAR_1, VAR_2) = VAR_4 | VAR_3;
}
