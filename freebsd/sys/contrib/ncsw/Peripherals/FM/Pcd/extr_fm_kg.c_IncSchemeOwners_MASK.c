
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int owners; } ;
typedef TYPE_1__ t_FmPcdKgScheme ;
struct TYPE_11__ {int numOfSchemes; int * schemesIds; } ;
typedef TYPE_2__ t_FmPcdKgInterModuleBindPortToSchemes ;
struct TYPE_12__ {TYPE_1__* schemes; } ;
typedef TYPE_3__ t_FmPcdKg ;
struct TYPE_13__ {TYPE_3__* p_FmPcdKg; } ;
typedef TYPE_4__ t_FmPcd ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(t_FmPcd *VAR_1, t_FmPcdKgInterModuleBindPortToSchemes *VAR_2)
{
    t_FmPcdKg *VAR_3;
    t_FmPcdKgScheme *VAR_4;
    uint32_t VAR_5;
    uint8_t VAR_6;
    int VAR_7;

    VAR_3 = VAR_1->p_FmPcdKg;


    for (VAR_7 = 0; VAR_7 < VAR_2->numOfSchemes; VAR_7++)
    {
        VAR_6 = FUNC_1(VAR_1, VAR_2->schemesIds[VAR_7]);
        FUNC_0(VAR_6 < VAR_0);

        VAR_4 = &VAR_3->schemes[VAR_6];


        VAR_5 = FUNC_2(VAR_4);
        VAR_4->owners++;
        FUNC_3(VAR_4, VAR_5);
    }
}
