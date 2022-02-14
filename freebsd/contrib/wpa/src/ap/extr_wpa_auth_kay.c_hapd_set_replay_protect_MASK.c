
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hostapd_data {int drv_priv; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_replay_protect ) (int ,int ,int ) ;} ;
typedef int Boolean ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, Boolean VAR_1, u32 VAR_2)
{
 struct hostapd_data *VAR_3 = VAR_0;

 if (!VAR_3->driver->set_replay_protect)
  return -1;
 return VAR_3->driver->set_replay_protect(VAR_3->drv_priv, VAR_1,
       VAR_2);
}
