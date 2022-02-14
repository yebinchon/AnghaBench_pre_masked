
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_pac ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_entry_ex ;
struct TYPE_2__ {scalar_t__ (* pac_verify ) (int ,int ,int const,int const,int *,int *,int *,int *) ;} ;


 scalar_t__ FUNC_0 (int ,int ,int const,int const,int *,int *,int *,int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

krb5_error_code
FUNC_1(krb5_context VAR_2,
  const krb5_principal VAR_3,
  const krb5_principal VAR_4,
  hdb_entry_ex *VAR_5,
  hdb_entry_ex *VAR_6,
  hdb_entry_ex *VAR_7,
  krb5_pac *VAR_8,
  int *VAR_9)
{
    krb5_error_code VAR_10;

    if (VAR_1 == ((void*)0))
 return 0;

    VAR_10 = VAR_1->pac_verify(VAR_0, VAR_2,
         VAR_3,
         VAR_4,
         VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_10 == 0)
 *VAR_9 = 1;
    return VAR_10;
}
