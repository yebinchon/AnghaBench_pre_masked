
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* meth; } ;
struct TYPE_4__ {int type; } ;
typedef TYPE_2__ COMP_CTX ;


 int VAR_0 ;

int FUNC_0(const COMP_CTX* VAR_1)
{
    return VAR_1->meth ? VAR_1->meth->type : VAR_0;
}
