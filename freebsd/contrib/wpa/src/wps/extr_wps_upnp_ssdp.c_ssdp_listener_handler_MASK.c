
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upnp_wps_device_sm {int ssdp_sd; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int buf ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (int ,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_7 (struct upnp_wps_device_sm*,struct sockaddr_in*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_11(int VAR_2, void *VAR_3, void *VAR_4)
{
 struct upnp_wps_device_sm *VAR_5 = VAR_4;
 struct sockaddr_in VAR_6;
 socklen_t VAR_7;
 int VAR_8;
 char VAR_9[VAR_1], *VAR_10;

 VAR_7 = sizeof(VAR_6);
 VAR_8 = FUNC_6(VAR_5->ssdp_sd, VAR_9, sizeof(VAR_9) - 1, 0,
    (struct sockaddr *) &VAR_6, &VAR_7);
 if (VAR_8 <= 0)
  return;
 VAR_9[VAR_8] = '\0';

 if (FUNC_8(VAR_9, "NOTIFY ")) {




  return;
 }

 VAR_10 = FUNC_3(VAR_9, '\n');
 if (VAR_10)
  *VAR_10 = '\0';
 FUNC_10(VAR_0, "WPS UPnP: Received SSDP packet from %s:%d: "
     "%s", FUNC_0(VAR_6.sin_addr), FUNC_2(VAR_6.sin_port), VAR_9);
 if (VAR_10)
  *VAR_10 = '\n';


 if (FUNC_5(VAR_9, "M-SEARCH", FUNC_4("M-SEARCH")) == 0 &&
     !FUNC_1(VAR_9[FUNC_9("M-SEARCH")])) {
  FUNC_7(VAR_5, &VAR_6, VAR_9);
  return;
 }


}
