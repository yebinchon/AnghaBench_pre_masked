
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int time_t ;
struct sockaddr {int dummy; } ;
typedef int krb5_ticket ;
typedef int krb5_keyblock ;
struct TYPE_15__ {scalar_t__ max_datagram_reply_length; } ;
typedef TYPE_1__ krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_16__ {scalar_t__ length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_context ;
typedef int hdb_entry_ex ;
struct TYPE_17__ {int req_body; int * padata; } ;
typedef int PA_DATA ;
typedef TYPE_3__ KDC_REQ ;
typedef int AuthorizationData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (TYPE_3__*,int*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,TYPE_1__*,int ,char*,char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,scalar_t__,int *,int *,int *,int *,int*,int*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*,TYPE_3__*,int *,int *,int ,int *,int,int *,TYPE_2__*,char const*,char const**,int**,struct sockaddr*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*,int *,int const*,int **,int *,int **,char const**,char const*,struct sockaddr*,int**,int**,int**,int **,int*) ;

krb5_error_code
FUNC_11(krb5_context VAR_6,
      krb5_kdc_configuration *VAR_7,
      KDC_REQ *VAR_8,
      krb5_data *VAR_9,
      const char *VAR_10,
      struct sockaddr *VAR_11,
      int VAR_12)
{
    AuthorizationData *VAR_13 = ((void*)0);
    krb5_error_code VAR_14;
    int VAR_15 = 0;
    const PA_DATA *VAR_16;

    hdb_entry_ex *VAR_17 = ((void*)0);
    krb5_ticket *VAR_18 = ((void*)0);
    const char *VAR_19 = ((void*)0);
    krb5_enctype VAR_20 = VAR_0;

    krb5_keyblock *VAR_21 = ((void*)0);
    int VAR_22 = 0;
    time_t *VAR_23 = ((void*)0);
    int *VAR_24 = ((void*)0);

    if(VAR_8->padata == ((void*)0)){
 VAR_14 = VAR_3;
 FUNC_4(VAR_6, VAR_7, 0,
  "TGS-REQ from %s without PA-DATA", VAR_10);
 goto out;
    }

    VAR_16 = FUNC_0(VAR_8, &VAR_15, VAR_5);

    if(VAR_16 == ((void*)0)){
 VAR_14 = VAR_2;

 FUNC_4(VAR_6, VAR_7, 0,
  "TGS-REQ from %s without PA-TGS-REQ", VAR_10);
 goto out;
    }
    VAR_14 = FUNC_10(VAR_6, VAR_7,
       &VAR_8->req_body, VAR_16,
       &VAR_17,
       &VAR_20,
       &VAR_18,
       &VAR_19,
       VAR_10, VAR_11,
       &VAR_23, &VAR_24,
       &VAR_13,
       &VAR_21,
       &VAR_22);
    if (VAR_14 == VAR_1) {

 goto out;
    }
    if (VAR_14) {
 FUNC_4(VAR_6, VAR_7, 0,
  "Failed parsing TGS-REQ from %s", VAR_10);
 goto out;
    }

    VAR_14 = FUNC_9(VAR_6,
     VAR_7,
     VAR_8,
     &VAR_8->req_body,
     VAR_17,
     VAR_20,
     VAR_21,
     VAR_22,
     VAR_18,
     VAR_9,
     VAR_10,
     &VAR_19,
     &VAR_13,
     VAR_11);
    if (VAR_14) {
 FUNC_4(VAR_6, VAR_7, 0,
  "Failed building TGS-REP to %s", VAR_10);
 goto out;
    }


    if (VAR_12 && VAR_9->length > VAR_7->max_datagram_reply_length) {
 FUNC_5(VAR_9);
 VAR_14 = VAR_4;
 VAR_19 = "Reply packet too large";
    }

out:
    if (VAR_21)
 FUNC_6(VAR_6, VAR_21);
    if(VAR_14 && VAR_14 != VAR_1 && VAR_9->data == ((void*)0)){
 FUNC_8(VAR_6,
        VAR_14,
        ((void*)0),
        ((void*)0),
        ((void*)0),
        ((void*)0),
        VAR_23,
        VAR_24,
        VAR_9);
 VAR_14 = 0;
    }
    FUNC_2(VAR_23);
    FUNC_2(VAR_24);
    if (VAR_18)
 FUNC_7(VAR_6, VAR_18);
    if(VAR_17)
 FUNC_1(VAR_6, VAR_17);

    if (VAR_13) {
 FUNC_3(VAR_13);
 FUNC_2(VAR_13);
    }

    return VAR_14;
}
