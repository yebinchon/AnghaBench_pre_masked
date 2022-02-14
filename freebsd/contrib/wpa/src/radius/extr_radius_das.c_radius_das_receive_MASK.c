
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wpabuf {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_4__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int code; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {TYPE_1__ v4; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct radius_das_data {unsigned int time_window; int sock; int shared_secret_len; int shared_secret; scalar_t__ require_event_timestamp; int require_message_authenticator; TYPE_3__ client_addr; } ;
struct os_time {scalar_t__ sec; } ;
typedef int socklen_t ;
typedef int from ;
typedef int buf ;
typedef int abuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct os_time*) ;
 int FUNC_5 (char*,int ,int) ;
 struct radius_msg* FUNC_6 (struct radius_das_data*,struct radius_msg*,char*,int) ;
 struct radius_msg* FUNC_7 (struct radius_das_data*,struct radius_msg*,char*,int) ;
 int FUNC_8 (struct radius_msg*,int ,scalar_t__) ;
 int FUNC_9 (struct radius_msg*) ;
 scalar_t__ FUNC_10 (struct radius_msg*,int ,int ,struct radius_hdr*) ;
 int FUNC_11 (struct radius_msg*) ;
 int FUNC_12 (struct radius_msg*,int ,int *,int) ;
 struct wpabuf* FUNC_13 (struct radius_msg*) ;
 struct radius_hdr* FUNC_14 (struct radius_msg*) ;
 struct radius_msg* FUNC_15 (int *,int) ;
 scalar_t__ FUNC_16 (struct radius_msg*,int ,int ,int ) ;
 int FUNC_17 (int,int *,int,int ,struct sockaddr*,int*) ;
 int FUNC_18 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_20 (int ,char*,...) ;
 int FUNC_21 (struct wpabuf*) ;
 int FUNC_22 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_23(int VAR_6, void *VAR_7, void *VAR_8)
{
 struct radius_das_data *VAR_9 = VAR_7;
 u8 VAR_10[1500];
 union {
  struct sockaddr_storage ss;
  struct sockaddr_in sin;



 } VAR_11;
 char VAR_12[50];
 int VAR_13 = 0;
 socklen_t VAR_14;
 int VAR_15;
 struct radius_msg *VAR_16, *VAR_17 = ((void*)0);
 struct radius_hdr *VAR_18;
 struct wpabuf *VAR_19;
 u32 VAR_20;
 int VAR_21;
 struct os_time VAR_22;

 VAR_14 = sizeof(VAR_11);
 VAR_15 = FUNC_17(VAR_6, VAR_10, sizeof(VAR_10), 0,
         (struct sockaddr *) &VAR_11.ss, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_20(VAR_1, "DAS: recvfrom: %s", FUNC_19(VAR_4));
  return;
 }

 FUNC_5(VAR_12, FUNC_1(VAR_11.sin.sin_addr), sizeof(VAR_12));
 VAR_13 = FUNC_3(VAR_11.sin.sin_port);

 FUNC_20(VAR_0, "DAS: Received %d bytes from %s:%d",
     VAR_15, VAR_12, VAR_13);
 if (VAR_9->client_addr.u.v4.s_addr &&
     VAR_9->client_addr.u.v4.s_addr != VAR_11.sin.sin_addr.s_addr) {
  FUNC_20(VAR_0, "DAS: Drop message from unknown client");
  return;
 }

 VAR_16 = FUNC_15(VAR_10, VAR_15);
 if (VAR_16 == ((void*)0)) {
  FUNC_20(VAR_0, "DAS: Parsing incoming RADIUS packet "
      "from %s:%d failed", VAR_12, VAR_13);
  return;
 }

 if (VAR_5 <= VAR_2)
  FUNC_9(VAR_16);

 if (FUNC_16(VAR_16, VAR_9->shared_secret,
           VAR_9->shared_secret_len,
           VAR_9->require_message_authenticator)) {
  FUNC_20(VAR_0,
      "DAS: Invalid authenticator or Message-Authenticator in packet from %s:%d - drop",
      VAR_12, VAR_13);
  goto fail;
 }

 FUNC_4(&VAR_22);
 VAR_21 = FUNC_12(VAR_16, VAR_3,
      (u8 *) &VAR_20, 4);
 if (VAR_21 == 4) {
  u32 VAR_23 = FUNC_2(VAR_20);
  if ((unsigned int) FUNC_0((int) (VAR_22.sec - VAR_23)) >
      VAR_9->time_window) {
   FUNC_20(VAR_0, "DAS: Unacceptable "
       "Event-Timestamp (%u; local time %u) in "
       "packet from %s:%d - drop",
       VAR_23, (unsigned int) VAR_22.sec,
       VAR_12, VAR_13);
   goto fail;
  }
 } else if (VAR_9->require_event_timestamp) {
  FUNC_20(VAR_0, "DAS: Missing Event-Timestamp in packet "
      "from %s:%d - drop", VAR_12, VAR_13);
  goto fail;
 }

 VAR_18 = FUNC_14(VAR_16);

 switch (VAR_18->code) {
 case 128:
  VAR_17 = FUNC_7(VAR_9, VAR_16, VAR_12, VAR_13);
  break;
 case 129:
  VAR_17 = FUNC_6(VAR_9, VAR_16, VAR_12, VAR_13);
  break;
 default:
  FUNC_20(VAR_0, "DAS: Unexpected RADIUS code %u in "
      "packet from %s:%d",
      VAR_18->code, VAR_12, VAR_13);
 }

 if (VAR_17) {
  FUNC_20(VAR_0, "DAS: Reply to %s:%d", VAR_12, VAR_13);

  if (!FUNC_8(VAR_17,
            VAR_3,
            VAR_22.sec)) {
   FUNC_20(VAR_0, "DAS: Failed to add "
       "Event-Timestamp attribute");
  }

  if (FUNC_10(VAR_17, VAR_9->shared_secret,
            VAR_9->shared_secret_len, VAR_18) <
      0) {
   FUNC_20(VAR_0, "DAS: Failed to add "
       "Message-Authenticator attribute");
  }

  if (VAR_5 <= VAR_2)
   FUNC_9(VAR_17);

  VAR_19 = FUNC_13(VAR_17);
  VAR_21 = FUNC_18(VAR_9->sock, FUNC_21(VAR_19),
        FUNC_22(VAR_19), 0,
        (struct sockaddr *) &VAR_11.ss, VAR_14);
  if (VAR_21 < 0) {
   FUNC_20(VAR_1, "DAS: sendto(to %s:%d): %s",
       VAR_12, VAR_13, FUNC_19(VAR_4));
  }
 }

fail:
 FUNC_11(VAR_16);
 FUNC_11(VAR_17);
}
