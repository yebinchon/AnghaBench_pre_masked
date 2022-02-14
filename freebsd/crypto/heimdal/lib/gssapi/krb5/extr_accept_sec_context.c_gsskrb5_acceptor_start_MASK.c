
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int * krb5_rd_req_out_ctx ;
typedef int * krb5_rd_req_in_ctx ;
typedef int * krb5_principal ;
typedef int * krb5_keytab ;
typedef int krb5_keyblock ;
typedef int krb5_flags ;
typedef int krb5_error_code ;
struct TYPE_37__ {int data; int length; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef TYPE_3__* krb5_authenticator ;
typedef int gsskrb5_name ;
typedef TYPE_4__* gsskrb5_ctx ;
typedef TYPE_5__* gsskrb5_cred ;
typedef int gss_name_t ;
typedef int gss_cred_id_t ;
typedef int gss_channel_bindings_t ;
typedef TYPE_6__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_42__ {scalar_t__ cksumtype; } ;
struct TYPE_41__ {int value; int length; } ;
struct TYPE_40__ {int * principal; int * keytab; } ;
struct TYPE_39__ {int flags; int more_flags; int state; int lifetime; TYPE_10__* ticket; TYPE_11__* auth_context; int fwd_data; int target; int source; int service_keyblock; } ;
struct TYPE_38__ {TYPE_9__* cksum; } ;
struct TYPE_36__ {int endtime; } ;
struct TYPE_35__ {int keyblock; } ;
struct TYPE_34__ {TYPE_1__ ticket; int client; int server; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int*,TYPE_4__*,int ) ;
 int FUNC_2 (int*,TYPE_6__* const,TYPE_2__*,char*,int ) ;
 int FUNC_3 (int*,TYPE_2__*,TYPE_6__*,char*,int ) ;
 int * VAR_22 ;
 int FUNC_4 (int*,int ,int ,int*) ;
 int FUNC_5 (int*,int const,TYPE_9__*,int*,int *) ;
 int FUNC_6 (int ,TYPE_4__*,int) ;
 int FUNC_7 (int*,TYPE_4__*,int ,int *) ;
 int FUNC_8 (int ,TYPE_11__*,int ,int *) ;
 int FUNC_9 (int ,TYPE_11__*,TYPE_3__**) ;
 int FUNC_10 (int ,TYPE_11__*,int **) ;
 int FUNC_11 (int ,TYPE_11__*,int *) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int *) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int ,TYPE_3__**) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,TYPE_11__*,TYPE_2__*) ;
 int FUNC_19 (int ,TYPE_11__**,TYPE_2__*,int *,int *,int **) ;
 int FUNC_20 (int ,int **) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int ,int *,int *) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,int *,int*) ;
 int FUNC_25 (int ,int *,int *) ;
 int FUNC_26 (int ,int *,TYPE_10__**) ;
 int FUNC_27 (int ,int ,int ,int *,int ,TYPE_9__*) ;
 int FUNC_28 (int*,int ,int,int *,TYPE_2__*,TYPE_6__*) ;

