
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int unknown_acct_types; int acct_bad_authenticators; int malformed_acct_requests; int acct_responses; int invalid_acct_requests; int acct_requests; int unknown_types; int packets_dropped; int bad_authenticators; int malformed_access_requests; int access_challenges; int access_rejects; int access_accepts; int dup_access_requests; int invalid_requests; int access_requests; } ;
struct TYPE_4__ {int sec; int usec; } ;
struct radius_server_data {scalar_t__ ipv6; struct radius_client* clients; TYPE_2__ counters; TYPE_1__ start_time; } ;
struct TYPE_6__ {int unknown_acct_types; int acct_bad_authenticators; int malformed_acct_requests; int acct_responses; int invalid_acct_requests; int acct_requests; int unknown_types; int packets_dropped; int bad_authenticators; int malformed_access_requests; int access_challenges; int access_rejects; int access_accepts; int dup_access_requests; int access_requests; } ;
struct radius_client {TYPE_3__ counters; int mask; int addr; int mask6; int addr6; struct radius_client* next; } ;
struct os_reltime {int sec; int usec; } ;
typedef int mbuf ;
typedef int abuf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (struct os_reltime*) ;
 int FUNC_3 (char*,int,char*,unsigned int,...) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (char*,int ,int) ;

int FUNC_6(struct radius_server_data *VAR_1, char *VAR_2,
     size_t VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;
 char *VAR_7, *VAR_8;
 struct os_reltime VAR_9;
 struct radius_client *VAR_10;



 if (VAR_1 == ((void*)0) || VAR_3 == 0)
  return 0;

 VAR_8 = VAR_2;
 VAR_7 = VAR_2 + VAR_3;

 FUNC_2(&VAR_9);
 VAR_5 = (VAR_9.sec - VAR_1->start_time.sec) * 100 +
  ((VAR_9.usec - VAR_1->start_time.usec) / 10000) % 100;
 VAR_4 = FUNC_3(VAR_8, VAR_7 - VAR_8,
     "RADIUS-AUTH-SERVER-MIB\n"
     "radiusAuthServIdent=hostapd\n"
     "radiusAuthServUpTime=%d\n"
     "radiusAuthServResetTime=0\n"
     "radiusAuthServConfigReset=4\n",
     VAR_5);
 if (FUNC_4(VAR_7 - VAR_8, VAR_4)) {
  *VAR_8 = '\0';
  return VAR_8 - VAR_2;
 }
 VAR_8 += VAR_4;

 VAR_4 = FUNC_3(VAR_8, VAR_7 - VAR_8,
     "radiusAuthServTotalAccessRequests=%u\n"
     "radiusAuthServTotalInvalidRequests=%u\n"
     "radiusAuthServTotalDupAccessRequests=%u\n"
     "radiusAuthServTotalAccessAccepts=%u\n"
     "radiusAuthServTotalAccessRejects=%u\n"
     "radiusAuthServTotalAccessChallenges=%u\n"
     "radiusAuthServTotalMalformedAccessRequests=%u\n"
     "radiusAuthServTotalBadAuthenticators=%u\n"
     "radiusAuthServTotalPacketsDropped=%u\n"
     "radiusAuthServTotalUnknownTypes=%u\n"
     "radiusAccServTotalRequests=%u\n"
     "radiusAccServTotalInvalidRequests=%u\n"
     "radiusAccServTotalResponses=%u\n"
     "radiusAccServTotalMalformedRequests=%u\n"
     "radiusAccServTotalBadAuthenticators=%u\n"
     "radiusAccServTotalUnknownTypes=%u\n",
     VAR_1->counters.access_requests,
     VAR_1->counters.invalid_requests,
     VAR_1->counters.dup_access_requests,
     VAR_1->counters.access_accepts,
     VAR_1->counters.access_rejects,
     VAR_1->counters.access_challenges,
     VAR_1->counters.malformed_access_requests,
     VAR_1->counters.bad_authenticators,
     VAR_1->counters.packets_dropped,
     VAR_1->counters.unknown_types,
     VAR_1->counters.acct_requests,
     VAR_1->counters.invalid_acct_requests,
     VAR_1->counters.acct_responses,
     VAR_1->counters.malformed_acct_requests,
     VAR_1->counters.acct_bad_authenticators,
     VAR_1->counters.unknown_acct_types);
 if (FUNC_4(VAR_7 - VAR_8, VAR_4)) {
  *VAR_8 = '\0';
  return VAR_8 - VAR_2;
 }
 VAR_8 += VAR_4;

 for (VAR_10 = VAR_1->clients, VAR_6 = 0; VAR_10; VAR_10 = VAR_10->next, VAR_6++) {
  char VAR_11[50], VAR_12[50];
  if (!VAR_1->ipv6) {
   FUNC_5(VAR_11, FUNC_0(VAR_10->addr), sizeof(VAR_11));
   FUNC_5(VAR_12, FUNC_0(VAR_10->mask), sizeof(VAR_12));
  }

  VAR_4 = FUNC_3(VAR_8, VAR_7 - VAR_8,
      "radiusAuthClientIndex=%u\n"
      "radiusAuthClientAddress=%s/%s\n"
      "radiusAuthServAccessRequests=%u\n"
      "radiusAuthServDupAccessRequests=%u\n"
      "radiusAuthServAccessAccepts=%u\n"
      "radiusAuthServAccessRejects=%u\n"
      "radiusAuthServAccessChallenges=%u\n"
      "radiusAuthServMalformedAccessRequests=%u\n"
      "radiusAuthServBadAuthenticators=%u\n"
      "radiusAuthServPacketsDropped=%u\n"
      "radiusAuthServUnknownTypes=%u\n"
      "radiusAccServTotalRequests=%u\n"
      "radiusAccServTotalInvalidRequests=%u\n"
      "radiusAccServTotalResponses=%u\n"
      "radiusAccServTotalMalformedRequests=%u\n"
      "radiusAccServTotalBadAuthenticators=%u\n"
      "radiusAccServTotalUnknownTypes=%u\n",
      VAR_6,
      VAR_11, VAR_12,
      VAR_10->counters.access_requests,
      VAR_10->counters.dup_access_requests,
      VAR_10->counters.access_accepts,
      VAR_10->counters.access_rejects,
      VAR_10->counters.access_challenges,
      VAR_10->counters.malformed_access_requests,
      VAR_10->counters.bad_authenticators,
      VAR_10->counters.packets_dropped,
      VAR_10->counters.unknown_types,
      VAR_10->counters.acct_requests,
      VAR_10->counters.invalid_acct_requests,
      VAR_10->counters.acct_responses,
      VAR_10->counters.malformed_acct_requests,
      VAR_10->counters.acct_bad_authenticators,
      VAR_10->counters.unknown_acct_types);
  if (FUNC_4(VAR_7 - VAR_8, VAR_4)) {
   *VAR_8 = '\0';
   return VAR_8 - VAR_2;
  }
  VAR_8 += VAR_4;
 }

 return VAR_8 - VAR_2;
}
