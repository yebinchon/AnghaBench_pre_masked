
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static bool
FUNC_1(int VAR_2, int VAR_3, int *VAR_4, int *VAR_5, int VAR_6)
{
    bool VAR_7 = VAR_0;

    if (VAR_6 < *VAR_4) {
 if (VAR_6 < 0) {
     if (*VAR_4 == 0 && *VAR_5 == 0) {
  FUNC_0();
     } else {
  *VAR_5 = 0;
  *VAR_4 = 0;
  VAR_7 = VAR_1;
     }
 } else {
     *VAR_5 = VAR_6;
     *VAR_4 = VAR_6;
     VAR_7 = VAR_1;
 }
    } else if (VAR_6 >= VAR_3) {
 if (*VAR_5 < VAR_3 - 1) {
     *VAR_5 = VAR_3 - 1;
     *VAR_4 = VAR_3 - 1;
     VAR_7 = VAR_1;
 } else {
     FUNC_0();
 }
    } else if (VAR_6 >= *VAR_4 + VAR_2) {
 *VAR_5 = VAR_6;
 *VAR_4 = VAR_6;
 VAR_7 = VAR_1;
    } else {
 *VAR_5 = VAR_6;
 VAR_7 = VAR_0;
    }
    if (VAR_2 < VAR_3) {
 if (*VAR_4 + VAR_2 >= VAR_3) {
     *VAR_4 = VAR_3 - VAR_2;
 }
    } else {
 *VAR_4 = 0;
    }
    return VAR_7;
}
