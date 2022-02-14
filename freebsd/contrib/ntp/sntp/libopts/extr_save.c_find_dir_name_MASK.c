
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t save_opts; } ;
struct TYPE_9__ {char** papzHomeList; char const* pzProgName; TYPE_3__ specOptIdx; TYPE_2__* pOptDesc; } ;
typedef TYPE_4__ tOptions ;
struct TYPE_6__ {char* argString; } ;
struct TYPE_7__ {TYPE_1__ optArg; } ;


 scalar_t__ FUNC_0 (size_t,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char const VAR_4 ;
 int FUNC_1 (int ,char*,char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char*,char*,char const*) ;
 int VAR_5 ;
 char* FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*) ;
 char* VAR_6 ;
 char* VAR_7 ;

__attribute__((used)) static char const *
FUNC_7(tOptions * VAR_8, int * VAR_9)
{
    char const * VAR_10;

    if ( (VAR_8->specOptIdx.save_opts == VAR_3)
       || (VAR_8->specOptIdx.save_opts == 0))
        return ((void*)0);

    VAR_10 = VAR_8->pOptDesc[ VAR_8->specOptIdx.save_opts ].optArg.argString;
    if ((VAR_10 != ((void*)0)) && (*VAR_10 != VAR_4))
        return VAR_10;





    {
        char const * const * VAR_11 = VAR_8->papzHomeList;
        if (VAR_11 == ((void*)0))
            return ((void*)0);

        while (VAR_11[1] != ((void*)0)) VAR_11++;
        VAR_10 = *VAR_11;
    }




    if (*VAR_10 != '$')
        return VAR_10;

    {
        char const * VAR_12 = FUNC_5(++VAR_10, VAR_2);
        char * VAR_13;
        char * VAR_14;

        if (VAR_12 != ((void*)0)) {
            char VAR_15[ VAR_1 ];
            if ((VAR_12 - VAR_10) > VAR_0 )
                return ((void*)0);
            FUNC_3(VAR_15, VAR_10, (size_t)(VAR_12 - VAR_10));
            VAR_15[VAR_12 - VAR_10] = VAR_4;
            VAR_14 = FUNC_2(VAR_15);
        } else {





            VAR_14 = FUNC_2(VAR_10);
        }

        if (VAR_14 == ((void*)0)) {
            FUNC_1(VAR_5, VAR_7, VAR_8->pzProgName);
            FUNC_1(VAR_5, VAR_6, VAR_10);
            return ((void*)0);
        }

        if (VAR_12 == ((void*)0))
            return VAR_14;

        {
            size_t VAR_16 = FUNC_6(VAR_14) + FUNC_6(VAR_12) + 2;
            VAR_13 = (char *)FUNC_0(VAR_16, "dir name");
        }

        if (VAR_13 == ((void*)0))
            return ((void*)0);

        *VAR_9 = 1;




        FUNC_4(VAR_13, "%s/%s", VAR_14, VAR_12);
        return VAR_13;
    }
}
