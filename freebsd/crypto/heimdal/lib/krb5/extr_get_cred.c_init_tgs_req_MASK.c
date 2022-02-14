
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_24__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_16__ ;


typedef int krb5_keyblock ;
struct TYPE_31__ {int b; } ;
typedef TYPE_3__ krb5_kdc_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_27__ {scalar_t__ keytype; } ;
struct TYPE_29__ {scalar_t__* val; int len; } ;
struct TYPE_30__ {TYPE_24__ endtime; } ;
struct TYPE_32__ {int authdata; TYPE_16__ session; TYPE_2__ times; TYPE_1__* server; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef TYPE_5__* krb5_auth_context ;
typedef int krb5_addresses ;
typedef int Ticket ;
struct TYPE_36__ {unsigned int nonce; int * addresses; TYPE_24__* additional_tickets; TYPE_24__* till; TYPE_24__* sname; int realm; int kdc_options; TYPE_24__ etype; } ;
struct TYPE_35__ {int len; int * val; } ;
struct TYPE_34__ {int pvno; TYPE_8__ req_body; TYPE_24__* padata; int msg_type; } ;
struct TYPE_33__ {int local_subkey; } ;
struct TYPE_28__ {int name; int realm; } ;
typedef TYPE_6__ TGS_REQ ;
typedef TYPE_7__ METHOD_DATA ;


 int FUNC_0 (TYPE_24__*,int) ;
 int FUNC_1 (TYPE_24__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,int ,int *,scalar_t__**,int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_24__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_10 (int ,TYPE_5__*,TYPE_16__*) ;
 scalar_t__ FUNC_11 (int ,TYPE_5__*,int **) ;
 scalar_t__ FUNC_12 (int ,TYPE_5__**) ;
 int FUNC_13 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_14 (int ,TYPE_5__*,TYPE_8__*,scalar_t__*,TYPE_4__*) ;
 int FUNC_15 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_16 (int ,TYPE_8__*,int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_17 (krb5_context VAR_3,
       krb5_ccache VAR_4,
       krb5_addresses *VAR_5,
       krb5_kdc_flags VAR_6,
       Ticket *VAR_7,
       krb5_creds *VAR_8,
       krb5_creds *VAR_9,
       unsigned VAR_10,
       const METHOD_DATA *VAR_11,
       krb5_keyblock **VAR_12,
       TGS_REQ *VAR_13)
{
    krb5_auth_context VAR_14 = ((void*)0);
    krb5_error_code VAR_15 = 0;

    FUNC_15(VAR_13, 0, sizeof(*VAR_13));
    VAR_13->pvno = 5;
    VAR_13->msg_type = VAR_2;
    if (VAR_8->session.keytype) {
 FUNC_1(&VAR_13->req_body.etype, 1);
 if(VAR_13->req_body.etype.val == ((void*)0)) {
     VAR_15 = VAR_0;
     FUNC_13(VAR_3, VAR_15,
       FUNC_2("malloc: out of memory", ""));
     goto fail;
 }
 VAR_13->req_body.etype.val[0] = VAR_8->session.keytype;
    } else {
 VAR_15 = FUNC_3(VAR_3,
          VAR_1,
          &VAR_13->req_body.etype.len,
          &VAR_13->req_body.etype.val,
          ((void*)0));
    }
    if (VAR_15)
 goto fail;
    VAR_13->req_body.addresses = VAR_5;
    VAR_13->req_body.kdc_options = VAR_6.b;
    VAR_15 = FUNC_6(&VAR_8->server->realm, &VAR_13->req_body.realm);
    if (VAR_15)
 goto fail;
    FUNC_0(VAR_13->req_body.sname, 1);
    if (VAR_13->req_body.sname == ((void*)0)) {
 VAR_15 = VAR_0;
 FUNC_13(VAR_3, VAR_15, FUNC_2("malloc: out of memory", ""));
 goto fail;
    }




    VAR_15 = FUNC_5(&VAR_8->server->name, VAR_13->req_body.sname);
    if (VAR_15)
 goto fail;



    FUNC_0(VAR_13->req_body.till, 1);
    if(VAR_13->req_body.till == ((void*)0)){
 VAR_15 = VAR_0;
 FUNC_13(VAR_3, VAR_15, FUNC_2("malloc: out of memory", ""));
 goto fail;
    }
    *VAR_13->req_body.till = VAR_8->times.endtime;

    VAR_13->req_body.nonce = VAR_10;
    if(VAR_7){
 FUNC_0(VAR_13->req_body.additional_tickets, 1);
 if (VAR_13->req_body.additional_tickets == ((void*)0)) {
     VAR_15 = VAR_0;
     FUNC_13(VAR_3, VAR_15,
       FUNC_2("malloc: out of memory", ""));
     goto fail;
 }
 FUNC_1(VAR_13->req_body.additional_tickets, 1);
 if (VAR_13->req_body.additional_tickets->val == ((void*)0)) {
     VAR_15 = VAR_0;
     FUNC_13(VAR_3, VAR_15,
       FUNC_2("malloc: out of memory", ""));
     goto fail;
 }
 VAR_15 = FUNC_7(VAR_7, VAR_13->req_body.additional_tickets->val);
 if (VAR_15)
     goto fail;
    }
    FUNC_0(VAR_13->padata, 1);
    if (VAR_13->padata == ((void*)0)) {
 VAR_15 = VAR_0;
 FUNC_13(VAR_3, VAR_15, FUNC_2("malloc: out of memory", ""));
 goto fail;
    }
    FUNC_1(VAR_13->padata, 1 + VAR_11->len);
    if (VAR_13->padata->val == ((void*)0)) {
 VAR_15 = VAR_0;
 FUNC_13(VAR_3, VAR_15, FUNC_2("malloc: out of memory", ""));
 goto fail;
    }
    {
 size_t VAR_16;
 for (VAR_16 = 0; VAR_16 < VAR_11->len; VAR_16++) {
     VAR_15 = FUNC_4(&VAR_11->val[VAR_16], &VAR_13->padata->val[VAR_16 + 1]);
     if (VAR_15) {
  FUNC_13(VAR_3, VAR_15,
           FUNC_2("malloc: out of memory", ""));
  goto fail;
     }
 }
    }

    VAR_15 = FUNC_12(VAR_3, &VAR_14);
    if(VAR_15)
 goto fail;

    VAR_15 = FUNC_10(VAR_3, VAR_14, &VAR_9->session);
    if (VAR_15)
 goto fail;

    VAR_15 = FUNC_16 (VAR_3, &VAR_13->req_body, &VAR_8->authdata,
    VAR_14->local_subkey);
    if (VAR_15)
 goto fail;

    VAR_15 = FUNC_14(VAR_3,
     VAR_14,
     &VAR_13->req_body,
     &VAR_13->padata->val[0],
     VAR_9);
    if(VAR_15)
 goto fail;

    VAR_15 = FUNC_11(VAR_3, VAR_14, VAR_12);
    if (VAR_15)
 goto fail;

fail:
    if (VAR_14)
 FUNC_9(VAR_3, VAR_14);
    if (VAR_15) {
 VAR_13->req_body.addresses = ((void*)0);
 FUNC_8 (VAR_13);
    }
    return VAR_15;
}
