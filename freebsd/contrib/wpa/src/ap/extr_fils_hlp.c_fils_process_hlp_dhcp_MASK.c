
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct sta_info {struct wpabuf* hlp_dhcp_discover; } ;
struct TYPE_16__ {scalar_t__ s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_8__ sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostapd_data {int dhcp_sock; TYPE_7__* conf; } ;
struct dhcp_data {int op; scalar_t__ relay_ip; int xid; int hops; int hlen; int htype; } ;
typedef scalar_t__ ssize_t ;
typedef int addr ;
struct TYPE_12__ {scalar_t__ s_addr; } ;
struct TYPE_13__ {TYPE_4__ v4; } ;
struct TYPE_14__ {scalar_t__ af; TYPE_5__ u; } ;
struct TYPE_9__ {scalar_t__ s_addr; } ;
struct TYPE_10__ {TYPE_1__ v4; } ;
struct TYPE_11__ {scalar_t__ af; TYPE_2__ u; } ;
struct TYPE_15__ {scalar_t__ dhcp_rapid_commit_proxy; scalar_t__ dhcp_server_port; TYPE_6__ dhcp_server; TYPE_3__ own_ip_addr; scalar_t__ dhcp_relay_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;

 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ,int *,struct hostapd_data*) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_8__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct dhcp_data*,scalar_t__ const*,size_t) ;
 int FUNC_10 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_11 (int,struct dhcp_data*,size_t,int ,struct sockaddr const*,int) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_15 (int ,char*,...) ;
 struct wpabuf* FUNC_16 (size_t) ;
 int FUNC_17 (struct wpabuf*) ;
 struct dhcp_data* FUNC_18 (struct wpabuf*,size_t) ;

__attribute__((used)) static int FUNC_19(struct hostapd_data *VAR_11,
     struct sta_info *VAR_12,
     const u8 *VAR_13, size_t VAR_14)
{
 const struct dhcp_data *VAR_15;
 struct wpabuf *VAR_16;
 struct dhcp_data *VAR_17;
 u8 VAR_18 = 0;
 int VAR_19 = 0;
 const u8 *VAR_20 = VAR_13, *VAR_21;
 struct sockaddr_in VAR_22;
 ssize_t VAR_23;

 if (VAR_14 < sizeof(*VAR_15))
  return 0;
 VAR_15 = (const struct dhcp_data *) VAR_20;
 VAR_21 = VAR_20 + VAR_14;
 FUNC_15(VAR_6,
     "FILS: HLP request DHCP: op=%u htype=%u hlen=%u hops=%u xid=0x%x",
     VAR_15->op, VAR_15->htype, VAR_15->hlen, VAR_15->hops,
     FUNC_7(VAR_15->xid));
 VAR_20 += sizeof(*VAR_15);
 if (VAR_15->op != 1)
  return 0;

 if (VAR_21 - VAR_20 < 4)
  return 0;
 if (FUNC_0(VAR_20) != VAR_2) {
  FUNC_15(VAR_6, "FILS: HLP - no DHCP magic");
  return 0;
 }
 VAR_20 += 4;

 FUNC_14(VAR_6, "FILS: HLP - DHCP options", VAR_20, VAR_21 - VAR_20);
 while (VAR_20 < VAR_21 && *VAR_20 != VAR_3) {
  u8 VAR_24, VAR_25;

  VAR_24 = *VAR_20++;
  if (VAR_24 == VAR_4)
   continue;
  if (VAR_20 >= VAR_21)
   break;
  VAR_25 = *VAR_20++;
  if (VAR_25 > VAR_21 - VAR_20)
   break;

  switch (VAR_24) {
  case 129:
   if (VAR_25 > 0)
    VAR_18 = VAR_20[0];
   break;
  case 128:
   VAR_19 = 1;
   break;
  }
  VAR_20 += VAR_25;
 }

 FUNC_15(VAR_6, "FILS: HLP - DHCP message type %u", VAR_18);
 if (VAR_18 != VAR_1)
  return 0;

 if (VAR_11->conf->dhcp_server.af != VAR_0 ||
     VAR_11->conf->dhcp_server.u.v4.s_addr == 0) {
  FUNC_15(VAR_6,
      "FILS: HLP - no DHCPv4 server configured - drop request");
  return 0;
 }

 if (VAR_11->conf->own_ip_addr.af != VAR_0 ||
     VAR_11->conf->own_ip_addr.u.v4.s_addr == 0) {
  FUNC_15(VAR_6,
      "FILS: HLP - no IPv4 own_ip_addr configured - drop request");
  return 0;
 }

 if (VAR_11->dhcp_sock < 0) {
  int VAR_26;

  VAR_26 = FUNC_12(VAR_0, VAR_8, 0);
  if (VAR_26 < 0) {
   FUNC_15(VAR_7,
       "FILS: Failed to open DHCP socket: %s",
       FUNC_13(VAR_9));
   return 0;
  }

  if (VAR_11->conf->dhcp_relay_port) {
   FUNC_10(&VAR_22, 0, sizeof(VAR_22));
   VAR_22.sin_family = VAR_0;
   VAR_22.sin_addr.s_addr =
    VAR_11->conf->own_ip_addr.u.v4.s_addr;
   VAR_22.sin_port = FUNC_5(VAR_11->conf->dhcp_relay_port);
   if (FUNC_1(VAR_26, (struct sockaddr *) &VAR_22, sizeof(VAR_22))) {
    FUNC_15(VAR_7,
        "FILS: Failed to bind DHCP socket: %s",
        FUNC_13(VAR_9));
    FUNC_2(VAR_26);
    return 0;
   }
  }
  if (FUNC_3(VAR_26, VAR_5,
     VAR_10, ((void*)0), VAR_11)) {
   FUNC_2(VAR_26);
   return 0;
  }

  VAR_11->dhcp_sock = VAR_26;
 }

 VAR_16 = FUNC_16(VAR_14);
 if (!VAR_16)
  return 0;
 VAR_17 = FUNC_18(VAR_16, VAR_14);
 FUNC_9(VAR_17, VAR_13, VAR_14);
 VAR_17->relay_ip = VAR_11->conf->own_ip_addr.u.v4.s_addr;
 FUNC_10(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.sin_family = VAR_0;
 VAR_22.sin_addr.s_addr = VAR_11->conf->dhcp_server.u.v4.s_addr;
 VAR_22.sin_port = FUNC_5(VAR_11->conf->dhcp_server_port);
 VAR_23 = FUNC_11(VAR_11->dhcp_sock, VAR_17, VAR_14, 0,
       (const struct sockaddr *) &VAR_22, sizeof(VAR_22));
 if (VAR_23 < 0) {
  FUNC_15(VAR_7, "FILS: DHCP sendto failed: %s",
      FUNC_13(VAR_9));
  FUNC_17(VAR_16);

  FUNC_4(VAR_11->dhcp_sock);
  FUNC_2(VAR_11->dhcp_sock);
  VAR_11->dhcp_sock = -1;
  return 0;
 }

 FUNC_15(VAR_6,
     "FILS: HLP relayed DHCP request to server %s:%d (rapid_commit=%d)",
     FUNC_6(VAR_22.sin_addr), FUNC_8(VAR_22.sin_port),
     VAR_19);
 if (VAR_11->conf->dhcp_rapid_commit_proxy && VAR_19) {



  FUNC_15(VAR_6,
      "FILS: Store DHCPDISCOVER for rapid commit proxy");
  FUNC_17(VAR_12->hlp_dhcp_discover);
  VAR_12->hlp_dhcp_discover = VAR_16;
 } else {
  FUNC_17(VAR_16);
 }

 return 1;
}
