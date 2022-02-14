
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ks_inq_length; int ks_flags; int ks_timo; } ;
typedef TYPE_1__ kbdmux_state_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,void (*) (void*),TYPE_1__*) ;

void
FUNC_6(void *VAR_3)
{
 kbdmux_state_t *VAR_4 = (kbdmux_state_t *) VAR_3;

 FUNC_0(VAR_4, VAR_0);

 if (FUNC_4(&VAR_4->ks_timo))
  return;

 if (!FUNC_2(&VAR_4->ks_timo))
  return;

 FUNC_3(&VAR_4->ks_timo);


 if (VAR_4->ks_inq_length > 0 && !(VAR_4->ks_flags & VAR_1) &&
     FUNC_1(VAR_4) == 0)
  VAR_4->ks_flags |= VAR_1;


 FUNC_5(&VAR_4->ks_timo, VAR_2, FUNC_6, VAR_4);
}
