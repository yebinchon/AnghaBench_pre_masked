
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdictParams ;
struct TYPE_4__ {int notificationLevel; int dictID; } ;
typedef TYPE_1__ ZDICT_params_t ;
typedef int U32 ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (char*,...) ;
 size_t FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,void*,size_t const) ;
 size_t const VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_3 (scalar_t__*,size_t,scalar_t__* const,size_t const,scalar_t__* const,size_t*,unsigned int const,TYPE_1__) ;
 int FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (scalar_t__* const) ;
 scalar_t__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_9(U32 VAR_2, U32 VAR_3, size_t VAR_4, BYTE* VAR_5)
{

    int VAR_6 = 0;
    unsigned const VAR_7 = 4;
    size_t VAR_8[4];
    BYTE* const VAR_9 = FUNC_7(5000*sizeof(BYTE));
    if (VAR_9 == ((void*)0)) {
        FUNC_0("Error: could not allocate space for samples\n");
        return 1;
    }


    { unsigned VAR_10 = 1;
        unsigned VAR_11 = 0;
        size_t VAR_12 = 1;
        while (VAR_10 <= 4) {
            VAR_8[VAR_10 - 1] = VAR_12;
            { size_t VAR_13;
                for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
                    *(VAR_9 + (VAR_11++)) = (BYTE)VAR_10;
            } }
            VAR_10++;
            VAR_12 *= 16;
    } }

    { size_t VAR_14 = 0;
        ZDICT_params_t VAR_15;
        size_t const VAR_16 = FUNC_1(VAR_4/4, 256);
        size_t const VAR_17 = VAR_4 - VAR_16;
        BYTE* const VAR_18 = VAR_5 + VAR_16;
        if (VAR_17 < VAR_0 || VAR_4 < VAR_1) {
            FUNC_0("Error: dictionary size is too small\n");
            VAR_6 = 1;
            goto exitGenRandomDict;
        }


        FUNC_8(&VAR_15, 0, sizeof(VAR_15));
        VAR_15.dictID = VAR_2;
        VAR_15.notificationLevel = 1;


        FUNC_2(&VAR_3, (void*)VAR_18, VAR_17);


        VAR_14 = FUNC_3(VAR_5, VAR_4,
                                    VAR_18, VAR_17,
                                    VAR_9, VAR_8, VAR_7,
                                    VAR_15);

        if (FUNC_5(VAR_14)) {
            FUNC_0("Could not finalize dictionary: %s\n", FUNC_4(VAR_14));
            VAR_6 = 1;
        }
    }

exitGenRandomDict:
    FUNC_6(VAR_9);
    return VAR_6;
}
