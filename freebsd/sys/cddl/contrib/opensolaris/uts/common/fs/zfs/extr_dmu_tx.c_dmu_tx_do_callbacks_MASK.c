
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_5__ {int dcb_data; int (* dcb_func ) (int ,int) ;} ;
typedef TYPE_1__ dmu_tx_callback_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(list_t *VAR_0, int VAR_1)
{
 dmu_tx_callback_t *VAR_2;

 while ((VAR_2 = FUNC_1(VAR_0)) != ((void*)0)) {
  FUNC_2(VAR_0, VAR_2);
  VAR_2->dcb_func(VAR_2->dcb_data, VAR_1);
  FUNC_0(VAR_2, sizeof (dmu_tx_callback_t));
 }
}
