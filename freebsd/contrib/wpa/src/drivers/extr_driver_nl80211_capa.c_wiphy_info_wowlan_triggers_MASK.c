
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int any; int disconnect; int magic_pkt; int gtk_rekey_failure; int eap_identity_req; int four_way_handshake; int rfkill_release; } ;
struct wpa_driver_capa {TYPE_1__ wowlan_triggers; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (struct nlattr**,int ,struct nlattr*,int *) ;

__attribute__((used)) static void FUNC_1(struct wpa_driver_capa *VAR_8,
           struct nlattr *VAR_9)
{
 struct nlattr *VAR_10[VAR_0 + 1];

 if (VAR_9 == ((void*)0))
  return;

 if (FUNC_0(VAR_10, VAR_0,
        VAR_9, ((void*)0)))
  return;

 if (VAR_10[VAR_2])
  VAR_8->wowlan_triggers.any = 1;
 if (VAR_10[VAR_3])
  VAR_8->wowlan_triggers.disconnect = 1;
 if (VAR_10[VAR_6])
  VAR_8->wowlan_triggers.magic_pkt = 1;
 if (VAR_10[VAR_5])
  VAR_8->wowlan_triggers.gtk_rekey_failure = 1;
 if (VAR_10[VAR_4])
  VAR_8->wowlan_triggers.eap_identity_req = 1;
 if (VAR_10[VAR_1])
  VAR_8->wowlan_triggers.four_way_handshake = 1;
 if (VAR_10[VAR_7])
  VAR_8->wowlan_triggers.rfkill_release = 1;
}
