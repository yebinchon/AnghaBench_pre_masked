
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tableLog; } ;
typedef int HUFv07_DTable ;
typedef int HUFv07_DEltX4 ;
typedef TYPE_1__ DTableDesc ;
typedef int BYTE ;
typedef int BITv07_DStream_t ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,void const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int * const,int *,int * const,int const* const,int ) ;
 TYPE_1__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (size_t const) ;
 int VAR_0 ;

__attribute__((used)) static size_t FUNC_6(
          void* VAR_1, size_t VAR_2,
    const void* VAR_3, size_t VAR_4,
    const HUFv07_DTable* VAR_5)
{
    BITv07_DStream_t VAR_6;


    { size_t const VAR_7 = FUNC_1(&VAR_6, VAR_3, VAR_4);
        if (FUNC_5(VAR_7)) return VAR_7;
    }


    { BYTE* const VAR_8 = (BYTE*) VAR_1;
        BYTE* const VAR_9 = VAR_8 + VAR_2;
        const void* const VAR_10 = VAR_5+1;
        const HUFv07_DEltX4* const VAR_11 = (const HUFv07_DEltX4*)VAR_10;
        DTableDesc const VAR_12 = FUNC_4(VAR_5);
        FUNC_3(VAR_8, &VAR_6, VAR_9, VAR_11, VAR_12.tableLog);
    }


    if (!FUNC_0(&VAR_6)) return FUNC_2(VAR_0);


    return VAR_2;
}
