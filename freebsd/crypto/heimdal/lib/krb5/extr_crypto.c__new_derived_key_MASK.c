
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
struct _krb5_key_usage {unsigned int usage; struct _krb5_key_data key; } ;
typedef TYPE_1__* krb5_crypto ;
struct TYPE_3__ {int num_key_usage; struct _krb5_key_usage* key_usage; } ;


 int FUNC_0 (struct _krb5_key_usage*,int ,int) ;
 struct _krb5_key_usage* FUNC_1 (struct _krb5_key_usage*,int) ;

__attribute__((used)) static struct _krb5_key_data *
FUNC_2(krb5_crypto VAR_0, unsigned VAR_1)
{
    struct _krb5_key_usage *VAR_2 = VAR_0->key_usage;
    VAR_2 = FUNC_1(VAR_2, (VAR_0->num_key_usage + 1) * sizeof(*VAR_2));
    if(VAR_2 == ((void*)0))
 return ((void*)0);
    VAR_0->key_usage = VAR_2;
    VAR_2 += VAR_0->num_key_usage++;
    FUNC_0(VAR_2, 0, sizeof(*VAR_2));
    VAR_2->usage = VAR_1;
    return &VAR_2->key;
}
