
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(int VAR_2, int VAR_3, int VAR_4, bool * VAR_5, int *VAR_6)
{
    int VAR_7 = 0;

    *VAR_5 = VAR_0;

    switch (VAR_2) {
    case 131:
 if (*VAR_6 > 0) {
     *VAR_6 = 0;
     *VAR_5 = VAR_1;
 }
 break;
    case 130:
 if (*VAR_6 < VAR_3) {
     *VAR_6 = VAR_3;
     *VAR_5 = VAR_1;
 }
 break;
    case 132:
 if (*VAR_6 > 0) {
     --(*VAR_6);
     *VAR_5 = VAR_1;
 }
 break;
    case 133:
 if (*VAR_6 < VAR_3) {
     ++(*VAR_6);
     *VAR_5 = VAR_1;
 }
 break;
    case 128:
 if (*VAR_6 > 0) {
     *VAR_6 -= VAR_4;
     if (*VAR_6 < 0)
  *VAR_6 = 0;
     *VAR_5 = VAR_1;
 }
 break;
    case 129:
 if (*VAR_6 < VAR_3) {
     *VAR_6 += VAR_4;
     if (*VAR_6 > VAR_3)
  *VAR_6 = VAR_3;
     *VAR_5 = VAR_1;
 }
 break;
    default:
 VAR_7 = -1;
 break;
    }
    return VAR_7;
}
