
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vtb_size; scalar_t__ vtb_type; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,void*,int) ;
 int FUNC_1 (int,scalar_t__,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(sc_vtb_t *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_2 + VAR_3 > VAR_1->vtb_size)
  VAR_3 = VAR_1->vtb_size - VAR_2;

 if (VAR_1->vtb_type == VAR_0)
  FUNC_1(VAR_5 | VAR_4, FUNC_2(VAR_1, VAR_2), VAR_3);
 else

  FUNC_0(VAR_5 | VAR_4, (void *)FUNC_2(VAR_1, VAR_2), VAR_3);
}
