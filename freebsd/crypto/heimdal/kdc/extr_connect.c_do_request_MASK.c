
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct descr {scalar_t__ type; int addr_string; int sa; } ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {scalar_t__ length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_boolean ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int ,char*,unsigned long,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,void*,size_t,TYPE_1__*,int *,int ,int ,int) ;
 int FUNC_4 (int ,scalar_t__,void*,size_t,TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int *,int ,struct descr*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(krb5_context VAR_2,
    krb5_kdc_configuration *VAR_3,
    void *VAR_4, size_t VAR_5, krb5_boolean VAR_6,
    struct descr *VAR_7)
{
    krb5_error_code VAR_8;
    krb5_data VAR_9;
    int VAR_10 = (VAR_7->type == VAR_0);

    FUNC_5(((void*)0));

    FUNC_2(&VAR_9);
    VAR_8 = FUNC_3(VAR_2, VAR_3,
       VAR_4, VAR_5, &VAR_9, &VAR_6,
       VAR_7->addr_string, VAR_7->sa,
       VAR_10);
    if(VAR_1)
 FUNC_4(VAR_2, VAR_1, VAR_4, VAR_5, &VAR_9, VAR_7->sa);
    if(VAR_9.length){
 FUNC_6(VAR_2, VAR_3, VAR_6, VAR_7, &VAR_9);
 FUNC_1(&VAR_9);
    }
    if(VAR_8)
 FUNC_0(VAR_2, VAR_3, 0,
  "Failed processing %lu byte request from %s",
  (unsigned long)VAR_5, VAR_7->addr_string);
}
