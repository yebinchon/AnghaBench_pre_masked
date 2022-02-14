
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int access_rejects; } ;
struct radius_server_data {int auth_sock; TYPE_1__ counters; } ;
struct radius_msg {int dummy; } ;
struct radius_hdr {int authenticator; int identifier; } ;
struct TYPE_4__ {int access_rejects; } ;
struct radius_client {TYPE_2__ counters; int shared_secret_len; scalar_t__ shared_secret; } ;
struct eap_hdr {int length; scalar_t__ identifier; int code; } ;
typedef int socklen_t ;
typedef int eapfail ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct eap_hdr*,int ,int) ;
 int FUNC_3 (struct radius_msg*,int *,int) ;
 scalar_t__ FUNC_4 (struct radius_msg*,struct radius_msg*,int ) ;
 int FUNC_5 (struct radius_msg*) ;
 scalar_t__ FUNC_6 (struct radius_msg*,int *,int ,int ) ;
 int FUNC_7 (struct radius_msg*) ;
 struct wpabuf* FUNC_8 (struct radius_msg*) ;
 struct radius_hdr* FUNC_9 (struct radius_msg*) ;
 struct radius_msg* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int ,struct sockaddr*,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (struct wpabuf*) ;
 int FUNC_15 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_16(struct radius_server_data *VAR_7,
    struct radius_client *VAR_8,
    struct radius_msg *VAR_9,
    struct sockaddr *VAR_10, socklen_t VAR_11,
    const char *VAR_12, int VAR_13)
{
 struct radius_msg *VAR_14;
 int VAR_15 = 0;
 struct eap_hdr VAR_16;
 struct wpabuf *VAR_17;
 struct radius_hdr *VAR_18 = FUNC_9(VAR_9);

 FUNC_0("Reject invalid request from %s:%d",
       VAR_12, VAR_13);

 VAR_14 = FUNC_10(VAR_4, VAR_18->identifier);
 if (VAR_14 == ((void*)0)) {
  return -1;
 }

 FUNC_2(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.code = VAR_0;
 VAR_16.identifier = 0;
 VAR_16.length = FUNC_1(sizeof(VAR_16));

 if (!FUNC_3(VAR_14, (u8 *) &VAR_16, sizeof(VAR_16))) {
  FUNC_0("Failed to add EAP-Message attribute");
 }

 if (FUNC_4(VAR_14, VAR_9, VAR_3) < 0) {
  FUNC_0("Failed to copy Proxy-State attribute(s)");
  FUNC_7(VAR_14);
  return -1;
 }

 if (FUNC_6(VAR_14, (u8 *) VAR_8->shared_secret,
      VAR_8->shared_secret_len,
      VAR_18->authenticator) <
     0) {
  FUNC_0("Failed to add Message-Authenticator attribute");
 }

 if (VAR_6 <= VAR_2) {
  FUNC_5(VAR_14);
 }

 VAR_7->counters.access_rejects++;
 VAR_8->counters.access_rejects++;
 VAR_17 = FUNC_8(VAR_14);
 if (FUNC_11(VAR_7->auth_sock, FUNC_14(VAR_17), FUNC_15(VAR_17), 0,
     (struct sockaddr *) VAR_10, sizeof(*VAR_10)) < 0) {
  FUNC_13(VAR_1, "sendto[RADIUS SRV]: %s", FUNC_12(VAR_5));
  VAR_15 = -1;
 }

 FUNC_7(VAR_14);

 return VAR_15;
}
