
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ krb5_storage ;
struct TYPE_5__ {int base; int len; } ;
typedef TYPE_2__ emem_storage ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(krb5_storage *VAR_0)
{
    emem_storage *VAR_1 = VAR_0->data;
    FUNC_1(VAR_1->base, 0, VAR_1->len);
    FUNC_0(VAR_1->base);
}
