
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c ;


 int FUNC_0 (int,char*,int) ;

int
FUNC_1(char *VAR_0, int VAR_1, int VAR_2)
{
    char VAR_3;
    int VAR_4, VAR_5;

    VAR_1--;
    VAR_5 = 0;
    while (VAR_1 != 0) {
 VAR_4 = FUNC_0(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
     return(-1);
 if (VAR_4 == 0) {
     if (VAR_5 == 0)
  return(-1);
     break;
 }
 if ((VAR_3 == '\r') ||
     (VAR_3 == '\n'))
     break;
 *VAR_0++ = VAR_3;
 VAR_1--;
 VAR_5++;
    }
    *VAR_0 = 0;
    return(VAR_5);
}
