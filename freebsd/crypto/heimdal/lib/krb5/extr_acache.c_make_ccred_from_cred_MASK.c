
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_16__ ;
typedef struct TYPE_28__ TYPE_15__ ;
typedef struct TYPE_27__ TYPE_14__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_26__ {scalar_t__ anonymous; scalar_t__ ok_as_delegate; scalar_t__ transited_policy_checked; scalar_t__ hw_authent; scalar_t__ pre_authent; scalar_t__ initial; scalar_t__ renewable; scalar_t__ invalid; scalar_t__ postdated; scalar_t__ may_postdate; scalar_t__ proxy; scalar_t__ proxiable; scalar_t__ forwarded; scalar_t__ forwardable; } ;
struct TYPE_25__ {TYPE_13__ b; } ;
struct TYPE_24__ {int len; TYPE_10__* val; } ;
struct TYPE_37__ {int data; int length; } ;
struct TYPE_35__ {int data; int length; } ;
struct TYPE_33__ {int renew_till; int endtime; int starttime; int authtime; } ;
struct TYPE_31__ {int data; int length; } ;
struct TYPE_32__ {TYPE_2__ keyvalue; int keytype; } ;
struct TYPE_27__ {TYPE_12__ flags; TYPE_11__ addresses; TYPE_8__ second_ticket; TYPE_6__ ticket; TYPE_4__ times; TYPE_3__ session; int server; int client; } ;
typedef TYPE_14__ krb5_creds ;
typedef int krb5_context ;
struct TYPE_28__ {int length; int * data; int type; } ;
typedef TYPE_15__ cc_data ;
struct TYPE_36__ {int data; int length; } ;
struct TYPE_34__ {int data; int length; } ;
struct TYPE_30__ {int data; int length; int type; } ;
struct TYPE_29__ {int ticket_flags; TYPE_15__** addresses; int * authdata; TYPE_7__ second_ticket; TYPE_5__ ticket; int renew_till; int endtime; int starttime; int authtime; TYPE_1__ keyblock; int server; int client; } ;
typedef TYPE_16__ cc_credentials_v5_t ;
struct TYPE_38__ {int length; int data; } ;
struct TYPE_23__ {TYPE_9__ address; int addr_type; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_15__** FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_15__*) ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_16__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_15,
       const krb5_creds *VAR_16,
       cc_credentials_v5_t *VAR_17)
{
    krb5_error_code VAR_18;
    size_t VAR_19;

    FUNC_7(VAR_17, 0, sizeof(*VAR_17));

    VAR_18 = FUNC_4(VAR_15, VAR_16->client, &VAR_17->client);
    if (VAR_18)
 goto fail;

    VAR_18 = FUNC_4(VAR_15, VAR_16->server, &VAR_17->server);
    if (VAR_18)
 goto fail;

    VAR_17->keyblock.type = VAR_16->session.keytype;
    VAR_17->keyblock.length = VAR_16->session.keyvalue.length;
    VAR_17->keyblock.data = VAR_16->session.keyvalue.data;

    VAR_17->authtime = VAR_16->times.authtime;
    VAR_17->starttime = VAR_16->times.starttime;
    VAR_17->endtime = VAR_16->times.endtime;
    VAR_17->renew_till = VAR_16->times.renew_till;

    VAR_17->ticket.length = VAR_16->ticket.length;
    VAR_17->ticket.data = VAR_16->ticket.data;

    VAR_17->second_ticket.length = VAR_16->second_ticket.length;
    VAR_17->second_ticket.data = VAR_16->second_ticket.data;


    VAR_17->authdata = ((void*)0);

    VAR_17->addresses = FUNC_0(VAR_16->addresses.len + 1,
        sizeof(VAR_17->addresses[0]));
    if (VAR_17->addresses == ((void*)0)) {

 VAR_18 = VAR_0;
 goto fail;
    }

    for (VAR_19 = 0; VAR_19 < VAR_16->addresses.len; VAR_19++) {
 cc_data *VAR_20;
 VAR_20 = FUNC_5(sizeof(*VAR_20));
 if (VAR_20 == ((void*)0)) {
     VAR_18 = VAR_0;
     goto fail;
 }
 VAR_20->type = VAR_16->addresses.val[VAR_19].addr_type;
 VAR_20->length = VAR_16->addresses.val[VAR_19].address.length;
 VAR_20->data = FUNC_5(VAR_20->length);
 if (VAR_20->data == ((void*)0)) {
     FUNC_1(VAR_20);
     VAR_18 = VAR_0;
     goto fail;
 }
 FUNC_6(VAR_20->data, VAR_16->addresses.val[VAR_19].address.data,
        VAR_20->length);
 VAR_17->addresses[VAR_19] = VAR_20;
    }
    VAR_17->addresses[VAR_19] = ((void*)0);

    VAR_17->ticket_flags = 0;
    if (VAR_16->flags.b.forwardable)
 VAR_17->ticket_flags |= VAR_2;
    if (VAR_16->flags.b.forwarded)
 VAR_17->ticket_flags |= VAR_3;
    if (VAR_16->flags.b.proxiable)
 VAR_17->ticket_flags |= VAR_11;
    if (VAR_16->flags.b.proxy)
 VAR_17->ticket_flags |= VAR_12;
    if (VAR_16->flags.b.may_postdate)
 VAR_17->ticket_flags |= VAR_7;
    if (VAR_16->flags.b.postdated)
 VAR_17->ticket_flags |= VAR_9;
    if (VAR_16->flags.b.invalid)
 VAR_17->ticket_flags |= VAR_6;
    if (VAR_16->flags.b.renewable)
 VAR_17->ticket_flags |= VAR_13;
    if (VAR_16->flags.b.initial)
 VAR_17->ticket_flags |= VAR_5;
    if (VAR_16->flags.b.pre_authent)
 VAR_17->ticket_flags |= VAR_10;
    if (VAR_16->flags.b.hw_authent)
 VAR_17->ticket_flags |= VAR_4;
    if (VAR_16->flags.b.transited_policy_checked)
 VAR_17->ticket_flags |= VAR_14;
    if (VAR_16->flags.b.ok_as_delegate)
 VAR_17->ticket_flags |= VAR_8;
    if (VAR_16->flags.b.anonymous)
 VAR_17->ticket_flags |= VAR_1;

    return 0;

fail:
    FUNC_2(VAR_17);

    FUNC_3(VAR_15);
    return VAR_18;
}
