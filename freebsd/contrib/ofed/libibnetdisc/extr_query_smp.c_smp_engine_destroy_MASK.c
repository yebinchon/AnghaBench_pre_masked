
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int umad_fd; int smps_on_wire; } ;
typedef TYPE_1__ smp_engine_t ;
typedef int ibnd_smp_t ;
typedef int cl_map_item_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

void FUNC_7(smp_engine_t * VAR_0)
{
 cl_map_item_t *VAR_1;
 ibnd_smp_t *VAR_2;


 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  FUNC_0("outstanding SMP's\n");
 for ( ; VAR_2; VAR_2 = FUNC_5(VAR_0))
  FUNC_4(VAR_2);


 VAR_1 = FUNC_2(&VAR_0->smps_on_wire);
 if (VAR_1 != FUNC_1(&VAR_0->smps_on_wire))
  FUNC_0("outstanding SMP's on wire\n");
 for ( ; VAR_1 != FUNC_1(&VAR_0->smps_on_wire);
      VAR_1 = FUNC_2(&VAR_0->smps_on_wire)) {
  FUNC_3(&VAR_0->smps_on_wire, VAR_1);
  FUNC_4(VAR_1);
 }

 FUNC_6(VAR_0->umad_fd);
}
