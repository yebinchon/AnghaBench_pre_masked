
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_format_e ;
typedef size_t U32 ;
typedef int BYTE ;


 int FUNC_0 (int,int ) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static size_t FUNC_2(const void* VAR_3, size_t VAR_4, ZSTD_format_e VAR_5)
{
    size_t const VAR_6 = FUNC_1(VAR_5);
    FUNC_0(VAR_4 < VAR_6, VAR_2);

    { BYTE const VAR_7 = ((const BYTE*)VAR_3)[VAR_6-1];
        U32 const VAR_8= VAR_7 & 3;
        U32 const VAR_9 = (VAR_7 >> 5) & 1;
        U32 const VAR_10 = VAR_7 >> 6;
        return VAR_6 + !VAR_9
             + VAR_0[VAR_8] + VAR_1[VAR_10]
             + (VAR_9 && !VAR_10);
    }
}
