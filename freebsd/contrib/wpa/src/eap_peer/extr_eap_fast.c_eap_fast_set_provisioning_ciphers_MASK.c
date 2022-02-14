
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {int ssl_ctx; } ;
struct TYPE_2__ {int conn; } ;
struct eap_fast_data {int provisioning_allowed; TYPE_1__ ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct eap_sm *VAR_11,
          struct eap_fast_data *VAR_12)
{
 u8 VAR_13[7];
 int VAR_14 = 0;

 if (VAR_12->provisioning_allowed & VAR_1) {
  FUNC_1(VAR_2, "EAP-FAST: Enabling unauthenticated "
      "provisioning TLS cipher suites");
  VAR_13[VAR_14++] = VAR_6;
 }

 if (VAR_12->provisioning_allowed & VAR_0) {
  FUNC_1(VAR_2, "EAP-FAST: Enabling authenticated "
      "provisioning TLS cipher suites");
  VAR_13[VAR_14++] = VAR_10;
  VAR_13[VAR_14++] = VAR_9;
  VAR_13[VAR_14++] = VAR_5;
  VAR_13[VAR_14++] = VAR_4;
  VAR_13[VAR_14++] = VAR_8;
 }

 VAR_13[VAR_14++] = VAR_7;

 if (FUNC_0(VAR_11->ssl_ctx, VAR_12->ssl.conn,
        VAR_13)) {
  FUNC_1(VAR_3, "EAP-FAST: Could not configure TLS "
      "cipher suites for provisioning");
  return -1;
 }

 return 0;
}
