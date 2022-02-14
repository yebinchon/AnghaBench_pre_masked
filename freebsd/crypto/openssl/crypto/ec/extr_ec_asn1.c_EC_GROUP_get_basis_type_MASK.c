
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* poly; } ;
typedef TYPE_1__ EC_GROUP ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__*) ;

int FUNC_3(const EC_GROUP *VAR_3)
{
    int VAR_4;

    if (FUNC_1(FUNC_0(VAR_3)) !=
        VAR_0)

        return 0;


    for (VAR_4 = 0;
         VAR_4 < (int)FUNC_2(VAR_3->poly) && VAR_3->poly[VAR_4] != 0;
         VAR_4++)
        continue;

    if (VAR_4 == 4)
        return VAR_1;
    else if (VAR_4 == 2)
        return VAR_2;
    else

        return 0;
}
