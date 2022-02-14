
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {TYPE_1__* conf; } ;
struct hostapd_channel_data {int chan; } ;
struct TYPE_4__ {int num; } ;
struct TYPE_3__ {TYPE_2__ acs_ch_list; } ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(struct hostapd_iface *VAR_0,
     struct hostapd_channel_data *VAR_1)
{
 if (!VAR_0->conf->acs_ch_list.num)
  return 1;

 return FUNC_0(&VAR_0->conf->acs_ch_list, VAR_1->chan);
}
