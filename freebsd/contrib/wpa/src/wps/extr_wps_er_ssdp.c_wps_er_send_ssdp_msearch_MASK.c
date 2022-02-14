
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_er {int multicast_sd; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int dest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 struct wpabuf* FUNC_6 (int) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*,char*) ;

void FUNC_11(struct wps_er *VAR_5)
{
 struct wpabuf *VAR_6;
 struct sockaddr_in VAR_7;

 VAR_6 = FUNC_6(500);
 if (VAR_6 == ((void*)0))
  return;

 FUNC_10(VAR_6,
         "M-SEARCH * HTTP/1.1\r\n"
         "HOST: 239.255.255.250:1900\r\n"
         "MAN: \"ssdp:discover\"\r\n"
         "MX: 3\r\n"
         "ST: urn:schemas-wifialliance-org:device:WFADevice:1"
         "\r\n"
         "\r\n");

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.sin_family = VAR_0;
 VAR_7.sin_addr.s_addr = FUNC_1(VAR_2);
 VAR_7.sin_port = FUNC_0(VAR_3);

 if (FUNC_3(VAR_5->multicast_sd, FUNC_8(VAR_6), FUNC_9(VAR_6), 0,
     (struct sockaddr *) &VAR_7, sizeof(VAR_7)) < 0)
  FUNC_5(VAR_1, "WPS ER: M-SEARCH sendto failed: "
      "%d (%s)", VAR_4, FUNC_4(VAR_4));

 FUNC_7(VAR_6);
}
