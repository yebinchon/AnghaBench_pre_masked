
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_vmaster_mute_hook {int mute_mode; TYPE_2__* codec; int (* hook ) (TYPE_2__*,int) ;int sw_kctl; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ shutdown; } ;



 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;

void FUNC_2(struct hda_vmaster_mute_hook *VAR_0)
{
 if (!VAR_0->hook || !VAR_0->codec)
  return;



 if (VAR_0->codec->bus->shutdown)
  return;
 switch (VAR_0->mute_mode) {
 case 128:
  FUNC_0(VAR_0->sw_kctl);
  break;
 default:
  VAR_0->hook(VAR_0->codec, VAR_0->mute_mode);
  break;
 }
}
