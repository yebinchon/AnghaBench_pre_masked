
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (unsigned char*,short) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(unsigned char *VAR_2, short *VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
 if (VAR_3[VAR_5] == VAR_0) {
     VAR_2[2 * VAR_5] = VAR_2[2 * VAR_5 + 1] = 0377;
 } else if (VAR_3[VAR_5] == VAR_1) {
     VAR_2[2 * VAR_5] = 0376;
     VAR_2[2 * VAR_5 + 1] = 0377;
 } else {
     FUNC_0(VAR_2 + 2 * VAR_5, VAR_3[VAR_5]);
     FUNC_1(("put Numbers[%u]=%d", (unsigned) VAR_5, VAR_3[VAR_5]));
 }
    }
}
