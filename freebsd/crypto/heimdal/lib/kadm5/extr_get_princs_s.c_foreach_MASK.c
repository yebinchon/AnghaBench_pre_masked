
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct foreach_data {scalar_t__ exp2; scalar_t__ exp; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int principal; } ;
struct TYPE_5__ {TYPE_1__ entry; } ;
typedef TYPE_2__ hdb_entry_ex ;
typedef int HDB ;


 scalar_t__ FUNC_0 (struct foreach_data*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_0, HDB *VAR_1, hdb_entry_ex *VAR_2, void *VAR_3)
{
    struct foreach_data *VAR_4 = VAR_3;
    char *VAR_5;
    krb5_error_code VAR_6;
    VAR_6 = FUNC_3(VAR_0, VAR_2->entry.principal, &VAR_5);
    if(VAR_6)
 return VAR_6;
    if(VAR_4->exp){
 if(FUNC_1(VAR_4->exp, VAR_5, 0) == 0 || FUNC_1(VAR_4->exp2, VAR_5, 0) == 0)
     VAR_6 = FUNC_0(VAR_4, VAR_5);
 else
     FUNC_2(VAR_5);
    }else{
 VAR_6 = FUNC_0(VAR_4, VAR_5);
    }
    if(VAR_6)
 FUNC_2(VAR_5);
    return VAR_6;
}
