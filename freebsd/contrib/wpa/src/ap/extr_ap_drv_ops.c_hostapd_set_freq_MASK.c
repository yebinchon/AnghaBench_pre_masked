
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_hw_modes {int * he_capab; int vht_capab; } ;
struct hostapd_freq_params {int dummy; } ;
struct hostapd_data {int drv_priv; TYPE_2__* driver; TYPE_1__* iface; } ;
typedef enum hostapd_hw_mode { ____Placeholder_hostapd_hw_mode } hostapd_hw_mode ;
struct TYPE_4__ {int (* set_freq ) (int ,struct hostapd_freq_params*) ;} ;
struct TYPE_3__ {struct hostapd_hw_modes* current_mode; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_freq_params*,int,int,int,int,int,int,int,int,int,int,int ,int *) ;
 int FUNC_1 (int ,struct hostapd_freq_params*) ;

int FUNC_2(struct hostapd_data *VAR_1, enum hostapd_hw_mode VAR_2,
       int VAR_3, int VAR_4, int VAR_5, int VAR_6,
       int VAR_7,
       int VAR_8, int VAR_9,
       int VAR_10, int VAR_11)
{
 struct hostapd_freq_params VAR_12;
 struct hostapd_hw_modes *VAR_13 = VAR_1->iface->current_mode;

 if (FUNC_0(&VAR_12, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_8,
        VAR_9,
        VAR_10, VAR_11,
        VAR_13 ? VAR_13->vht_capab : 0,
        VAR_13 ?
        &VAR_13->he_capab[VAR_0] : ((void*)0)))
  return -1;

 if (VAR_1->driver == ((void*)0))
  return 0;
 if (VAR_1->driver->set_freq == ((void*)0))
  return 0;
 return VAR_1->driver->set_freq(VAR_1->drv_priv, &VAR_12);
}
