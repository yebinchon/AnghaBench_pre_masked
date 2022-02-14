
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppb_data {int ppc_lock; } ;
struct callout {int dummy; } ;
typedef int device_t ;


 struct ppb_data* FUNC_0 (int ) ;
 int FUNC_1 (struct callout*,int ,int) ;

void
FUNC_2(device_t VAR_0, struct callout *VAR_1, int VAR_2)
{
 struct ppb_data *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_3->ppc_lock, VAR_2);
}
