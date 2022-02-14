
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int bad_authenticators; int access_requests; int unknown_types; int malformed_access_requests; int invalid_requests; } ;
struct radius_server_data {TYPE_1__ counters; scalar_t__ ipv6; } ;
struct radius_msg {int dummy; } ;
struct TYPE_5__ {int bad_authenticators; int access_requests; int unknown_types; int malformed_access_requests; } ;
struct radius_client {TYPE_2__ counters; int shared_secret_len; scalar_t__ shared_secret; } ;
typedef int socklen_t ;
typedef int from ;
typedef int abuf ;
struct TYPE_6__ {char* code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct in_addr) ;
 int * FUNC_3 (int ,int *,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct radius_msg*) ;
 int FUNC_9 (struct radius_msg*) ;
 TYPE_3__* FUNC_10 (struct radius_msg*) ;
 struct radius_msg* FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (struct radius_msg*,int *,int ,int *) ;
 struct radius_client* FUNC_13 (struct radius_server_data*,struct in_addr*,int) ;
 int FUNC_14 (struct radius_server_data*,struct radius_client*,struct radius_msg*,int) ;
 int FUNC_15 (struct radius_server_data*,struct radius_client*,struct radius_msg*,int) ;
 int FUNC_16 (struct radius_server_data*,struct radius_msg*,struct sockaddr*,int,struct radius_client*,char*,int,int *) ;
 int FUNC_17 (int,int *,int ,int ,struct sockaddr*,int*) ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_19 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_20(int VAR_11, void *VAR_12,
           void *VAR_13)
{
 struct radius_server_data *VAR_14 = VAR_12;
 u8 *VAR_15 = ((void*)0);
 union {
  struct sockaddr_storage ss;
  struct sockaddr_in sin;



 } VAR_16;
 socklen_t VAR_17;
 int VAR_18;
 struct radius_client *VAR_19 = ((void*)0);
 struct radius_msg *VAR_20 = ((void*)0);
 char VAR_21[50];
 int VAR_22 = 0;

 VAR_15 = FUNC_6(VAR_8);
 if (VAR_15 == ((void*)0)) {
  goto fail;
 }

 VAR_17 = sizeof(VAR_16);
 VAR_18 = FUNC_17(VAR_11, VAR_15, VAR_8, 0,
         (struct sockaddr *) &VAR_16.ss, &VAR_17);
 if (VAR_18 < 0) {
  FUNC_19(VAR_1, "recvfrom[radius_server]: %s",
      FUNC_18(VAR_9));
  goto fail;
 }
 if (!VAR_14->ipv6) {
  FUNC_7(VAR_21, FUNC_2(VAR_16.sin.sin_addr), sizeof(VAR_21));
  VAR_22 = FUNC_4(VAR_16.sin.sin_port);
  FUNC_0("Received %d bytes from %s:%d",
        VAR_18, VAR_21, VAR_22);

  VAR_19 = FUNC_13(VAR_14, &VAR_16.sin.sin_addr, 0);
 }

 FUNC_1("Received data", VAR_15, VAR_18);

 if (VAR_19 == ((void*)0)) {
  FUNC_0("Unknown client %s - packet ignored", VAR_21);
  VAR_14->counters.invalid_requests++;
  goto fail;
 }

 VAR_20 = FUNC_11(VAR_15, VAR_18);
 if (VAR_20 == ((void*)0)) {
  FUNC_0("Parsing incoming RADIUS frame failed");
  VAR_14->counters.malformed_access_requests++;
  VAR_19->counters.malformed_access_requests++;
  goto fail;
 }

 FUNC_5(VAR_15);
 VAR_15 = ((void*)0);

 if (VAR_10 <= VAR_2) {
  FUNC_8(VAR_20);
 }

 if (FUNC_10(VAR_20)->code == VAR_6) {
  FUNC_15(VAR_14, VAR_19, VAR_20, 1);
  return;
 }

 if (FUNC_10(VAR_20)->code == VAR_7) {
  FUNC_15(VAR_14, VAR_19, VAR_20, 0);
  return;
 }

 if (FUNC_10(VAR_20)->code == VAR_4) {
  FUNC_14(VAR_14, VAR_19, VAR_20, 1);
  return;
 }

 if (FUNC_10(VAR_20)->code == VAR_5) {
  FUNC_14(VAR_14, VAR_19, VAR_20, 0);
  return;
 }

 if (FUNC_10(VAR_20)->code != VAR_3) {
  FUNC_0("Unexpected RADIUS code %d",
        FUNC_10(VAR_20)->code);
  VAR_14->counters.unknown_types++;
  VAR_19->counters.unknown_types++;
  goto fail;
 }

 VAR_14->counters.access_requests++;
 VAR_19->counters.access_requests++;

 if (FUNC_12(VAR_20, (u8 *) VAR_19->shared_secret,
           VAR_19->shared_secret_len, ((void*)0))) {
  FUNC_0("Invalid Message-Authenticator from %s", VAR_21);
  VAR_14->counters.bad_authenticators++;
  VAR_19->counters.bad_authenticators++;
  goto fail;
 }

 if (FUNC_16(VAR_14, VAR_20, (struct sockaddr *) &VAR_16,
      VAR_17, VAR_19, VAR_21, VAR_22, ((void*)0)) ==
     -2)
  return;

fail:
 FUNC_9(VAR_20);
 FUNC_5(VAR_15);
}
