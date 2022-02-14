
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kcm_ntlm_cred {int uuid; int session; int uid; struct kcm_ntlm_cred* next; int nthash; int domain; int user; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int kcm_operation ;
struct TYPE_4__ {int session; int uid; } ;
typedef TYPE_1__ kcm_client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct kcm_ntlm_cred* FUNC_1 (int,int) ;
 struct kcm_ntlm_cred* FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (struct kcm_ntlm_cred*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int) ;
 struct kcm_ntlm_cred* VAR_1 ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_2,
       kcm_client *VAR_3,
       kcm_operation VAR_4,
       krb5_storage *VAR_5,
       krb5_storage *VAR_6)
{
    struct kcm_ntlm_cred *VAR_7, *VAR_8;
    krb5_error_code VAR_9;

    VAR_7 = FUNC_1(1, sizeof(*VAR_7));
    if (VAR_7 == ((void*)0))
 return VAR_0;

    FUNC_0(VAR_7->uuid, sizeof(VAR_7->uuid));

    VAR_9 = FUNC_5(VAR_5, &VAR_7->user);
    if (VAR_9)
 goto error;

    VAR_9 = FUNC_5(VAR_5, &VAR_7->domain);
    if (VAR_9)
 goto error;

    VAR_9 = FUNC_4(VAR_5, &VAR_7->nthash);
    if (VAR_9)
 goto error;


    VAR_8 = FUNC_2(VAR_7->user, VAR_7->domain, VAR_3);
    if (VAR_8) {
 krb5_data VAR_10 = VAR_8->nthash;
 VAR_8->nthash = VAR_7->nthash;
 VAR_7->nthash = VAR_10;
 FUNC_3(VAR_7);
 VAR_7 = VAR_8;
    } else {
 VAR_7->next = VAR_1;
 VAR_1 = VAR_7;
    }

    VAR_7->uid = VAR_3->uid;
    VAR_7->session = VAR_3->session;


    (void)FUNC_6(VAR_6, &VAR_7->uuid, sizeof(VAR_7->uuid));

    return 0;

 error:
    FUNC_3(VAR_7);

    return VAR_9;
}
