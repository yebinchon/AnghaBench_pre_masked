
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ init; int num; scalar_t__ shutdown; } ;
typedef TYPE_1__ BIO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return 0;
    if (VAR_1->shutdown) {
        if (VAR_1->init) {
            FUNC_0(VAR_1->num);
        }
        VAR_1->init = 0;
        VAR_1->flags = VAR_0;
    }
    return 1;
}
