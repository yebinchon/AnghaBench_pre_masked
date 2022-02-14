
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int msearch_replies; } ;
struct sockaddr_in {int dummy; } ;
struct advertisement_state_machine {int list; int client; scalar_t__ state; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct upnp_wps_device_sm*,struct advertisement_state_machine*) ;
 scalar_t__ FUNC_3 (int,int,int ,struct upnp_wps_device_sm*,struct advertisement_state_machine*) ;
 int VAR_4 ;
 int FUNC_4 (struct advertisement_state_machine*) ;
 int FUNC_5 (int *,struct sockaddr_in*,int) ;
 int FUNC_6 () ;
 struct advertisement_state_machine* FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(struct upnp_wps_device_sm *VAR_5,
          struct sockaddr_in *VAR_6,
          int VAR_7)
{
 struct advertisement_state_machine *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(&VAR_5->msearch_replies);
 FUNC_8(VAR_2, "WPS UPnP: M-SEARCH reply start (%d "
     "outstanding)", VAR_11);
 if (VAR_11 >= VAR_0) {
  FUNC_8(VAR_3, "WPS UPnP: Too many outstanding "
      "M-SEARCH replies");
  return;
 }

 VAR_8 = FUNC_7(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return;
 VAR_8->type = VAR_1;
 VAR_8->state = 0;
 FUNC_5(&VAR_8->client, VAR_6, sizeof(*VAR_6));

 VAR_10 = (1000 * VAR_7 * (FUNC_6() & 0xFF)) >> 8;
 VAR_9 = VAR_10 / 1000;
 VAR_10 = VAR_10 % 1000;
 if (FUNC_3(VAR_9, VAR_10,
       VAR_4, VAR_5,
       VAR_8)) {

  goto fail;
 }

 FUNC_0(&VAR_5->msearch_replies, &VAR_8->list);
 return;

fail:
 FUNC_8(VAR_3, "WPS UPnP: M-SEARCH reply failure!");
 FUNC_2(VAR_4, VAR_5, VAR_8);
 FUNC_4(VAR_8);
}
