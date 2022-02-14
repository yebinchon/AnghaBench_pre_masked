
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dcd_timeout_handle; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_6__ {scalar_t__ mode; TYPE_1__* sys; } ;
typedef TYPE_2__ cx_chan_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1 (cx_chan_t *VAR_3)
{
 drv_t *VAR_4 = VAR_3->sys;

 if (!VAR_4 || VAR_3->mode != VAR_0)
  return;



 FUNC_0 (&VAR_4->dcd_timeout_handle, VAR_2/2, VAR_1, VAR_4);
}
