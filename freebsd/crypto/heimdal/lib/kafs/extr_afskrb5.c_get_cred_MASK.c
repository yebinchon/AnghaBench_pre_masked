
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uid_t ;
struct krb5_kafs_data {int context; int id; } ;
struct kafs_token {int dummy; } ;
struct kafs_data {struct krb5_kafs_data* data; } ;
typedef int krb5_error_code ;
struct TYPE_8__ {int keytype; } ;
struct TYPE_9__ {int client; int server; TYPE_1__ session; } ;
typedef TYPE_2__ krb5_creds ;
typedef int in_creds ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,TYPE_2__*,TYPE_2__**) ;
 int FUNC_7 (int ,int *,char const*,char const*,char const*,int *) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int ,int ,TYPE_2__*,int ,char const*,struct kafs_token*) ;

__attribute__((used)) static int
FUNC_10(struct kafs_data *VAR_2, const char *VAR_3, const char *VAR_4,
  const char *VAR_5, uid_t VAR_6, struct kafs_token *VAR_7)
{
    krb5_error_code VAR_8;
    krb5_creds VAR_9, *VAR_10;
    struct krb5_kafs_data *VAR_11 = VAR_2->data;
    int VAR_12;

    FUNC_8(&VAR_9, 0, sizeof(VAR_9));

    VAR_8 = FUNC_7(VAR_11->context, &VAR_9.server,
         VAR_5, VAR_3, VAR_4, ((void*)0));
    if(VAR_8)
 return VAR_8;
    VAR_8 = FUNC_0(VAR_11->context, VAR_11->id, &VAR_9.client);
    if(VAR_8){
 FUNC_5(VAR_11->context, VAR_9.server);
 return VAR_8;
    }

    VAR_9.session.keytype = VAR_0;


    VAR_12 = FUNC_3(VAR_11->context, VAR_9.session.keytype);
    if (VAR_12)
 FUNC_2(VAR_11->context, VAR_9.session.keytype);

    VAR_8 = FUNC_6(VAR_11->context, 0, VAR_11->id, &VAR_9, &VAR_10);
    if (VAR_8) {
 VAR_9.session.keytype = VAR_1;
 VAR_8 = FUNC_6(VAR_11->context, 0, VAR_11->id, &VAR_9, &VAR_10);
    }

    if (VAR_12)
 FUNC_1(VAR_11->context, VAR_9.session.keytype);

    FUNC_5(VAR_11->context, VAR_9.server);
    FUNC_5(VAR_11->context, VAR_9.client);
    if(VAR_8)
 return VAR_8;

    VAR_8 = FUNC_9(VAR_11->context, VAR_11->id, VAR_10, VAR_6,
       (VAR_4 != ((void*)0) && VAR_4[0] != '\0') ? VAR_4 : VAR_5, VAR_7);
    FUNC_4(VAR_11->context, VAR_10);

    return VAR_8;
}
