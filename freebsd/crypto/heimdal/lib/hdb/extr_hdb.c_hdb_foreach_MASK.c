
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ (* hdb_foreach_func_t ) (int ,TYPE_1__*,int *,void*) ;
typedef int hdb_entry_ex ;
struct TYPE_8__ {scalar_t__ (* hdb_firstkey ) (int ,TYPE_1__*,unsigned int,int *) ;scalar_t__ (* hdb_nextkey ) (int ,TYPE_1__*,unsigned int,int *) ;} ;
typedef TYPE_1__ HDB ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,unsigned int,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int *,void*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,unsigned int,int *) ;

krb5_error_code
FUNC_5(krb5_context VAR_1,
     HDB *VAR_2,
     unsigned VAR_3,
     hdb_foreach_func_t VAR_4,
     void *VAR_5)
{
    krb5_error_code VAR_6;
    hdb_entry_ex VAR_7;
    VAR_6 = VAR_2->hdb_firstkey(VAR_1, VAR_2, VAR_3, &VAR_7);
    if (VAR_6 == 0)
 FUNC_1(VAR_1);
    while(VAR_6 == 0){
 VAR_6 = (*VAR_4)(VAR_1, VAR_2, &VAR_7, VAR_5);
 FUNC_0(VAR_1, &VAR_7);
 if(VAR_6 == 0)
     VAR_6 = VAR_2->hdb_nextkey(VAR_1, VAR_2, VAR_3, &VAR_7);
    }
    if(VAR_6 == VAR_0)
 VAR_6 = 0;
    return VAR_6;
}
