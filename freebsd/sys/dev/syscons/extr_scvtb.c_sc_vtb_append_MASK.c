
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_6__ {scalar_t__ vtb_type; int vtb_size; int vtb_tail; } ;
typedef TYPE_1__ sc_vtb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

void
FUNC_5(sc_vtb_t *VAR_2, int VAR_3, sc_vtb_t *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4->vtb_type != VAR_1)
  return;

 while (VAR_5 > 0) {
  VAR_6 = FUNC_2(VAR_5, VAR_4->vtb_size - VAR_4->vtb_tail);

  if (VAR_2->vtb_type == VAR_0)
   FUNC_1(FUNC_3(VAR_2, VAR_3),
         FUNC_3(VAR_4, VAR_4->vtb_tail),
         VAR_6*sizeof(u_int16_t));
  else

   FUNC_0((void *)FUNC_3(VAR_2, VAR_3),
         (void *)FUNC_3(VAR_4, VAR_4->vtb_tail),
         VAR_6*sizeof(u_int16_t));
  VAR_3 += VAR_6;
  VAR_5 -= VAR_6;
  VAR_4->vtb_tail = FUNC_4(VAR_4, VAR_4->vtb_tail, VAR_6);
 }
}
