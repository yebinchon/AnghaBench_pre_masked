
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int eChar ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int *VAR_2, int *VAR_3, int VAR_4)
{
    eChar VAR_5 = FUNC_2(0);
    int VAR_6;
    int VAR_7 = *VAR_2 < 0;

    switch (VAR_5) {

    case '%':
 if (VAR_1 == -1) {
     FUNC_3(VAR_0);
     return (0);
 }
 if (*VAR_2 < 0)
     *VAR_2 = VAR_1;
 *VAR_3 = VAR_1;
 break;

    case '-':
 if (*VAR_2 < 0) {
     *VAR_2 = 0;
     *VAR_3 = VAR_4 - 1;
     FUNC_4(VAR_5);
 }
 return (1);

    case '^':
 if (*VAR_2 < 0)
     *VAR_2 = 1;
 *VAR_3 = 1;
 break;

    case '$':
 if (*VAR_2 < 0)
     *VAR_2 = VAR_4;
 *VAR_3 = VAR_4;
 break;

    case '*':
 if (*VAR_2 < 0)
     *VAR_2 = 1;
 *VAR_3 = VAR_4;
 if (*VAR_3 < *VAR_2) {
     *VAR_3 = 0;
     *VAR_2 = 1;
     return (1);
 }
 break;

    default:
 if (FUNC_0(VAR_5)) {
     VAR_6 = 0;
     while (FUNC_0(VAR_5)) {
  VAR_6 = VAR_6 * 10 + VAR_5 - '0';
  VAR_5 = FUNC_2(0);
     }
     if (VAR_6 < 0)
  VAR_6 = VAR_4 + 1;
     if (*VAR_2 < 0)
  *VAR_2 = VAR_6;
     *VAR_3 = VAR_6;
 }
 else if (*VAR_2 < 0)
     *VAR_2 = 0, *VAR_3 = VAR_4;
 else
     *VAR_3 = VAR_4 - 1;
 FUNC_4(VAR_5);
 break;
    }
    if (VAR_7) {
 VAR_5 = FUNC_2(0);
 FUNC_4(VAR_5);
 if (FUNC_1("-$*", VAR_5))
     return (1);
    }
    if (*VAR_2 > *VAR_3 || *VAR_3 > VAR_4) {
 FUNC_3(VAR_0);
 return (0);
    }
    return (1);

}
