
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int widelimb ;
typedef int* widefelem ;
typedef int* felem ;



__attribute__((used)) static void FUNC_0(widefelem VAR_0, const felem VAR_1, const felem VAR_2)
{
    VAR_0[0] = ((widelimb) VAR_1[0]) * VAR_2[0];
    VAR_0[1] = ((widelimb) VAR_1[0]) * VAR_2[1] + ((widelimb) VAR_1[1]) * VAR_2[0];
    VAR_0[2] = ((widelimb) VAR_1[0]) * VAR_2[2] + ((widelimb) VAR_1[1]) * VAR_2[1] +
             ((widelimb) VAR_1[2]) * VAR_2[0];
    VAR_0[3] = ((widelimb) VAR_1[0]) * VAR_2[3] + ((widelimb) VAR_1[1]) * VAR_2[2] +
             ((widelimb) VAR_1[2]) * VAR_2[1] + ((widelimb) VAR_1[3]) * VAR_2[0];
    VAR_0[4] = ((widelimb) VAR_1[1]) * VAR_2[3] + ((widelimb) VAR_1[2]) * VAR_2[2] +
             ((widelimb) VAR_1[3]) * VAR_2[1];
    VAR_0[5] = ((widelimb) VAR_1[2]) * VAR_2[3] + ((widelimb) VAR_1[3]) * VAR_2[2];
    VAR_0[6] = ((widelimb) VAR_1[3]) * VAR_2[3];
}
