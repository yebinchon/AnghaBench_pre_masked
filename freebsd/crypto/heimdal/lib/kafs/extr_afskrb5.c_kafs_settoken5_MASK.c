
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kafs_token {int ticket; int ticket_len; int ct; } ;
typedef int krb5_creds ;
typedef int krb5_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int *,int ,int ) ;
 int FUNC_2 (int ,int *,int *,int ,char const*,struct kafs_token*) ;

int
FUNC_3(krb5_context VAR_0, const char *VAR_1, uid_t VAR_2,
        krb5_creds *VAR_3)
{
    struct kafs_token VAR_4;
    int VAR_5;

    VAR_5 = FUNC_2(VAR_0, ((void*)0), VAR_3, VAR_2, VAR_1, &VAR_4);
    if (VAR_5)
 return VAR_5;

    VAR_5 = FUNC_1(VAR_1, &VAR_4.ct, VAR_4.ticket, VAR_4.ticket_len);

    FUNC_0(VAR_4.ticket);

    return VAR_5;
}
