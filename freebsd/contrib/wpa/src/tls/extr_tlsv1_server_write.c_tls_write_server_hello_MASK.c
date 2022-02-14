
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_server {int cipher_suite; int (* session_ticket_cb ) (int ,scalar_t__,int ,int ,int ,int ) ;int use_session_ticket; TYPE_1__ rl; int verify; int master_secret; int server_random; int client_random; int session_ticket_len; scalar_t__ session_ticket; int session_ticket_cb_ctx; scalar_t__ status_request_v2; scalar_t__ status_request; scalar_t__ session_id_len; int session_id; } ;
struct os_time {int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct os_time*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_9 (struct tlsv1_server*,int ,int ) ;
 scalar_t__ FUNC_10 (struct tlsv1_server*,int *,int ) ;
 int FUNC_11 (struct tlsv1_server*,char*) ;
 int FUNC_12 (int ,char*,int ,scalar_t__) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(struct tlsv1_server *VAR_14,
      u8 **VAR_15, u8 *VAR_16)
{
 u8 *VAR_17, *VAR_18, *VAR_19, *VAR_20, *VAR_21;
 struct os_time VAR_22;
 size_t VAR_23;

 VAR_17 = *VAR_15;

 FUNC_11(VAR_14, "Send ServerHello");
 VAR_18 = VAR_17;
 VAR_17 += VAR_12;

 FUNC_3(&VAR_22);



 FUNC_2(VAR_14->server_random, VAR_22.sec);
 if (FUNC_5(VAR_14->server_random + 4, VAR_11 - 4)) {
  FUNC_13(VAR_1, "TLSv1: Could not generate "
      "server_random");
  return -1;
 }
 FUNC_12(VAR_2, "TLSv1: server_random",
      VAR_14->server_random, VAR_11);

 VAR_14->session_id_len = VAR_13;
 if (FUNC_5(VAR_14->session_id, VAR_14->session_id_len)) {
  FUNC_13(VAR_1, "TLSv1: Could not generate "
      "session_id");
  return -1;
 }
 FUNC_12(VAR_2, "TLSv1: session_id",
      VAR_14->session_id, VAR_14->session_id_len);




 VAR_19 = VAR_17;

 *VAR_17++ = VAR_10;

 VAR_20 = VAR_17;
 VAR_17 += 3;


 FUNC_0(VAR_17, VAR_14->rl.tls_version);
 VAR_17 += 2;

 FUNC_4(VAR_17, VAR_14->server_random, VAR_11);
 VAR_17 += VAR_11;

 *VAR_17++ = VAR_14->session_id_len;
 FUNC_4(VAR_17, VAR_14->session_id, VAR_14->session_id_len);
 VAR_17 += VAR_14->session_id_len;

 FUNC_0(VAR_17, VAR_14->cipher_suite);
 VAR_17 += 2;

 *VAR_17++ = VAR_6;


 VAR_21 = VAR_17;
 VAR_17 += 2;

 if (VAR_14->status_request) {


  FUNC_0(VAR_17, VAR_8);
  VAR_17 += 2;

  FUNC_0(VAR_17, 0);
  VAR_17 += 2;
 }

 if (VAR_14->status_request_v2) {




  FUNC_0(VAR_17, VAR_9);
  VAR_17 += 2;

  FUNC_0(VAR_17, 0);
  VAR_17 += 2;
 }

 if (VAR_14->session_ticket && VAR_14->session_ticket_cb) {
  int VAR_24 = VAR_14->session_ticket_cb(
   VAR_14->session_ticket_cb_ctx,
   VAR_14->session_ticket, VAR_14->session_ticket_len,
   VAR_14->client_random, VAR_14->server_random,
   VAR_14->master_secret);
  if (VAR_24 < 0) {
   FUNC_11(VAR_14, "SessionTicket callback indicated failure");
   FUNC_9(VAR_14, VAR_5,
        VAR_3);
   return -1;
  }
  VAR_14->use_session_ticket = VAR_24;

  if (VAR_14->use_session_ticket) {
   if (FUNC_10(VAR_14, ((void*)0), 0) < 0) {
    FUNC_13(VAR_0, "TLSv1: Failed to "
        "derive keys");
    FUNC_9(VAR_14, VAR_5,
         VAR_4);
    return -1;
   }
  }
 }

 if (VAR_17 == VAR_21 + 2)
  VAR_17 -= 2;
 else
  FUNC_0(VAR_21, VAR_17 - VAR_21 - 2);

 FUNC_1(VAR_20, VAR_17 - VAR_20 - 3);
 FUNC_7(&VAR_14->verify, VAR_19, VAR_17 - VAR_19);

 if (FUNC_8(&VAR_14->rl, VAR_7,
         VAR_18, VAR_16 - VAR_18, VAR_19, VAR_17 - VAR_19,
         &VAR_23) < 0) {
  FUNC_13(VAR_0, "TLSv1: Failed to create TLS record");
  FUNC_9(VAR_14, VAR_5,
       VAR_4);
  return -1;
 }
 VAR_17 = VAR_18 + VAR_23;

 *VAR_15 = VAR_17;

 return 0;
}
