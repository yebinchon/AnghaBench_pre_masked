
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* felem ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_0(felem VAR_1, const felem VAR_2)
{



    VAR_1[0] += VAR_0[0];
    VAR_1[1] += VAR_0[1];
    VAR_1[2] += VAR_0[2];
    VAR_1[3] += VAR_0[3];

    VAR_1[0] -= VAR_2[0];
    VAR_1[1] -= VAR_2[1];
    VAR_1[2] -= VAR_2[2];
    VAR_1[3] -= VAR_2[3];
}
