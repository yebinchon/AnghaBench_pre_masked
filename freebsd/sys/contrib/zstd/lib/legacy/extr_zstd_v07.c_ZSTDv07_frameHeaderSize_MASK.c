
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t FUNC_1(const void* VAR_4, size_t VAR_5)
{
    if (VAR_5 < VAR_2) return FUNC_0(VAR_3);
    { BYTE const VAR_6 = ((const BYTE*)VAR_4)[4];
        U32 const VAR_7= VAR_6 & 3;
        U32 const VAR_8 = (VAR_6 >> 5) & 1;
        U32 const VAR_9 = VAR_6 >> 6;
        return VAR_2 + !VAR_8 + VAR_0[VAR_7] + VAR_1[VAR_9]
                + (VAR_8 && !VAR_1[VAR_9]);
    }
}
