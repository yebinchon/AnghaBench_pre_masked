
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ checksum; } ;
typedef TYPE_2__ Checksum ;


 int FUNC_0 (void const*,size_t,int ,int *,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0,
   struct _krb5_key_data *VAR_1,
   const void *VAR_2,
   size_t VAR_3,
   unsigned VAR_4,
   Checksum *VAR_5)
{
    if (FUNC_0(VAR_2, VAR_3, VAR_5->checksum.data, ((void*)0), FUNC_1(), ((void*)0)) != 1)
 FUNC_2(VAR_0, "md5 checksum failed");
    return 0;
}
