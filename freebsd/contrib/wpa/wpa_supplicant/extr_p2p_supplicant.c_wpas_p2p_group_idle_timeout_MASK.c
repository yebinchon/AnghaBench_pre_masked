
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ p2p_group_idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;
 int FUNC_2 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2;

 if (VAR_4->conf->p2p_group_idle == 0 && !FUNC_2(VAR_4)) {
  FUNC_0(VAR_0, "P2P: Ignore group idle timeout - "
      "disabled");
  return;
 }

 FUNC_0(VAR_0, "P2P: Group idle timeout reached - terminate "
     "group");
 FUNC_1(VAR_4, VAR_1);
}
