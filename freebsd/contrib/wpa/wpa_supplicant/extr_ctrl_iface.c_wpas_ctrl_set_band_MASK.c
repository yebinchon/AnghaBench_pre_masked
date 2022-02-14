
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int initiator; } ;
union wpa_event_data {TYPE_1__ channel_list_changed; } ;
struct wpa_supplicant {int setband; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (union wpa_event_data*,int ,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,union wpa_event_data*) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_6, char *VAR_7)
{
 union wpa_event_data VAR_8;

 if (FUNC_1(VAR_7, "AUTO") == 0)
  VAR_6->setband = VAR_5;
 else if (FUNC_1(VAR_7, "5G") == 0)
  VAR_6->setband = VAR_4;
 else if (FUNC_1(VAR_7, "2G") == 0)
  VAR_6->setband = VAR_3;
 else
  return -1;

 if (FUNC_2(VAR_6, VAR_6->setband) == 0) {
  FUNC_0(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.channel_list_changed.initiator = VAR_1;
  VAR_8.channel_list_changed.type = VAR_2;
  FUNC_3(VAR_6, VAR_0, &VAR_8);
 }

 return 0;
}
