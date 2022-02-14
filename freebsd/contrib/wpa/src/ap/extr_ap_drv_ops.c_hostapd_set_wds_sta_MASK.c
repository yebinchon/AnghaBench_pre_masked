
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {int drv_priv; TYPE_2__* driver; TYPE_1__* conf; } ;
struct TYPE_4__ {int (* set_wds_sta ) (int ,int const*,int,int,char const*,char*) ;} ;
struct TYPE_3__ {char* wds_bridge; char* bridge; } ;


 int FUNC_0 (int ,int const*,int,int,char const*,char*) ;

int FUNC_1(struct hostapd_data *VAR_0, char *VAR_1,
   const u8 *VAR_2, int VAR_3, int VAR_4)
{
 const char *VAR_5 = ((void*)0);

 if (VAR_0->driver == ((void*)0) || VAR_0->driver->set_wds_sta == ((void*)0))
  return -1;
 if (VAR_0->conf->wds_bridge[0])
  VAR_5 = VAR_0->conf->wds_bridge;
 else if (VAR_0->conf->bridge[0])
  VAR_5 = VAR_0->conf->bridge;
 return VAR_0->driver->set_wds_sta(VAR_0->drv_priv, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_1);
}
