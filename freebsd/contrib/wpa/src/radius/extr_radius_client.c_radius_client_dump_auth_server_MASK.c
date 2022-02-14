
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg_list {scalar_t__ msg_type; struct radius_msg_list* next; } ;
struct radius_client_data {struct radius_msg_list* msgs; } ;
struct hostapd_radius_server {int packets_dropped; int unknown_types; int timeouts; int bad_authenticators; int malformed_responses; int access_challenges; int access_rejects; int access_accepts; int retransmissions; int requests; int round_trip_time; int port; int addr; int index; } ;
typedef int abuf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,size_t,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, size_t VAR_2,
       struct hostapd_radius_server *VAR_3,
       struct radius_client_data *VAR_4)
{
 int VAR_5 = 0;
 struct radius_msg_list *VAR_6;
 char VAR_7[50];

 if (VAR_4) {
  for (VAR_6 = VAR_4->msgs; VAR_6; VAR_6 = VAR_6->next) {
   if (VAR_6->msg_type == VAR_0)
    VAR_5++;
  }
 }

 return FUNC_1(VAR_1, VAR_2,
      "radiusAuthServerIndex=%d\n"
      "radiusAuthServerAddress=%s\n"
      "radiusAuthClientServerPortNumber=%d\n"
      "radiusAuthClientRoundTripTime=%d\n"
      "radiusAuthClientAccessRequests=%u\n"
      "radiusAuthClientAccessRetransmissions=%u\n"
      "radiusAuthClientAccessAccepts=%u\n"
      "radiusAuthClientAccessRejects=%u\n"
      "radiusAuthClientAccessChallenges=%u\n"
      "radiusAuthClientMalformedAccessResponses=%u\n"
      "radiusAuthClientBadAuthenticators=%u\n"
      "radiusAuthClientPendingRequests=%u\n"
      "radiusAuthClientTimeouts=%u\n"
      "radiusAuthClientUnknownTypes=%u\n"
      "radiusAuthClientPacketsDropped=%u\n",
      VAR_3->index,
      FUNC_0(&VAR_3->addr, VAR_7, sizeof(VAR_7)),
      VAR_3->port,
      VAR_3->round_trip_time,
      VAR_3->requests,
      VAR_3->retransmissions,
      VAR_3->access_accepts,
      VAR_3->access_rejects,
      VAR_3->access_challenges,
      VAR_3->malformed_responses,
      VAR_3->bad_authenticators,
      VAR_5,
      VAR_3->timeouts,
      VAR_3->unknown_types,
      VAR_3->packets_dropped);
}
