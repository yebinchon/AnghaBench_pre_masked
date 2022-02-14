
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* cmp_func ) (int ,int ) ;} ;
struct TYPE_5__ {int type; int name; } ;
typedef TYPE_1__ OBJ_NAME ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(const OBJ_NAME *VAR_1, const OBJ_NAME *VAR_2)
{
    int VAR_3;

    VAR_3 = VAR_1->type - VAR_2->type;
    if (VAR_3 == 0) {
        if ((VAR_0 != ((void*)0))
            && (FUNC_0(VAR_0) > VAR_1->type)) {
            VAR_3 = FUNC_1(VAR_0,
                                      VAR_1->type)->cmp_func(VAR_1->name, VAR_2->name);
        } else
            VAR_3 = FUNC_2(VAR_1->name, VAR_2->name);
    }
    return VAR_3;
}
