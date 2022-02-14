
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int acct_responses; int acct_bad_authenticators; int acct_requests; int unknown_acct_types; int malformed_acct_requests; int invalid_acct_requests; } ;
struct radius_server_data {int acct_sock; TYPE_1__ counters; scalar_t__ ipv6; } ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int authenticator; int identifier; int code; } ;
struct TYPE_4__ {int acct_responses; int acct_bad_authenticators; int acct_requests; int unknown_acct_types; int malformed_acct_requests; } ;
struct radius_client {TYPE_2__ counters; int shared_secret_len; scalar_t__ shared_secret; } ;
typedef int socklen_t ;
typedef int from ;
typedef int abuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct in_addr) ;
 int * FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct radius_msg*) ;
 int FUNC_9 (struct radius_msg*,int *,int ,int ) ;
 int FUNC_10 (struct radius_msg*) ;
 struct wpabuf* FUNC_11 (struct radius_msg*) ;
 struct radius_hdr* FUNC_12 (struct radius_msg*) ;
 struct radius_msg* FUNC_13 (int ,int ) ;
 struct radius_msg* FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (struct radius_msg*,int *,int ) ;
 struct radius_client* FUNC_16 (struct radius_server_data*,struct in_addr*,int) ;
 int FUNC_17 (int,int *,int ,int ,struct sockaddr*,int*) ;
 int FUNC_18 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (struct wpabuf*) ;
 int FUNC_22 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_23(int VAR_8, void *VAR_9,
           void *VAR_10)
{
 struct radius_server_data *VAR_11 = VAR_9;
 u8 *VAR_12 = ((void*)0);
 union {
  struct sockaddr_storage ss;
  struct sockaddr_in sin;



 } VAR_13;
 socklen_t VAR_14;
 int VAR_15, VAR_16;
 struct radius_client *VAR_17 = ((void*)0);
 struct radius_msg *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 char VAR_20[50];
 int VAR_21 = 0;
 struct radius_hdr *VAR_22;
 struct wpabuf *VAR_23;

 VAR_12 = FUNC_6(VAR_5);
 if (VAR_12 == ((void*)0)) {
  goto fail;
 }

 VAR_14 = sizeof(VAR_13);
 VAR_15 = FUNC_17(VAR_8, VAR_12, VAR_5, 0,
         (struct sockaddr *) &VAR_13.ss, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_20(VAR_1, "recvfrom[radius_server]: %s",
      FUNC_19(VAR_6));
  goto fail;
 }
 if (!VAR_11->ipv6) {
  FUNC_7(VAR_20, FUNC_2(VAR_13.sin.sin_addr), sizeof(VAR_20));
  VAR_21 = FUNC_4(VAR_13.sin.sin_port);
  FUNC_0("Received %d bytes from %s:%d",
        VAR_15, VAR_20, VAR_21);

  VAR_17 = FUNC_16(VAR_11, &VAR_13.sin.sin_addr, 0);
 }

 FUNC_1("Received data", VAR_12, VAR_15);

 if (VAR_17 == ((void*)0)) {
  FUNC_0("Unknown client %s - packet ignored", VAR_20);
  VAR_11->counters.invalid_acct_requests++;
  goto fail;
 }

 VAR_18 = FUNC_14(VAR_12, VAR_15);
 if (VAR_18 == ((void*)0)) {
  FUNC_0("Parsing incoming RADIUS frame failed");
  VAR_11->counters.malformed_acct_requests++;
  VAR_17->counters.malformed_acct_requests++;
  goto fail;
 }

 FUNC_5(VAR_12);
 VAR_12 = ((void*)0);

 if (VAR_7 <= VAR_2) {
  FUNC_8(VAR_18);
 }

 if (FUNC_12(VAR_18)->code != VAR_3) {
  FUNC_0("Unexpected RADIUS code %d",
        FUNC_12(VAR_18)->code);
  VAR_11->counters.unknown_acct_types++;
  VAR_17->counters.unknown_acct_types++;
  goto fail;
 }

 VAR_11->counters.acct_requests++;
 VAR_17->counters.acct_requests++;

 if (FUNC_15(VAR_18, (u8 *) VAR_17->shared_secret,
           VAR_17->shared_secret_len)) {
  FUNC_0("Invalid Authenticator from %s", VAR_20);
  VAR_11->counters.acct_bad_authenticators++;
  VAR_17->counters.acct_bad_authenticators++;
  goto fail;
 }



 VAR_22 = FUNC_12(VAR_18);

 VAR_19 = FUNC_13(VAR_4, VAR_22->identifier);
 if (VAR_19 == ((void*)0))
  goto fail;

 FUNC_9(VAR_19, (u8 *) VAR_17->shared_secret,
        VAR_17->shared_secret_len,
        VAR_22->authenticator);

 FUNC_0("Reply to %s:%d", VAR_20, VAR_21);
 if (VAR_7 <= VAR_2) {
  FUNC_8(VAR_19);
 }
 VAR_23 = FUNC_11(VAR_19);
 VAR_11->counters.acct_responses++;
 VAR_17->counters.acct_responses++;
 VAR_16 = FUNC_18(VAR_11->acct_sock, FUNC_21(VAR_23), FUNC_22(VAR_23), 0,
       (struct sockaddr *) &VAR_13.ss, VAR_14);
 if (VAR_16 < 0) {
  FUNC_20(VAR_1, "sendto[RADIUS SRV]: %s",
      FUNC_19(VAR_6));
 }

fail:
 FUNC_10(VAR_19);
 FUNC_10(VAR_18);
 FUNC_5(VAR_12);
}
