
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _krb5_encryption_type {scalar_t__ type; } ;
typedef scalar_t__ krb5_enctype ;


 struct _krb5_encryption_type** VAR_0 ;
 int VAR_1 ;

struct _krb5_encryption_type *
FUNC_0(krb5_enctype VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 if(VAR_0[VAR_3]->type == VAR_2)
     return VAR_0[VAR_3];
    return ((void*)0);
}
