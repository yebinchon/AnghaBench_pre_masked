
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int paramValues_t ;
typedef int cParams ;
typedef int ZSTD_compressionParameters ;
typedef int BYTE ;


 unsigned long long const VAR_0 ;
 unsigned long long FUNC_0 (int const*,int,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BYTE* FUNC_3(paramValues_t VAR_2)
{
    ZSTD_compressionParameters const VAR_3 = FUNC_1(FUNC_2(VAR_2));
    unsigned long long const VAR_4 = FUNC_0(&VAR_3, sizeof(VAR_3), 0);
    return &VAR_1[(VAR_4 >> 3) & VAR_0];
}
