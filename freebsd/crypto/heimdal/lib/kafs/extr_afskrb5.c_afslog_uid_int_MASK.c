
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct krb5_kafs_data {int context; int realm; int id; } ;
struct kafs_token {int * ticket; int ticket_len; int ct; } ;
struct kafs_data {struct krb5_kafs_data* data; } ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;


 scalar_t__ FUNC_0 (struct kafs_data*,int ,char const*) ;
 scalar_t__ FUNC_1 (struct kafs_data*,char const*,int ,char const*,int ,struct kafs_token*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int *,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_7(struct kafs_data *VAR_0, const char *VAR_1, const char *VAR_2,
        uid_t VAR_3, const char *VAR_4)
{
    krb5_error_code VAR_5;
    struct kafs_token VAR_6;
    krb5_principal VAR_7;
    const char *VAR_8;
    struct krb5_kafs_data *VAR_9 = VAR_0->data;

    if (VAR_1 == 0 || VAR_1[0] == 0)
 return FUNC_0 (VAR_0, VAR_3, VAR_4);

    VAR_5 = FUNC_4 (VAR_9->context, VAR_9->id, &VAR_7);
    if (VAR_5)
 return VAR_5;

    VAR_8 = FUNC_6 (VAR_9->context, VAR_7);

    VAR_6.ticket = ((void*)0);
    VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_9->realm, VAR_8, VAR_3, &VAR_6);
    FUNC_5 (VAR_9->context, VAR_7);

    if(VAR_5 == 0) {
 VAR_5 = FUNC_3(VAR_1, &VAR_6.ct, VAR_6.ticket, VAR_6.ticket_len);
 FUNC_2(VAR_6.ticket);
    }
    return VAR_5;
}
