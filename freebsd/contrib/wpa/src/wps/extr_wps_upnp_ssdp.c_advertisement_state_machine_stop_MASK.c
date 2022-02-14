
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct advertisement_state_machine {scalar_t__ state; int type; } ;
struct upnp_wps_device_sm {scalar_t__ multicast_sd; struct advertisement_state_machine advertisement; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int dest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,struct upnp_wps_device_sm*) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct wpabuf* FUNC_3 (struct upnp_wps_device_sm*,struct advertisement_state_machine*,int*) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;

void FUNC_11(struct upnp_wps_device_sm *VAR_7,
          int VAR_8)
{
 struct advertisement_state_machine *VAR_9 = &VAR_7->advertisement;
 int VAR_10 = 0;
 struct wpabuf *VAR_11;
 struct sockaddr_in VAR_12;

 FUNC_0(VAR_5, ((void*)0), VAR_7);
 if (!VAR_8 || VAR_7->multicast_sd < 0)
  return;

 VAR_9->type = VAR_0;
 VAR_9->state = 0;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sin_family = VAR_1;
 VAR_12.sin_addr.s_addr = FUNC_2(VAR_3);
 VAR_12.sin_port = FUNC_1(VAR_4);

 while (!VAR_10) {
  VAR_11 = FUNC_3(VAR_7, VAR_9, &VAR_10);
  if (VAR_11 == ((void*)0))
   break;
  if (FUNC_5(VAR_7->multicast_sd, FUNC_9(VAR_11), FUNC_10(VAR_11),
      0, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0) {
   FUNC_7(VAR_2, "WPS UPnP: Advertisement sendto "
       "failed: %d (%s)", VAR_6, FUNC_6(VAR_6));
  }
  FUNC_8(VAR_11);
  VAR_9->state++;
 }
}