__attribute__((used)) static OM_uint32
FUNC_29(OM_uint32 * VAR_23,
         gsskrb5_ctx VAR_24,
         krb5_context VAR_25,
         const gss_cred_id_t VAR_26,
         const gss_buffer_t VAR_27,
         const gss_channel_bindings_t VAR_28,
         gss_name_t * VAR_29,
         gss_OID * VAR_30,
         gss_buffer_t VAR_31,
         OM_uint32 * VAR_32,
         OM_uint32 * VAR_33,
         gss_cred_id_t * VAR_34)
{
    krb5_error_code VAR_35;
    OM_uint32 VAR_36 = VAR_13;
    krb5_data VAR_37;
    krb5_flags VAR_38;
    krb5_keytab VAR_39 = ((void*)0);
    int VAR_40 = 0;
    const gsskrb5_cred VAR_41 = (gsskrb5_cred)VAR_26;




    VAR_36 = FUNC_2 (VAR_23,
    VAR_27,
    &VAR_37,
    "\x01\x00",
    VAR_10);

    if (VAR_36) {

 VAR_37.length = VAR_27->length;
 VAR_37.data = VAR_27->value;
    }




    if (VAR_41 == ((void*)0)) {
 if (VAR_22 != ((void*)0))
     VAR_39 = VAR_22;
    } else if (VAR_41->keytab != ((void*)0)) {
 VAR_39 = VAR_41->keytab;
    }





    {
 krb5_rd_req_in_ctx VAR_42 = ((void*)0);
 krb5_rd_req_out_ctx VAR_43 = ((void*)0);
 krb5_principal VAR_44 = ((void*)0);

 if (VAR_41)
     VAR_44 = VAR_41->principal;

 VAR_35 = FUNC_20(VAR_25, &VAR_42);
 if (VAR_35 == 0)
     VAR_35 = FUNC_22(VAR_25, VAR_42, VAR_39);
 if (VAR_35) {
     if (VAR_42)
  FUNC_21(VAR_25, VAR_42);
     *VAR_23 = VAR_35;
     return VAR_15;
 }

 VAR_35 = FUNC_19(VAR_25,
          &VAR_24->auth_context,
          &VAR_37,
          VAR_44,
          VAR_42, &VAR_43);
 FUNC_21(VAR_25, VAR_42);
 if (VAR_35 == VAR_17 || VAR_35 == VAR_18) {






     return FUNC_28(VAR_23, VAR_25, VAR_35,
        VAR_44, &VAR_37, VAR_31);
 } else if (VAR_35) {
     *VAR_23 = VAR_35;
     return VAR_15;
 }




 VAR_35 = FUNC_24(VAR_25, VAR_43,
        &VAR_38);
 if (VAR_35 == 0)
     VAR_35 = FUNC_26(VAR_25, VAR_43,
           &VAR_24->ticket);
 if (VAR_35 == 0)
     VAR_35 = FUNC_25(VAR_25, VAR_43,
      &VAR_24->service_keyblock);
 VAR_24->lifetime = VAR_24->ticket->ticket.endtime;

 FUNC_23(VAR_25, VAR_43);
 if (VAR_35) {
     VAR_36 = VAR_15;
     *VAR_23 = VAR_35;
     return VAR_36;
 }
    }






    VAR_35 = FUNC_12(VAR_25,
          VAR_24->ticket->client,
          &VAR_24->source);
    if (VAR_35) {
 VAR_36 = VAR_15;
 *VAR_23 = VAR_35;
    }

    VAR_35 = FUNC_12(VAR_25,
          VAR_24->ticket->server,
          &VAR_24->target);
    if (VAR_35) {
 VAR_36 = VAR_15;
 *VAR_23 = VAR_35;
 return VAR_36;
    }





    VAR_36 = FUNC_1(VAR_23, VAR_24, VAR_25);
    if (VAR_36)
 return VAR_36;

    if (VAR_29 != ((void*)0)) {
 VAR_35 = FUNC_12 (VAR_25,
        VAR_24->ticket->client,
        (gsskrb5_name*)VAR_29);
 if (VAR_35) {
     VAR_36 = VAR_15;
     *VAR_23 = VAR_35;
     return VAR_36;
 }
    }





    {
 krb5_authenticator VAR_45;

 VAR_35 = FUNC_9(VAR_25,
           VAR_24->auth_context,
           &VAR_45);
 if(VAR_35) {
     VAR_36 = VAR_15;
     *VAR_23 = VAR_35;
     return VAR_36;
 }

 if (VAR_45->cksum == ((void*)0)) {
     FUNC_16(VAR_25, &VAR_45);
     *VAR_23 = 0;
     return VAR_11;
 }

        if (VAR_45->cksum->cksumtype == VAR_4) {
            VAR_36 = FUNC_5(VAR_23,
      VAR_28,
      VAR_45->cksum,
      &VAR_24->flags,
      &VAR_24->fwd_data);

     FUNC_16(VAR_25, &VAR_45);
     if (VAR_36) {
  return VAR_36;
     }
        } else {
     krb5_crypto VAR_46;

     VAR_35 = FUNC_14(VAR_25,
        VAR_24->auth_context->keyblock,
        0, &VAR_46);
     if(VAR_35) {
  FUNC_16(VAR_25, &VAR_45);

  VAR_36 = VAR_15;
  *VAR_23 = VAR_35;
  return VAR_36;
     }






     VAR_35 = FUNC_27(VAR_25,
     VAR_46, VAR_20, ((void*)0), 0,
     VAR_45->cksum);
     FUNC_16(VAR_25, &VAR_45);
     FUNC_13(VAR_25, VAR_46);

     if(VAR_35) {
  VAR_36 = VAR_12;
  *VAR_23 = VAR_35;
  return VAR_36;
     }





      VAR_24->flags = VAR_7 | VAR_8;
     if (VAR_38 & VAR_2)
  VAR_24->flags |= VAR_6;
        }
    }

    if(VAR_24->flags & VAR_6) {
 krb5_data VAR_47;
 int VAR_48 = 0;

 FUNC_6(VAR_25, VAR_24, 1);
 VAR_40 = (VAR_24->more_flags & VAR_16);

 if (VAR_40 || (VAR_38 & VAR_3)) {
     VAR_48 = 1;
 } else {
     krb5_keyblock *VAR_49;





     VAR_35 = FUNC_10(VAR_25,
       VAR_24->auth_context,
       &VAR_49);
     if (VAR_35 == 0) {
  VAR_35 = FUNC_11(VAR_25,
          VAR_24->auth_context,
          VAR_49);
  if (VAR_35 == 0)
      VAR_48 = 1;
  FUNC_17(VAR_25, VAR_49);
     }
 }
 if (VAR_48) {
     VAR_24->more_flags |= VAR_0;
     FUNC_8(VAR_25, VAR_24->auth_context,
       VAR_19,
       ((void*)0));
 }

 VAR_35 = FUNC_18(VAR_25,
      VAR_24->auth_context,
      &VAR_47);
 if (VAR_35) {
     *VAR_23 = VAR_35;
     return VAR_15;
 }

 if (FUNC_0(VAR_24)) {
     VAR_31->length = VAR_47.length;
     VAR_31->value = VAR_47.data;
 } else {
     VAR_36 = FUNC_3(VAR_23,
           &VAR_47,
           VAR_31,
           "\x02\x00",
           VAR_10);
     FUNC_15 (&VAR_47);
     if (VAR_36)
  return VAR_36;
 }
    }

    VAR_24->flags |= VAR_9;



    VAR_24->lifetime = VAR_24->ticket->ticket.endtime;
    VAR_24->more_flags |= VAR_21;

    if (VAR_30)
 *VAR_30 = VAR_10;

    if (VAR_33) {
 VAR_36 = FUNC_4(VAR_23,
         VAR_25,
         VAR_24->lifetime,
         VAR_33);
 if (VAR_36) {
     return VAR_36;
 }
    }





    if (FUNC_0(VAR_24)) {




 if (VAR_32)
     *VAR_32 = (VAR_24->flags & ~VAR_5);

 VAR_24->state = VAR_1;
 return VAR_14;
    }

    VAR_36 = FUNC_7(VAR_23, VAR_24, VAR_25,
     VAR_34);

    if (VAR_32)
 *VAR_32 = VAR_24->flags;

    return VAR_36;
}
