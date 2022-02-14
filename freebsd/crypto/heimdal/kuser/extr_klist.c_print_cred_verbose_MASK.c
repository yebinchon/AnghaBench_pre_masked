
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ krb5_timestamp ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_19__ {size_t len; int * val; } ;
struct TYPE_13__ {scalar_t__ renewable; } ;
struct TYPE_18__ {TYPE_12__ b; } ;
struct TYPE_17__ {scalar_t__ authtime; scalar_t__ starttime; scalar_t__ endtime; scalar_t__ renew_till; } ;
struct TYPE_16__ {scalar_t__ length; int data; } ;
struct TYPE_15__ {scalar_t__ keytype; } ;
struct TYPE_20__ {TYPE_6__ addresses; TYPE_5__ flags; TYPE_4__ times; TYPE_3__ ticket; TYPE_2__ session; int client; int server; } ;
typedef TYPE_7__ krb5_creds ;
typedef int krb5_context ;
typedef int flags ;
typedef int buf ;
struct TYPE_14__ {int etype; int* kvno; } ;
struct TYPE_21__ {TYPE_1__ enc_part; } ;
typedef TYPE_8__ Ticket ;


 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_12__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,TYPE_8__*,size_t*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 (int ,int,char**) ;
 scalar_t__ FUNC_8 (int *,char*,int,size_t*) ;
 int FUNC_9 (int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (int ,int ,char**) ;
 int FUNC_11 (int ,scalar_t__,char*) ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_15(krb5_context VAR_0, krb5_creds *VAR_1)
{
    size_t VAR_2;
    char *VAR_3;
    krb5_error_code VAR_4;
    krb5_timestamp VAR_5;

    FUNC_9 (VAR_0, &VAR_5);

    VAR_4 = FUNC_10(VAR_0, VAR_1->server, &VAR_3);
    if(VAR_4)
 FUNC_4(1);
    FUNC_13(FUNC_0("Server: %s\n", ""), VAR_3);
    FUNC_5 (VAR_3);

    VAR_4 = FUNC_10(VAR_0, VAR_1->client, &VAR_3);
    if(VAR_4)
 FUNC_4(1);
    FUNC_13(FUNC_0("Client: %s\n", ""), VAR_3);
    FUNC_5 (VAR_3);

    {
 Ticket VAR_6;
 size_t VAR_7;
 char *VAR_8;

 FUNC_3(VAR_1->ticket.data, VAR_1->ticket.length, &VAR_6, &VAR_7);
 VAR_4 = FUNC_7(VAR_0, VAR_6.enc_part.etype, &VAR_8);
 FUNC_13(FUNC_0("Ticket etype: ", ""));
 if (VAR_4 == 0) {
     FUNC_13("%s", VAR_8);
     FUNC_5(VAR_8);
 } else {
     FUNC_13(FUNC_0("unknown-enctype(%d)", ""), VAR_6.enc_part.etype);
 }
 if(VAR_6.enc_part.kvno)
     FUNC_13(FUNC_0(", kvno %d", ""), *VAR_6.enc_part.kvno);
 FUNC_13("\n");
 if(VAR_1->session.keytype != VAR_6.enc_part.etype) {
     VAR_4 = FUNC_7(VAR_0, VAR_1->session.keytype, &VAR_3);
     if(VAR_4)
  FUNC_11(VAR_0, VAR_4, "session keytype");
     else {
  FUNC_13(FUNC_0("Session key: %s\n", "enctype"), VAR_3);
  FUNC_5(VAR_3);
     }
 }
 FUNC_6(&VAR_6);
 FUNC_13(FUNC_0("Ticket length: %lu\n", ""),
        (unsigned long)VAR_1->ticket.length);
    }
    FUNC_13(FUNC_0("Auth time:  %s\n", ""),
    FUNC_12(VAR_1->times.authtime));
    if(VAR_1->times.authtime != VAR_1->times.starttime)
 FUNC_13(FUNC_0("Start time: %s\n", ""),
        FUNC_12(VAR_1->times.starttime));
    FUNC_13(FUNC_0("End time:   %s", ""),
    FUNC_12(VAR_1->times.endtime));
    if(VAR_5 > VAR_1->times.endtime)
 FUNC_13(FUNC_0(" (expired)", ""));
    FUNC_13("\n");
    if(VAR_1->flags.b.renewable)
 FUNC_13(FUNC_0("Renew till: %s\n", ""),
        FUNC_12(VAR_1->times.renew_till));
    {
 char VAR_9[1024];
 FUNC_14(FUNC_1(VAR_1->flags.b),
        FUNC_2(),
        VAR_9, sizeof(VAR_9));
 FUNC_13(FUNC_0("Ticket flags: %s\n", ""), VAR_9);
    }
    FUNC_13(FUNC_0("Addresses: ", ""));
    if (VAR_1->addresses.len != 0) {
 for(VAR_2 = 0; VAR_2 < VAR_1->addresses.len; VAR_2++){
     char VAR_10[128];
     size_t VAR_11;
     if(VAR_2) FUNC_13(", ");
     VAR_4 = FUNC_8(&VAR_1->addresses.val[VAR_2],
         VAR_10, sizeof(VAR_10), &VAR_11);

     if(VAR_4 == 0)
  FUNC_13("%s", VAR_10);
 }
    } else {
 FUNC_13(FUNC_0("addressless", ""));
    }
    FUNC_13("\n\n");
}
