
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DTable_max_t ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t FUNC_1 (int ,short*,unsigned int,unsigned int) ;
 size_t FUNC_2 (void*,size_t,int const*,size_t,int ) ;
 scalar_t__ FUNC_3 (size_t const) ;
 size_t FUNC_4 (short*,unsigned int*,unsigned int*,int const* const,size_t) ;
 int VAR_1 ;

size_t FUNC_5(void* VAR_2, size_t VAR_3, const void* VAR_4, size_t VAR_5)
{
    const BYTE* const VAR_6 = (const BYTE*)VAR_4;
    const BYTE* VAR_7 = VAR_6;
    short VAR_8[VAR_0+1];
    DTable_max_t VAR_9;
    unsigned VAR_10;
    unsigned VAR_11 = VAR_0;

    if (VAR_5<2) return FUNC_0(VAR_1);


    { size_t const VAR_12 = FUNC_4 (VAR_8, &VAR_11, &VAR_10, VAR_6, VAR_5);
        if (FUNC_3(VAR_12)) return VAR_12;
        if (VAR_12 >= VAR_5) return FUNC_0(VAR_1);
        VAR_7 += VAR_12;
        VAR_5 -= VAR_12;
    }

    { size_t const VAR_13 = FUNC_1 (VAR_9, VAR_8, VAR_11, VAR_10);
      if (FUNC_3(VAR_13)) return VAR_13; }

    return FUNC_2 (VAR_2, VAR_3, VAR_7, VAR_5, VAR_9);
}
