
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int krb5_principal ;
typedef int krb5_preauthtype ;
typedef TYPE_4__* krb5_init_creds_context ;
struct TYPE_21__ {int flags; int etype_list_length; int preauth_list_length; int anonymous; int preauth_list; int etype_list; TYPE_2__* opt_private; int * address_list; int proxiable; int forwardable; } ;
typedef TYPE_5__ krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef scalar_t__ krb5_deltat ;
typedef int krb5_context ;
struct TYPE_19__ {int canonicalize; int postdated; int renewable; int request_anonymous; int proxiable; int forwardable; } ;
struct TYPE_17__ {scalar_t__ renew_till; } ;
struct TYPE_16__ {TYPE_1__ times; } ;
struct TYPE_20__ {int req_pac; int ic_flags; TYPE_3__ flags; int * pre_auth_types; int * etypes; int * addrs; TYPE_12__ cred; int * keyproc; int pk_init_ctx; } ;
struct TYPE_18__ {int req_pac; int flags; int addressless; int pk_init_ctx; int * key_proc; scalar_t__ password; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,char*) ;
 int * VAR_11 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_12__*,int ,scalar_t__,TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_5__**) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (int ,int *,char const*,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*,int *) ;
 char* FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,scalar_t__,int ) ;
 int * FUNC_11 (int) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (TYPE_4__*,int ,int) ;
 int VAR_12 ;

__attribute__((used)) static krb5_error_code
FUNC_14(krb5_context VAR_13,
        krb5_principal VAR_14,
        krb5_deltat VAR_15,
        krb5_get_init_creds_opt *VAR_16,
        krb5_init_creds_context VAR_17)
{
    krb5_get_init_creds_opt *VAR_18 = ((void*)0);
    krb5_error_code VAR_19;
    krb5_enctype *VAR_20;
    krb5_preauthtype *VAR_21;

    FUNC_13(VAR_17, 0, sizeof(*VAR_17));

    if (VAR_16 == ((void*)0)) {
 const char *VAR_22 = FUNC_8(VAR_13, VAR_14);

        FUNC_3 (VAR_13, &VAR_18);
 VAR_16 = VAR_18;
 FUNC_5(VAR_13, ((void*)0), VAR_22, VAR_16);
    }

    if (VAR_16->opt_private) {
 if (VAR_16->opt_private->password) {
     VAR_19 = FUNC_6(VAR_13, VAR_17,
            VAR_16->opt_private->password);
     if (VAR_19)
  goto out;
 }

 VAR_17->keyproc = VAR_16->opt_private->key_proc;
 VAR_17->req_pac = VAR_16->opt_private->req_pac;
 VAR_17->pk_init_ctx = VAR_16->opt_private->pk_init_ctx;
 VAR_17->ic_flags = VAR_16->opt_private->flags;
    } else
 VAR_17->req_pac = 128;

    if (VAR_17->keyproc == ((void*)0))
 VAR_17->keyproc = VAR_11;


    if ((VAR_17->ic_flags & VAR_8) ||
 FUNC_9(VAR_13, VAR_14) == VAR_9)
 VAR_17->flags.canonicalize = 1;

    VAR_17->pre_auth_types = ((void*)0);
    VAR_17->addrs = ((void*)0);
    VAR_17->etypes = ((void*)0);
    VAR_17->pre_auth_types = ((void*)0);

    VAR_19 = FUNC_2(VAR_13, &VAR_17->cred, VAR_14, VAR_15, VAR_16);
    if (VAR_19) {
 if (VAR_18)
     FUNC_4(VAR_13, VAR_18);
 return VAR_19;
    }

    VAR_19 = FUNC_7(VAR_13, VAR_17, ((void*)0));
    if (VAR_19)
 goto out;

    if (VAR_16->flags & VAR_5)
 VAR_17->flags.forwardable = VAR_16->forwardable;

    if (VAR_16->flags & VAR_7)
 VAR_17->flags.proxiable = VAR_16->proxiable;

    if (VAR_15)
 VAR_17->flags.postdated = 1;
    if (VAR_17->cred.times.renew_till)
 VAR_17->flags.renewable = 1;
    if (VAR_16->flags & VAR_2) {
 VAR_17->addrs = VAR_16->address_list;
    } else if (VAR_16->opt_private) {
 switch (VAR_16->opt_private->addressless) {
 case 128:

     VAR_17->addrs = &VAR_12;



     break;
 case 130:
     VAR_17->addrs = ((void*)0);
     break;
 case 129:
     VAR_17->addrs = &VAR_12;
     break;
 }
    }
    if (VAR_16->flags & VAR_4) {
 if (VAR_17->etypes)
     FUNC_1(VAR_17->etypes);

 VAR_20 = FUNC_11((VAR_16->etype_list_length + 1)
   * sizeof(krb5_enctype));
 if (VAR_20 == ((void*)0)) {
     VAR_19 = VAR_0;
     FUNC_10(VAR_13, VAR_19, FUNC_0("malloc: out of memory", ""));
     goto out;
 }
 FUNC_12 (VAR_20, VAR_16->etype_list,
  VAR_16->etype_list_length * sizeof(krb5_enctype));
 VAR_20[VAR_16->etype_list_length] = VAR_1;
 VAR_17->etypes = VAR_20;
    }
    if (VAR_16->flags & VAR_6) {
 VAR_21 = FUNC_11((VAR_16->preauth_list_length + 1)
    * sizeof(krb5_preauthtype));
 if (VAR_21 == ((void*)0)) {
     VAR_19 = VAR_0;
     FUNC_10(VAR_13, VAR_19, FUNC_0("malloc: out of memory", ""));
     goto out;
 }
 FUNC_12 (VAR_21, VAR_16->preauth_list,
  VAR_16->preauth_list_length * sizeof(krb5_preauthtype));
 VAR_21[VAR_16->preauth_list_length] = VAR_10;
 VAR_17->pre_auth_types = VAR_21;
    }
    if (VAR_16->flags & VAR_3)
 VAR_17->flags.request_anonymous = VAR_16->anonymous;
    if (VAR_18)
        FUNC_4(VAR_13, VAR_18);
    return 0;
 out:
    if (VAR_18)
 FUNC_4(VAR_13, VAR_18);
    return VAR_19;
}
