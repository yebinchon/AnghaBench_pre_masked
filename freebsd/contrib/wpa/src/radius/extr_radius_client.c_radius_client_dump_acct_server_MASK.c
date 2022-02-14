
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ msg_type; struct radius_msg_list* next; } ;
struct radius_client_data {struct radius_msg_list* msgs; } ;
struct hostapd_radius_server {int packets_dropped; int unknown_types; int timeouts; int bad_authenticators; int malformed_responses; int responses; int retransmissions; int requests; int round_trip_time; int port; int addr; int index; } ;
typedef int abuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,size_t,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, size_t VAR_3,
       struct hostapd_radius_server *VAR_4,
       struct radius_client_data *VAR_5)
{
 int VAR_6 = 0;
 struct radius_msg_list *VAR_7;
 char VAR_8[50];

 if (VAR_5) {
  for (VAR_7 = VAR_5->msgs; VAR_7; VAR_7 = VAR_7->next) {
   if (VAR_7->msg_type == VAR_0 ||
       VAR_7->msg_type == VAR_1)
    VAR_6++;
  }
 }

 return FUNC_1(VAR_2, VAR_3,
      "radiusAccServerIndex=%d\n"
      "radiusAccServerAddress=%s\n"
      "radiusAccClientServerPortNumber=%d\n"
      "radiusAccClientRoundTripTime=%d\n"
      "radiusAccClientRequests=%u\n"
      "radiusAccClientRetransmissions=%u\n"
      "radiusAccClientResponses=%u\n"
      "radiusAccClientMalformedResponses=%u\n"
      "radiusAccClientBadAuthenticators=%u\n"
      "radiusAccClientPendingRequests=%u\n"
      "radiusAccClientTimeouts=%u\n"
      "radiusAccClientUnknownTypes=%u\n"
      "radiusAccClientPacketsDropped=%u\n",
      VAR_4->index,
      FUNC_0(&VAR_4->addr, VAR_8, sizeof(VAR_8)),
      VAR_4->port,
      VAR_4->round_trip_time,
      VAR_4->requests,
      VAR_4->retransmissions,
      VAR_4->responses,
      VAR_4->malformed_responses,
      VAR_4->bad_authenticators,
      VAR_6,
      VAR_4->timeouts,
      VAR_4->unknown_types,
      VAR_4->packets_dropped);
}
