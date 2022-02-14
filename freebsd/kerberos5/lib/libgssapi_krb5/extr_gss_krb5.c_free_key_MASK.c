
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; struct TYPE_5__* data; } ;
typedef TYPE_1__ gss_krb5_lucid_key_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(gss_krb5_lucid_key_t *VAR_0)
{
    FUNC_1(VAR_0->data, 0, VAR_0->length);
    FUNC_0(VAR_0->data);
    FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
