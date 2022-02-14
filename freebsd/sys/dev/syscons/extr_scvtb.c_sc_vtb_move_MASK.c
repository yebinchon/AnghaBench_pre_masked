
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_4__ {int vtb_size; scalar_t__ vtb_type; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(sc_vtb_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_2 + VAR_4 > VAR_1->vtb_size)
  VAR_4 = VAR_1->vtb_size - VAR_2;
 if (VAR_3 + VAR_4 > VAR_1->vtb_size)
  VAR_4 = VAR_1->vtb_size - VAR_3;
 if (VAR_4 <= 0)
  return;

 if (VAR_1->vtb_type == VAR_0)
  FUNC_1(FUNC_2(VAR_1, VAR_2),
    FUNC_2(VAR_1, VAR_3), VAR_4*sizeof(u_int16_t));
 else

  FUNC_0((void *)FUNC_2(VAR_1, VAR_2),
        (void *)FUNC_2(VAR_1, VAR_3), VAR_4*sizeof(u_int16_t));
}
