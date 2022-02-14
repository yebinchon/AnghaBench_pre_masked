
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_kafs_data {int context; } ;
struct kafs_data {struct krb5_kafs_data* data; } ;
typedef int krb5_realm ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,char const*,int **) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char *
FUNC_3(struct kafs_data *VAR_0, const char *VAR_1)
{
    struct krb5_kafs_data *VAR_2 = VAR_0->data;
    krb5_realm *VAR_3;
    char *VAR_4;
    if(FUNC_1(VAR_2->context, VAR_1, &VAR_3))
 return ((void*)0);
    VAR_4 = FUNC_2(VAR_3[0]);
    FUNC_0(VAR_2->context, VAR_3);
    return VAR_4;
}
