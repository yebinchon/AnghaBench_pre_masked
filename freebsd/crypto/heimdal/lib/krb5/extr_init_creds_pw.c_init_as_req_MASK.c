
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_18__ {scalar_t__ renew_till; scalar_t__ endtime; scalar_t__ starttime; } ;
struct TYPE_21__ {TYPE_1__ times; TYPE_16__* server; TYPE_16__* client; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
struct TYPE_22__ {scalar_t__ len; } ;
typedef TYPE_5__ krb5_addresses ;
struct TYPE_24__ {scalar_t__ len; } ;
struct TYPE_19__ {int val; int len; } ;
struct TYPE_20__ {int * additional_tickets; int * enc_authorization_data; TYPE_8__* addresses; TYPE_2__ etype; scalar_t__ nonce; scalar_t__* rtime; scalar_t__* till; scalar_t__* from; int * sname; int realm; int * cname; int kdc_options; } ;
struct TYPE_23__ {int pvno; int * padata; TYPE_3__ req_body; int msg_type; } ;
struct TYPE_17__ {int realm; } ;
typedef int KDCOptions ;
typedef TYPE_6__ AS_REQ ;


 int FUNC_0 (scalar_t__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int const*) ;
 scalar_t__ FUNC_3 (int *,TYPE_16__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_5__ const*,TYPE_8__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_8__*) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 void* FUNC_10 (int) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_12 (krb5_context VAR_3,
      KDCOptions VAR_4,
      const krb5_creds *VAR_5,
      const krb5_addresses *VAR_6,
      const krb5_enctype *VAR_7,
      AS_REQ *VAR_8)
{
    krb5_error_code VAR_9;

    FUNC_11(VAR_8, 0, sizeof(*VAR_8));

    VAR_8->pvno = 5;
    VAR_8->msg_type = VAR_2;
    VAR_8->req_body.kdc_options = VAR_4;
    VAR_8->req_body.cname = FUNC_10(sizeof(*VAR_8->req_body.cname));
    if (VAR_8->req_body.cname == ((void*)0)) {
 VAR_9 = VAR_0;
 FUNC_9(VAR_3, VAR_9, FUNC_1("malloc: out of memory", ""));
 goto fail;
    }
    VAR_8->req_body.sname = FUNC_10(sizeof(*VAR_8->req_body.sname));
    if (VAR_8->req_body.sname == ((void*)0)) {
 VAR_9 = VAR_0;
 FUNC_9(VAR_3, VAR_9, FUNC_1("malloc: out of memory", ""));
 goto fail;
    }

    VAR_9 = FUNC_3 (VAR_8->req_body.cname, VAR_5->client);
    if (VAR_9)
 goto fail;
    VAR_9 = FUNC_4(&VAR_5->client->realm, &VAR_8->req_body.realm);
    if (VAR_9)
 goto fail;

    VAR_9 = FUNC_3 (VAR_8->req_body.sname, VAR_5->server);
    if (VAR_9)
 goto fail;

    if(VAR_5->times.starttime) {
 VAR_8->req_body.from = FUNC_10(sizeof(*VAR_8->req_body.from));
 if (VAR_8->req_body.from == ((void*)0)) {
     VAR_9 = VAR_0;
     FUNC_9(VAR_3, VAR_9, FUNC_1("malloc: out of memory", ""));
     goto fail;
 }
 *VAR_8->req_body.from = VAR_5->times.starttime;
    }
    if(VAR_5->times.endtime){
 FUNC_0(VAR_8->req_body.till, 1);
 *VAR_8->req_body.till = VAR_5->times.endtime;
    }
    if(VAR_5->times.renew_till){
 VAR_8->req_body.rtime = FUNC_10(sizeof(*VAR_8->req_body.rtime));
 if (VAR_8->req_body.rtime == ((void*)0)) {
     VAR_9 = VAR_0;
     FUNC_9(VAR_3, VAR_9, FUNC_1("malloc: out of memory", ""));
     goto fail;
 }
 *VAR_8->req_body.rtime = VAR_5->times.renew_till;
    }
    VAR_8->req_body.nonce = 0;
    VAR_9 = FUNC_2(VAR_3,
      VAR_1,
      &VAR_8->req_body.etype.len,
      &VAR_8->req_body.etype.val,
      VAR_7);
    if (VAR_9)
 goto fail;





    if (VAR_6 && VAR_6->len == 0) {
 VAR_8->req_body.addresses = ((void*)0);
    } else {
 VAR_8->req_body.addresses = FUNC_10(sizeof(*VAR_8->req_body.addresses));
 if (VAR_8->req_body.addresses == ((void*)0)) {
     VAR_9 = VAR_0;
     FUNC_9(VAR_3, VAR_9, FUNC_1("malloc: out of memory", ""));
     goto fail;
 }

 if (VAR_6)
     VAR_9 = FUNC_7(VAR_3, VAR_6, VAR_8->req_body.addresses);
 else {
     VAR_9 = FUNC_8 (VAR_3, VAR_8->req_body.addresses);
     if(VAR_9 == 0 && VAR_8->req_body.addresses->len == 0) {
  FUNC_5(VAR_8->req_body.addresses);
  VAR_8->req_body.addresses = ((void*)0);
     }
 }
 if (VAR_9)
     goto fail;
    }

    VAR_8->req_body.enc_authorization_data = ((void*)0);
    VAR_8->req_body.additional_tickets = ((void*)0);

    VAR_8->padata = ((void*)0);

    return 0;
 fail:
    FUNC_6(VAR_8);
    FUNC_11(VAR_8, 0, sizeof(*VAR_8));
    return VAR_9;
}
