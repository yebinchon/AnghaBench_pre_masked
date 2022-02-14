
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tSuccess ;
struct TYPE_7__ {scalar_t__ save_opts; } ;
struct TYPE_8__ {int fOptSet; int * papzHomeList; TYPE_1__ specOptIdx; int * pOptDesc; } ;
typedef TYPE_2__ tOptions ;
typedef int tOptDesc ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static tSuccess
FUNC_5(tOptions * VAR_7)
{
    tOptDesc * VAR_8 = ((void*)0);

    if (! FUNC_1(FUNC_3(VAR_7)))
        return VAR_3;






    if ( (VAR_7->specOptIdx.save_opts != VAR_4)
       && (VAR_7->specOptIdx.save_opts != 0)) {
        VAR_8 = VAR_7->pOptDesc + VAR_7->specOptIdx.save_opts + 1;
        if (FUNC_0(VAR_8))
            return VAR_6;
    }




    VAR_7->fOptSet |= VAR_5;




    if (VAR_7->papzHomeList == ((void*)0)) {
        FUNC_2(VAR_7, VAR_0);
    }
    else {
        FUNC_2(VAR_7, VAR_1);




        if ((VAR_8 != ((void*)0)) && ! FUNC_0(VAR_8))
            FUNC_4(VAR_7);





        FUNC_2(VAR_7, VAR_2);
    }
    VAR_7->fOptSet &= ~VAR_5;

    return VAR_6;
}
