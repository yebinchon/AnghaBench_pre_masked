
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;

char *
FUNC_2(int VAR_5)
{
    char *VAR_6;

    if (VAR_2 == 0)
     FUNC_1("No heap setup");

    if ((VAR_3 + VAR_5) <= VAR_4) {
 VAR_6 = (char *)VAR_2 + VAR_3;
 FUNC_0(VAR_6, VAR_5);
 VAR_3 += VAR_5;
 return(VAR_6);
    }
    VAR_1 = VAR_0;
    return((char *)-1);
}
