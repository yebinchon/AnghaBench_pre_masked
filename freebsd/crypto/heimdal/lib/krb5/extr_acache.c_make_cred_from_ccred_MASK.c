
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_29__ {int forwardable; int forwarded; int proxiable; int proxy; int may_postdate; int postdated; int invalid; int renewable; int initial; int pre_authent; int hw_authent; int transited_policy_checked; int ok_as_delegate; int anonymous; } ;
struct TYPE_30__ {TYPE_2__ b; int i; } ;
struct TYPE_22__ {unsigned int len; TYPE_10__* val; } ;
struct TYPE_24__ {unsigned int len; TYPE_14__* val; } ;
struct TYPE_34__ {int renew_till; int endtime; int starttime; int authtime; } ;
struct TYPE_31__ {int * data; int length; } ;
struct TYPE_32__ {TYPE_4__ keyvalue; int keytype; } ;
struct TYPE_26__ {TYPE_3__ flags; TYPE_11__ addresses; TYPE_13__ authdata; int second_ticket; int ticket; TYPE_7__ times; TYPE_5__ session; int server; int client; } ;
typedef TYPE_15__ krb5_creds ;
typedef int krb5_context ;
struct TYPE_36__ {int length; int data; } ;
struct TYPE_35__ {int length; int data; } ;
struct TYPE_33__ {int length; int data; int type; } ;
struct TYPE_27__ {int ticket_flags; TYPE_1__** addresses; TYPE_12__** authdata; TYPE_9__ second_ticket; TYPE_8__ ticket; int renew_till; int endtime; int starttime; int authtime; TYPE_6__ keyblock; int server; int client; } ;
typedef TYPE_16__ cc_credentials_v5_t ;
struct TYPE_28__ {int length; int data; int type; } ;
struct TYPE_25__ {int ad_data; int ad_type; } ;
struct TYPE_23__ {int length; int data; int type; } ;
struct TYPE_21__ {int address; int addr_type; } ;


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
 int FUNC_0 (char*,char*) ;
 void* FUNC_1 (unsigned int,int) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,TYPE_15__*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_15__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_15,
       const cc_credentials_v5_t *VAR_16,
       krb5_creds *VAR_17)
{
    krb5_error_code VAR_18;
    unsigned int VAR_19;

    FUNC_8(VAR_17, 0, sizeof(*VAR_17));

    VAR_18 = FUNC_4(VAR_15, VAR_16->client, &VAR_17->client);
    if (VAR_18)
 goto fail;

    VAR_18 = FUNC_4(VAR_15, VAR_16->server, &VAR_17->server);
    if (VAR_18)
 goto fail;

    VAR_17->session.keytype = VAR_16->keyblock.type;
    VAR_17->session.keyvalue.length = VAR_16->keyblock.length;
    VAR_17->session.keyvalue.data = FUNC_6(VAR_16->keyblock.length);
    if (VAR_17->session.keyvalue.data == ((void*)0))
 goto nomem;
    FUNC_7(VAR_17->session.keyvalue.data, VAR_16->keyblock.data,
    VAR_16->keyblock.length);

    VAR_17->times.authtime = VAR_16->authtime;
    VAR_17->times.starttime = VAR_16->starttime;
    VAR_17->times.endtime = VAR_16->endtime;
    VAR_17->times.renew_till = VAR_16->renew_till;

    VAR_18 = FUNC_2(&VAR_17->ticket,
    VAR_16->ticket.data,
    VAR_16->ticket.length);
    if (VAR_18)
 goto nomem;

    VAR_18 = FUNC_2(&VAR_17->second_ticket,
    VAR_16->second_ticket.data,
    VAR_16->second_ticket.length);
    if (VAR_18)
 goto nomem;

    VAR_17->authdata.val = ((void*)0);
    VAR_17->authdata.len = 0;

    VAR_17->addresses.val = ((void*)0);
    VAR_17->addresses.len = 0;

    for (VAR_19 = 0; VAR_16->authdata && VAR_16->authdata[VAR_19]; VAR_19++)
 ;

    if (VAR_19) {
 VAR_17->authdata.val = FUNC_1(VAR_19, sizeof(VAR_17->authdata.val[0]));
 if (VAR_17->authdata.val == ((void*)0))
     goto nomem;
 VAR_17->authdata.len = VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_17->authdata.len; VAR_19++) {
     VAR_17->authdata.val[VAR_19].ad_type = VAR_16->authdata[VAR_19]->type;
     VAR_18 = FUNC_2(&VAR_17->authdata.val[VAR_19].ad_data,
     VAR_16->authdata[VAR_19]->data,
     VAR_16->authdata[VAR_19]->length);
     if (VAR_18)
  goto nomem;
 }
    }

    for (VAR_19 = 0; VAR_16->addresses && VAR_16->addresses[VAR_19]; VAR_19++)
 ;

    if (VAR_19) {
 VAR_17->addresses.val = FUNC_1(VAR_19, sizeof(VAR_17->addresses.val[0]));
 if (VAR_17->addresses.val == ((void*)0))
     goto nomem;
 VAR_17->addresses.len = VAR_19;

 for (VAR_19 = 0; VAR_19 < VAR_17->addresses.len; VAR_19++) {
     VAR_17->addresses.val[VAR_19].addr_type = VAR_16->addresses[VAR_19]->type;
     VAR_18 = FUNC_2(&VAR_17->addresses.val[VAR_19].address,
     VAR_16->addresses[VAR_19]->data,
     VAR_16->addresses[VAR_19]->length);
     if (VAR_18)
  goto nomem;
 }
    }

    VAR_17->flags.i = 0;
    if (VAR_16->ticket_flags & VAR_2)
 VAR_17->flags.b.forwardable = 1;
    if (VAR_16->ticket_flags & VAR_3)
 VAR_17->flags.b.forwarded = 1;
    if (VAR_16->ticket_flags & VAR_11)
 VAR_17->flags.b.proxiable = 1;
    if (VAR_16->ticket_flags & VAR_12)
 VAR_17->flags.b.proxy = 1;
    if (VAR_16->ticket_flags & VAR_7)
 VAR_17->flags.b.may_postdate = 1;
    if (VAR_16->ticket_flags & VAR_9)
 VAR_17->flags.b.postdated = 1;
    if (VAR_16->ticket_flags & VAR_6)
 VAR_17->flags.b.invalid = 1;
    if (VAR_16->ticket_flags & VAR_13)
 VAR_17->flags.b.renewable = 1;
    if (VAR_16->ticket_flags & VAR_5)
 VAR_17->flags.b.initial = 1;
    if (VAR_16->ticket_flags & VAR_10)
 VAR_17->flags.b.pre_authent = 1;
    if (VAR_16->ticket_flags & VAR_4)
 VAR_17->flags.b.hw_authent = 1;
    if (VAR_16->ticket_flags & VAR_14)
 VAR_17->flags.b.transited_policy_checked = 1;
    if (VAR_16->ticket_flags & VAR_8)
 VAR_17->flags.b.ok_as_delegate = 1;
    if (VAR_16->ticket_flags & VAR_1)
 VAR_17->flags.b.anonymous = 1;

    return 0;

nomem:
    VAR_18 = VAR_0;
    FUNC_5(VAR_15, VAR_18, FUNC_0("malloc: out of memory", "malloc"));

fail:
    FUNC_3(VAR_15, VAR_17);
    return VAR_18;
}
