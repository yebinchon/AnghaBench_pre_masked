
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t length; int data; } ;
struct TYPE_7__ {size_t salttype; TYPE_1__ saltvalue; } ;
typedef TYPE_2__ krb5_salt ;
struct TYPE_8__ {int * key_data_contents; scalar_t__* key_data_length; scalar_t__* key_data_type; } ;
typedef TYPE_3__ krb5_key_data ;


 int FUNC_0 (int ,int ,size_t) ;

__attribute__((used)) static int
FUNC_1 (const krb5_salt *VAR_0, const krb5_key_data *VAR_1)
{
    if (VAR_0->salttype != (size_t)VAR_1->key_data_type[1])
 return 1;
    if (VAR_0->saltvalue.length != (size_t)VAR_1->key_data_length[1])
 return 1;
    return FUNC_0 (VAR_0->saltvalue.data, VAR_1->key_data_contents[1],
     VAR_0->saltvalue.length);
}
