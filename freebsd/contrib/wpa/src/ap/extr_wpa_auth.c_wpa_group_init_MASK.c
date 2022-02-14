
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {int vlan_id; void* GInit; int GTK_len; void* GTKAuthenticator; } ;
struct TYPE_2__ {int wpa_group; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct wpa_group*) ;
 struct wpa_group* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_5 (struct wpa_authenticator*,struct wpa_group*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static struct wpa_group * FUNC_7(struct wpa_authenticator *VAR_5,
      int VAR_6, int VAR_7)
{
 struct wpa_group *VAR_8;

 VAR_8 = FUNC_1(sizeof(struct wpa_group));
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->GTKAuthenticator = VAR_4;
 VAR_8->vlan_id = VAR_6;
 VAR_8->GTK_len = FUNC_3(VAR_5->conf.wpa_group);

 if (FUNC_2() != 1) {
  FUNC_6(VAR_3, "WPA: Not enough entropy in random pool "
      "for secure operations - update keys later when "
      "the first station connects");
 }







 if (FUNC_4(VAR_5, VAR_8) < 0) {
  FUNC_6(VAR_2, "Failed to get random data for WPA "
      "initialization.");
  FUNC_0(VAR_8);
  return ((void*)0);
 }

 VAR_8->GInit = VAR_4;
 if (VAR_7) {
  FUNC_6(VAR_1, "WPA: Delay group state machine start "
      "until Beacon frames have been configured");

 } else {
  FUNC_5(VAR_5, VAR_8);
  VAR_8->GInit = VAR_0;
  FUNC_5(VAR_5, VAR_8);
 }

 return VAR_8;
}
