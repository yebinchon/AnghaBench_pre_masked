
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tx_callbacks; } ;
typedef TYPE_1__ dmu_tx_t ;
struct TYPE_7__ {void* dcb_data; int * dcb_func; } ;
typedef TYPE_2__ dmu_tx_callback_t ;
typedef int dmu_tx_callback_func_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;

void
FUNC_2(dmu_tx_t *VAR_1, dmu_tx_callback_func_t *VAR_2, void *VAR_3)
{
 dmu_tx_callback_t *VAR_4;

 VAR_4 = FUNC_0(sizeof (dmu_tx_callback_t), VAR_0);

 VAR_4->dcb_func = VAR_2;
 VAR_4->dcb_data = VAR_3;

 FUNC_1(&VAR_1->tx_callbacks, VAR_4);
}
