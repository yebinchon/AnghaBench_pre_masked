
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_kafs_data {int context; } ;
struct kafs_data {struct krb5_kafs_data* data; } ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static void
FUNC_1(struct kafs_data *VAR_0, const char *VAR_1)
{
    struct krb5_kafs_data *VAR_2 = VAR_0->data;
    FUNC_0(VAR_2->context, VAR_1);
}
