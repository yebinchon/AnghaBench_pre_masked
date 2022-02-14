
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct upnp_wps_device_sm {int multicast_sd; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sin_port; int sin_addr; } ;
struct advertisement_state_machine {int state; TYPE_1__ client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,void (*) (void*,void*),struct upnp_wps_device_sm*,struct advertisement_state_machine*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct advertisement_state_machine*) ;
 struct wpabuf* FUNC_3 (struct upnp_wps_device_sm*,struct advertisement_state_machine*,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_11(void *VAR_3,
            void *VAR_4)
{
 struct advertisement_state_machine *VAR_5 = VAR_4;
 struct upnp_wps_device_sm *VAR_6 = VAR_3;
 struct wpabuf *VAR_7;
 int VAR_8 = 100;
 int VAR_9 = 0;
 int VAR_10 = 0;
 FUNC_7(VAR_1, "WPS UPnP: M-SEARCH reply state=%d (%s:%d)",
     VAR_5->state, FUNC_1(VAR_5->client.sin_addr),
     FUNC_4(VAR_5->client.sin_port));
 VAR_7 = FUNC_3(VAR_6, VAR_5, &VAR_10);
 if (VAR_7 == ((void*)0))
  return;





 if (FUNC_5(VAR_6->multicast_sd, FUNC_9(VAR_7), FUNC_10(VAR_7), 0,
     (struct sockaddr *) &VAR_5->client, sizeof(VAR_5->client)) < 0) {
  FUNC_7(VAR_0, "WPS UPnP: M-SEARCH reply sendto "
      "errno %d (%s) for %s:%d",
      VAR_2, FUNC_6(VAR_2),
      FUNC_1(VAR_5->client.sin_addr),
      FUNC_4(VAR_5->client.sin_port));

 }
 FUNC_8(VAR_7);
 if (VAR_10) {
  FUNC_7(VAR_0, "WPS UPnP: M-SEARCH reply done");
  FUNC_2(VAR_5);
  return;
 }
 VAR_5->state++;

 FUNC_7(VAR_1, "WPS UPnP: M-SEARCH reply in %d.%03d sec",
     VAR_9, VAR_8);
 FUNC_0(VAR_9, VAR_8,
          FUNC_11, VAR_6, VAR_5);
}
