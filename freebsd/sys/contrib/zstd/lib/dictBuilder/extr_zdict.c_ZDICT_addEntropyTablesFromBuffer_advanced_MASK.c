
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int compressionLevel; unsigned int notificationLevel; unsigned int const dictID; } ;
typedef TYPE_1__ ZDICT_params_t ;
typedef unsigned int U64 ;
typedef unsigned int U32 ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,unsigned int const) ;
 size_t FUNC_2 (size_t,size_t) ;
 unsigned int FUNC_3 (char*,size_t,int ) ;
 size_t FUNC_4 (char*,size_t,int const,void const*,size_t const*,unsigned int,char*,size_t,unsigned int const) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*,char*,size_t) ;

__attribute__((used)) static size_t FUNC_7(
        void* VAR_2, size_t VAR_3, size_t VAR_4,
        const void* VAR_5, const size_t* VAR_6, unsigned VAR_7,
        ZDICT_params_t VAR_8)
{
    int const VAR_9 = (VAR_8.compressionLevel == 0) ? VAR_1 : VAR_8.compressionLevel;
    U32 const VAR_10 = VAR_8.notificationLevel;
    size_t VAR_11 = 8;


    FUNC_0(2, "\r%70s\r", "");
    FUNC_0(2, "statistics ... \n");
    { size_t const VAR_12 = FUNC_4((char*)VAR_2+VAR_11, VAR_4-VAR_11,
                                  VAR_9,
                                  VAR_5, VAR_6, VAR_7,
                                  (char*)VAR_2 + VAR_4 - VAR_3, VAR_3,
                                  VAR_10);
        if (FUNC_5(VAR_12)) return VAR_12;
        VAR_11 += VAR_12;
    }


    FUNC_1(VAR_2, VAR_0);
    { U64 const VAR_13 = FUNC_3((char*)VAR_2 + VAR_4 - VAR_3, VAR_3, 0);
        U32 const VAR_14 = (VAR_13 % ((1U<<31)-32768)) + 32768;
        U32 const VAR_15 = VAR_8.dictID ? VAR_8.dictID : VAR_14;
        FUNC_1((char*)VAR_2+4, VAR_15);
    }

    if (VAR_11 + VAR_3 < VAR_4)
        FUNC_6((char*)VAR_2 + VAR_11, (char*)VAR_2 + VAR_4 - VAR_3, VAR_3);
    return FUNC_2(VAR_4, VAR_11+VAR_3);
}
