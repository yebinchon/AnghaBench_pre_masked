
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int state; int ppc_lock; } ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(device_t VAR_1)
{
 struct ppb_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->ppc_lock, VAR_0);
 return (VAR_2->state);
}
