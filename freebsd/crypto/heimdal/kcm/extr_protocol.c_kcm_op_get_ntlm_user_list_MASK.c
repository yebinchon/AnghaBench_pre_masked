
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcm_ntlm_cred {int domain; int user; int session; int uid; struct kcm_ntlm_cred* next; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;


 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int) ;
 struct kcm_ntlm_cred* VAR_0 ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_1,
     kcm_client *VAR_2,
     kcm_operation VAR_3,
     krb5_storage *VAR_4,
     krb5_storage *VAR_5)
{
    struct kcm_ntlm_cred *VAR_6;
    krb5_error_code VAR_7;

    for (VAR_6 = VAR_0; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
 if (!FUNC_0(VAR_2, VAR_6->uid, VAR_6->session))
     continue;

 VAR_7 = FUNC_2(VAR_5, 1);
 if (VAR_7)
     return VAR_7;
 VAR_7 = FUNC_1(VAR_5, VAR_6->user);
 if (VAR_7)
     return VAR_7;
 VAR_7 = FUNC_1(VAR_5, VAR_6->domain);
 if (VAR_7)
     return VAR_7;
    }
    return FUNC_2(VAR_5, 0);
}
