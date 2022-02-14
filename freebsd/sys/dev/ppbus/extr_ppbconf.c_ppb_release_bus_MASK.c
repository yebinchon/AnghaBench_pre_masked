
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int valid; int mode; } ;
struct ppb_device {TYPE_1__ ctx; } ;
struct ppb_data {scalar_t__ ppb_owner; int ppc_lock; } ;
typedef scalar_t__ device_t ;


 struct ppb_data* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ppb_data*) ;

int
FUNC_5(device_t VAR_2, device_t VAR_3)
{
 struct ppb_data *VAR_4 = FUNC_0(VAR_2);
 struct ppb_device *VAR_5 = (struct ppb_device *)FUNC_1(VAR_3);

 FUNC_2(VAR_4->ppc_lock, VAR_1);
 if (VAR_4->ppb_owner != VAR_3)
  return (VAR_0);


 VAR_5->ctx.mode = FUNC_3(VAR_2);


 VAR_5->ctx.valid = 1;

 VAR_4->ppb_owner = 0;


 FUNC_4(VAR_4);

 return (0);
}
