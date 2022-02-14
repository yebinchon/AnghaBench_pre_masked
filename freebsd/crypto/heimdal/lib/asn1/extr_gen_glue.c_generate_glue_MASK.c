
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; int members; struct TYPE_6__* subtype; } ;
typedef TYPE_1__ Type ;


 int FUNC_0 (int ) ;


 int FUNC_1 (TYPE_1__ const*,char const*) ;
 int FUNC_2 (TYPE_1__ const*,char const*) ;
 int FUNC_3 (TYPE_1__ const*,char const*) ;

void
FUNC_4 (const Type *VAR_0, const char *VAR_1)
{
    switch(VAR_0->type) {
    case 128:
 FUNC_4(VAR_0->subtype, VAR_1);
 break;
    case 129 :
 if (!FUNC_0(VAR_0->members)) {
     FUNC_1 (VAR_0, VAR_1);
     FUNC_2 (VAR_0, VAR_1);
     FUNC_3 (VAR_0, VAR_1);
 }
 break;
    default :
 break;
    }
}
