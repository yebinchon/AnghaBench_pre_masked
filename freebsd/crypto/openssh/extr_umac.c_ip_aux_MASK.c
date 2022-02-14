
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef scalar_t__ UINT16 ;



__attribute__((used)) static UINT64 FUNC_0(UINT64 VAR_0, UINT64 *VAR_1, UINT64 VAR_2)
{
    VAR_0 = VAR_0 + VAR_1[0] * (UINT64)(UINT16)(VAR_2 >> 48);
    VAR_0 = VAR_0 + VAR_1[1] * (UINT64)(UINT16)(VAR_2 >> 32);
    VAR_0 = VAR_0 + VAR_1[2] * (UINT64)(UINT16)(VAR_2 >> 16);
    VAR_0 = VAR_0 + VAR_1[3] * (UINT64)(UINT16)(VAR_2);

    return VAR_0;
}
