
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int limb ;
typedef int* felem ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(u8 VAR_0[66], const felem VAR_1)
{
    FUNC_0(VAR_0, 0, 66);
    (*((limb *) & VAR_0[0])) = VAR_1[0];
    (*((limb *) & VAR_0[7])) |= VAR_1[1] << 2;
    (*((limb *) & VAR_0[14])) |= VAR_1[2] << 4;
    (*((limb *) & VAR_0[21])) |= VAR_1[3] << 6;
    (*((limb *) & VAR_0[29])) = VAR_1[4];
    (*((limb *) & VAR_0[36])) |= VAR_1[5] << 2;
    (*((limb *) & VAR_0[43])) |= VAR_1[6] << 4;
    (*((limb *) & VAR_0[50])) |= VAR_1[7] << 6;
    (*((limb *) & VAR_0[58])) = VAR_1[8];
}
