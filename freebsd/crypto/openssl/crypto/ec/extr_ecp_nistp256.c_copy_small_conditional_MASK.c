
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int const* smallfelem ;
typedef int limb ;
typedef int* felem ;


 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_0(felem VAR_1, const smallfelem VAR_2, limb VAR_3)
{
    unsigned VAR_4;
    const u64 VAR_5 = VAR_3;
    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        VAR_1[VAR_4] = ((limb) (VAR_2[VAR_4] & VAR_5)) | (VAR_1[VAR_4] & ~VAR_3);
    }
}
