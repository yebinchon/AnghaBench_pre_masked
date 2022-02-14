
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
struct TYPE_10__ {void* data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
struct TYPE_11__ {scalar_t__ (* hdb_unlock ) (int ,TYPE_2__*) ;scalar_t__ (* hdb__get ) (int ,TYPE_2__*,TYPE_1__,TYPE_1__*) ;scalar_t__ (* hdb_lock ) (int ,TYPE_2__*,int ) ;} ;
typedef TYPE_2__ HDB ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,char*,unsigned int*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,TYPE_1__,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;

krb5_error_code
FUNC_6(krb5_context VAR_4, HDB *VAR_5)
{
    krb5_data VAR_6;
    krb5_data VAR_7;
    krb5_error_code VAR_8, VAR_9;
    unsigned VAR_10;
    int VAR_11;

    VAR_8 = VAR_5->hdb_lock(VAR_4, VAR_5, VAR_3);
    if (VAR_8)
 return VAR_8;

    VAR_6.data = (void *)(intptr_t)VAR_1;
    VAR_6.length = FUNC_2(VAR_6.data);
    VAR_8 = (*VAR_5->hdb__get)(VAR_4, VAR_5, VAR_6, &VAR_7);
    VAR_9 = VAR_5->hdb_unlock(VAR_4, VAR_5);
    if(VAR_8)
 return VAR_8;
    if (VAR_9)
 return VAR_9;
    VAR_11 = FUNC_1(VAR_7.data, "%u", &VAR_10);
    FUNC_0 (&VAR_7);
    if (VAR_11 != 1)
 return VAR_2;
    if(VAR_10 != VAR_0)
 return VAR_2;
    return 0;
}
