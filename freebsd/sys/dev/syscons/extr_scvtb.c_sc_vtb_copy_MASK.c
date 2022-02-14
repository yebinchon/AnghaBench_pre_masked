
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_5__ {scalar_t__ vtb_type; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

void
FUNC_4(sc_vtb_t *VAR_1, int VAR_2, sc_vtb_t *VAR_3, int VAR_4, int VAR_5)
{


 if (VAR_3->vtb_type == VAR_0)
  FUNC_2(FUNC_3(VAR_1, VAR_2),
      FUNC_3(VAR_3, VAR_4),
      VAR_5*sizeof(u_int16_t));
 else if (VAR_1->vtb_type == VAR_0)
  FUNC_1(FUNC_3(VAR_1, VAR_2),
        FUNC_3(VAR_3, VAR_4),
        VAR_5*sizeof(u_int16_t));
 else

  FUNC_0((void *)FUNC_3(VAR_1, VAR_2),
        (void *)FUNC_3(VAR_3, VAR_4),
        VAR_5*sizeof(u_int16_t));
}
