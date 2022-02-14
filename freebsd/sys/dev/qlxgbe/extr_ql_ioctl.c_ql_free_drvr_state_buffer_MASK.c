
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * drvr_state; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(qla_host_t *VAR_1)
{
 if (VAR_1->hw.drvr_state != ((void*)0))
  FUNC_0(VAR_1->hw.drvr_state, VAR_0);
 return;
}
