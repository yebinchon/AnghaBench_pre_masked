
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radius_rx_handler {int (* handler ) (struct radius_msg*,struct radius_msg*,int ,int ,int ) ;int data; } ;
struct TYPE_2__ {int sec; int usec; } ;
struct radius_msg_list {scalar_t__ msg_type; int addr; int shared_secret_len; int shared_secret; struct radius_msg* msg; struct radius_msg_list* next; TYPE_1__ last_attempt; } ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int code; scalar_t__ identifier; } ;
struct radius_client_data {size_t num_acct_handlers; size_t num_auth_handlers; int ctx; int num_msgs; struct radius_msg_list* msgs; struct radius_rx_handler* auth_handlers; struct radius_rx_handler* acct_handlers; struct hostapd_radius_servers* conf; } ;
struct os_reltime {int sec; int usec; } ;
struct hostapd_radius_servers {scalar_t__ msg_dumps; struct hostapd_radius_server* auth_server; struct hostapd_radius_server* acct_server; } ;
struct hostapd_radius_server {int round_trip_time; int unknown_types; int bad_authenticators; int responses; int access_challenges; int access_rejects; int access_accepts; int malformed_responses; } ;
typedef int buf ;
typedef scalar_t__ RadiusType ;
typedef int RadiusRxResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,char*,...) ;
 int FUNC_1 (struct os_reltime*) ;
 int FUNC_2 (struct radius_msg_list*) ;
 int FUNC_3 (struct radius_msg*) ;
 int FUNC_4 (struct radius_msg*) ;
 struct radius_hdr* FUNC_5 (struct radius_msg*) ;
 struct radius_msg* FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (int,unsigned char*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct radius_msg*,struct radius_msg*,int ,int ,int ) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static void FUNC_11(int VAR_7, void *VAR_8, void *VAR_9)
{
 struct radius_client_data *VAR_10 = VAR_8;
 struct hostapd_radius_servers *VAR_11 = VAR_10->conf;
 RadiusType VAR_12 = (RadiusType) VAR_9;
 int VAR_13, VAR_14;
 unsigned char VAR_15[3000];
 struct radius_msg *VAR_16;
 struct radius_hdr *VAR_17;
 struct radius_rx_handler *VAR_18;
 size_t VAR_19, VAR_20;
 struct radius_msg_list *VAR_21, *VAR_22;
 struct os_reltime VAR_23;
 struct hostapd_radius_server *VAR_24;
 int VAR_25 = 0;

 if (VAR_12 == VAR_4) {
  VAR_18 = VAR_10->acct_handlers;
  VAR_19 = VAR_10->num_acct_handlers;
  VAR_24 = VAR_11->acct_server;
 } else {
  VAR_18 = VAR_10->auth_handlers;
  VAR_19 = VAR_10->num_auth_handlers;
  VAR_24 = VAR_11->auth_server;
 }

 VAR_13 = FUNC_7(VAR_7, VAR_15, sizeof(VAR_15), VAR_2);
 if (VAR_13 < 0) {
  FUNC_10(VAR_3, "recv[RADIUS]: %s", FUNC_8(VAR_6));
  return;
 }
 FUNC_0(VAR_10->ctx, ((void*)0), VAR_1,
         VAR_0, "Received %d bytes from RADIUS "
         "server", VAR_13);
 if (VAR_13 == sizeof(VAR_15)) {
  FUNC_10(VAR_3, "RADIUS: Possibly too long UDP frame for our buffer - dropping it");
  return;
 }

 VAR_16 = FUNC_6(VAR_15, VAR_13);
 if (VAR_16 == ((void*)0)) {
  FUNC_10(VAR_3, "RADIUS: Parsing incoming frame failed");
  VAR_24->malformed_responses++;
  return;
 }
 VAR_17 = FUNC_5(VAR_16);

 FUNC_0(VAR_10->ctx, ((void*)0), VAR_1,
         VAR_0, "Received RADIUS message");
 if (VAR_11->msg_dumps)
  FUNC_3(VAR_16);

 switch (VAR_17->code) {
 case 135:
  VAR_24->access_accepts++;
  break;
 case 133:
  VAR_24->access_rejects++;
  break;
 case 134:
  VAR_24->access_challenges++;
  break;
 case 132:
  VAR_24->responses++;
  break;
 }

 VAR_22 = ((void*)0);
 VAR_21 = VAR_10->msgs;
 while (VAR_21) {


  if ((VAR_21->msg_type == VAR_12 ||
       (VAR_21->msg_type == VAR_5 &&
        VAR_12 == VAR_4)) &&
      FUNC_5(VAR_21->msg)->identifier ==
      VAR_17->identifier)
   break;

  VAR_22 = VAR_21;
  VAR_21 = VAR_21->next;
 }

 if (VAR_21 == ((void*)0)) {
  FUNC_0(VAR_10->ctx, ((void*)0), VAR_1,
          VAR_0,
          "No matching RADIUS request found (type=%d "
          "id=%d) - dropping packet",
          VAR_12, VAR_17->identifier);
  goto fail;
 }

 FUNC_1(&VAR_23);
 VAR_14 = (VAR_23.sec - VAR_21->last_attempt.sec) * 100 +
  (VAR_23.usec - VAR_21->last_attempt.usec) / 10000;
 FUNC_0(VAR_10->ctx, VAR_21->addr, VAR_1,
         VAR_0,
         "Received RADIUS packet matched with a pending "
         "request, round trip time %d.%02d sec",
         VAR_14 / 100, VAR_14 % 100);
 VAR_24->round_trip_time = VAR_14;


 if (VAR_22)
  VAR_22->next = VAR_21->next;
 else
  VAR_10->msgs = VAR_21->next;
 VAR_10->num_msgs--;

 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  RadiusRxResult VAR_26;
  VAR_26 = VAR_18[VAR_20].handler(VAR_16, VAR_21->msg, VAR_21->shared_secret,
       VAR_21->shared_secret_len,
       VAR_18[VAR_20].data);
  switch (VAR_26) {
  case 130:
   FUNC_4(VAR_16);

  case 129:
   FUNC_2(VAR_21);
   return;
  case 131:
   VAR_25++;

  case 128:

   break;
  }
 }

 if (VAR_25)
  VAR_24->bad_authenticators++;
 else
  VAR_24->unknown_types++;
 FUNC_0(VAR_10->ctx, VAR_21->addr, VAR_1,
         VAR_0, "No RADIUS RX handler found "
         "(type=%d code=%d id=%d)%s - dropping packet",
         VAR_12, VAR_17->code, VAR_17->identifier,
         VAR_25 ? " [INVALID AUTHENTICATOR]" :
         "");
 FUNC_2(VAR_21);

 fail:
 FUNC_4(VAR_16);
}
