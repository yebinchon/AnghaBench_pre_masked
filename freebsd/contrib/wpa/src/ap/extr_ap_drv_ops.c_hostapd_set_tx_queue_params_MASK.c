
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_tx_queue_params ) (int ,int,int,int,int,int) ;} ;


 int FUNC_0 (int ,int,int,int,int,int) ;

int FUNC_1(struct hostapd_data *VAR_0, int VAR_1, int VAR_2,
    int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_tx_queue_params == ((void*)0))
  return 0;
 return VAR_0->driver->set_tx_queue_params(VAR_0->drv_priv, VAR_1, VAR_2,
       VAR_3, VAR_4, VAR_5);
}
