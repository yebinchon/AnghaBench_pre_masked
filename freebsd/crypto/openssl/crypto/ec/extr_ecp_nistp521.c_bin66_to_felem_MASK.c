
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int limb ;
typedef int* felem ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(felem VAR_2, const u8 VAR_3[66])
{
    VAR_2[0] = (*((limb *) & VAR_3[0])) & VAR_1;
    VAR_2[1] = (*((limb *) & VAR_3[7]) >> 2) & VAR_1;
    VAR_2[2] = (*((limb *) & VAR_3[14]) >> 4) & VAR_1;
    VAR_2[3] = (*((limb *) & VAR_3[21]) >> 6) & VAR_1;
    VAR_2[4] = (*((limb *) & VAR_3[29])) & VAR_1;
    VAR_2[5] = (*((limb *) & VAR_3[36]) >> 2) & VAR_1;
    VAR_2[6] = (*((limb *) & VAR_3[43]) >> 4) & VAR_1;
    VAR_2[7] = (*((limb *) & VAR_3[50]) >> 6) & VAR_1;
    VAR_2[8] = (*((limb *) & VAR_3[58])) & VAR_0;
}
