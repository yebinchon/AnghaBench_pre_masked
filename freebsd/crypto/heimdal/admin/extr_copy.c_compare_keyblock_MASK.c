
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; int data; } ;
struct TYPE_6__ {scalar_t__ keytype; TYPE_1__ keyvalue; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static krb5_boolean
FUNC_1(const krb5_keyblock *VAR_2, const krb5_keyblock *VAR_3)
{
    if(VAR_2->keytype != VAR_3->keytype ||
       VAR_2->keyvalue.length != VAR_3->keyvalue.length ||
       FUNC_0(VAR_2->keyvalue.data, VAR_3->keyvalue.data, VAR_2->keyvalue.length) != 0)
 return VAR_0;
    return VAR_1;
}
