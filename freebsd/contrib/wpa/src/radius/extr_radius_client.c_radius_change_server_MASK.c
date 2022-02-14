
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int s_addr; } ;
struct sockaddr_in6 {int sin_family; int sin6_family; void* sin6_port; int sin6_addr; void* sin_port; TYPE_6__ sin_addr; } ;
struct sockaddr_in {int sin_family; int sin6_family; void* sin6_port; int sin6_addr; void* sin_port; TYPE_6__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct radius_msg_list {scalar_t__ msg_type; int attempts; int next_wait; scalar_t__ first_try; scalar_t__ next_try; struct radius_msg_list* next; } ;
struct radius_client_data {int auth_sock; int acct_sock; struct radius_msg_list* msgs; int ctx; struct hostapd_radius_servers* conf; } ;
struct in6_addr {int dummy; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {int v6; TYPE_3__ v4; } ;
struct TYPE_12__ {int af; TYPE_4__ u; } ;
struct hostapd_radius_servers {TYPE_5__ client_addr; scalar_t__ force_client_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {int v6; TYPE_1__ v4; } ;
struct TYPE_14__ {int af; TYPE_2__ u; } ;
struct hostapd_radius_server {scalar_t__ shared_secret_len; TYPE_7__ addr; int port; int shared_secret; } ;
typedef int socklen_t ;
typedef int serv6 ;
typedef int serv ;
typedef int disconnect_addr ;
typedef int claddr6 ;
typedef int claddr ;
typedef int abuf ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int ,struct radius_client_data*,int *) ;
 int FUNC_3 (int,int ,int ,struct radius_client_data*,int *) ;
 int VAR_8 ;
 int FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (TYPE_7__*,char*,int) ;
 int FUNC_6 (int ,int *,int ,int ,char*,char*,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__) ;
 int FUNC_9 (int const,int *,char*,int) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (struct sockaddr_in6*,int ,int) ;
 int FUNC_14 (struct radius_client_data*,int) ;
 int VAR_9 ;
 int FUNC_15 (struct radius_client_data*,int ,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_18(struct radius_client_data *VAR_10,
       struct hostapd_radius_server *VAR_11,
       struct hostapd_radius_server *VAR_12,
       int VAR_13, int VAR_14, int VAR_15)
{
 struct sockaddr_in VAR_16, VAR_17;



 struct sockaddr *VAR_18, *VAR_19;
 socklen_t VAR_20, VAR_21;
 char VAR_22[50];
 int VAR_23;
 struct radius_msg_list *VAR_24;
 struct hostapd_radius_servers *VAR_25 = VAR_10->conf;
 struct sockaddr_in VAR_26 = {
  .sin_family = VAR_0,
 };

 FUNC_6(VAR_10->ctx, ((void*)0), VAR_2,
         VAR_1,
         "%s server %s:%d",
         VAR_15 ? "Authentication" : "Accounting",
         FUNC_5(&VAR_11->addr, VAR_22, sizeof(VAR_22)),
         VAR_11->port);

 if (VAR_12 && VAR_12 == VAR_11) {

  if (VAR_15)
   FUNC_14(VAR_10, 1);
 }

 if (VAR_12 && VAR_12 != VAR_11 &&
     (VAR_11->shared_secret_len != VAR_12->shared_secret_len ||
      FUNC_11(VAR_11->shared_secret, VAR_12->shared_secret,
         VAR_11->shared_secret_len) != 0)) {







  if (VAR_15)
   FUNC_14(VAR_10, 1);
  else {
   FUNC_15(
    VAR_10, VAR_11->shared_secret,
    VAR_11->shared_secret_len);
  }
 }


 for (VAR_24 = VAR_10->msgs; VAR_12 && VAR_24; VAR_24 = VAR_24->next) {
  if ((VAR_15 && VAR_24->msg_type != VAR_6) ||
      (!VAR_15 && VAR_24->msg_type != VAR_5))
   continue;
  VAR_24->next_try = VAR_24->first_try + VAR_7;
  VAR_24->attempts = 1;
  VAR_24->next_wait = VAR_7 * 2;
 }

 if (VAR_10->msgs) {
  FUNC_2(VAR_9, VAR_10, ((void*)0));
  FUNC_3(VAR_7, 0,
           VAR_9, VAR_10, ((void*)0));
 }

 switch (VAR_11->addr.af) {
 case 129:
  FUNC_13(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.sin_family = 129;
  VAR_16.sin_addr.s_addr = VAR_11->addr.u.v4.s_addr;
  VAR_16.sin_port = FUNC_7(VAR_11->port);
  VAR_18 = (struct sockaddr *) &VAR_16;
  VAR_20 = sizeof(VAR_16);
  VAR_23 = VAR_13;
  break;
 default:
  return -1;
 }

 if (VAR_23 < 0) {
  FUNC_17(VAR_4,
      "RADIUS: No server socket available (af=%d sock=%d sock6=%d auth=%d",
      VAR_11->addr.af, VAR_13, VAR_14, VAR_15);
  return -1;
 }

 if (VAR_25->force_client_addr) {
  switch (VAR_25->client_addr.af) {
  case 129:
   FUNC_13(&VAR_17, 0, sizeof(VAR_17));
   VAR_17.sin_family = 129;
   VAR_17.sin_addr.s_addr = VAR_25->client_addr.u.v4.s_addr;
   VAR_17.sin_port = FUNC_7(0);
   VAR_19 = (struct sockaddr *) &VAR_17;
   VAR_21 = sizeof(VAR_17);
   break;
  default:
   return -1;
  }

  if (FUNC_0(VAR_23, VAR_19, VAR_21) < 0) {
   FUNC_17(VAR_4, "bind[radius]: %s",
       FUNC_16(VAR_8));
   return -1;
  }
 }


 if (FUNC_1(VAR_23, (struct sockaddr *) &VAR_26,
      sizeof(VAR_26)) < 0)
  FUNC_17(VAR_4, "disconnect[radius]: %s", FUNC_16(VAR_8));

 if (FUNC_1(VAR_23, VAR_18, VAR_20) < 0) {
  FUNC_17(VAR_4, "connect[radius]: %s", FUNC_16(VAR_8));
  return -1;
 }


 switch (VAR_11->addr.af) {
 case 129:
  VAR_21 = sizeof(VAR_17);
  if (FUNC_4(VAR_23, (struct sockaddr *) &VAR_17,
    &VAR_21) == 0) {
   FUNC_17(VAR_3, "RADIUS local address: %s:%u",
       FUNC_8(VAR_17.sin_addr),
       FUNC_10(VAR_17.sin_port));
  }
  break;
 }


 if (VAR_15)
  VAR_10->auth_sock = VAR_23;
 else
  VAR_10->acct_sock = VAR_23;

 return 0;
}
