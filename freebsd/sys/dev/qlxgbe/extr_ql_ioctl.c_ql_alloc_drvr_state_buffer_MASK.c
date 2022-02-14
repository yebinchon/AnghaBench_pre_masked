
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int * drvr_state; } ;
struct TYPE_6__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(qla_host_t *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_2(VAR_2);

 VAR_2->hw.drvr_state = FUNC_1(VAR_3, VAR_1, VAR_0);

 if (VAR_2->hw.drvr_state != ((void*)0))
  FUNC_0(VAR_2->hw.drvr_state, VAR_3);

 return;
}
