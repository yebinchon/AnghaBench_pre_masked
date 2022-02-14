
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(char **VAR_1)
{
    int VAR_2 = VAR_0;
    char *VAR_3;

    if (VAR_1 != 0) {
 while ((VAR_3 = *VAR_1++) != 0) {
     int VAR_4 = (int) FUNC_0(VAR_3);
     if (VAR_4 > VAR_2)
  VAR_2 = VAR_4;
 }
    }
    return VAR_2;
}
