
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcnt; int name; } ;
typedef TYPE_1__ krb5_mcache ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(krb5_mcache *VAR_0)
{
    if (--VAR_0->refcnt != 0)
 return 0;

    if (FUNC_0(VAR_0)) {
 FUNC_1 (VAR_0->name);
 return 1;
    }
    return 0;
}
