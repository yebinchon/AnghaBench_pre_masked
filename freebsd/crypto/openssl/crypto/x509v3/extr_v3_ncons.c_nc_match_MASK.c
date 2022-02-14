
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_11__ {scalar_t__ type; } ;
struct TYPE_10__ {TYPE_6__* base; scalar_t__ maximum; scalar_t__ minimum; } ;
struct TYPE_9__ {int excludedSubtrees; int permittedSubtrees; } ;
typedef TYPE_1__ NAME_CONSTRAINTS ;
typedef TYPE_2__ GENERAL_SUBTREE ;
typedef TYPE_3__ GENERAL_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(GENERAL_NAME *VAR_4, NAME_CONSTRAINTS *VAR_5)
{
    GENERAL_SUBTREE *VAR_6;
    int VAR_7, VAR_8, VAR_9 = 0;






    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_5->permittedSubtrees); VAR_7++) {
        VAR_6 = FUNC_2(VAR_5->permittedSubtrees, VAR_7);
        if (VAR_4->type != VAR_6->base->type)
            continue;
        if (VAR_6->minimum || VAR_6->maximum)
            return VAR_2;

        if (VAR_9 == 2)
            continue;
        if (VAR_9 == 0)
            VAR_9 = 1;
        VAR_8 = FUNC_0(VAR_4, VAR_6->base);
        if (VAR_8 == VAR_3)
            VAR_9 = 2;
        else if (VAR_8 != VAR_1)
            return VAR_8;
    }

    if (VAR_9 == 1)
        return VAR_1;



    for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_5->excludedSubtrees); VAR_7++) {
        VAR_6 = FUNC_2(VAR_5->excludedSubtrees, VAR_7);
        if (VAR_4->type != VAR_6->base->type)
            continue;
        if (VAR_6->minimum || VAR_6->maximum)
            return VAR_2;

        VAR_8 = FUNC_0(VAR_4, VAR_6->base);
        if (VAR_8 == VAR_3)
            return VAR_0;
        else if (VAR_8 != VAR_1)
            return VAR_8;

    }

    return VAR_3;

}
