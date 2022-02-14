
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_long ;
typedef int * caddr_t ;


 int FUNC_0 (int,int) ;

caddr_t
FUNC_1(caddr_t VAR_0, int VAR_1)
{
    caddr_t VAR_2;
    uint32_t *VAR_3;
    uint32_t VAR_4 = 0;
    int VAR_5;

    if (VAR_0 == ((void*)0))
     return (((void*)0));

    VAR_2 = VAR_0;
    for (;;) {
 VAR_3 = (uint32_t *)VAR_2;

 if (VAR_3[0] == 0 && VAR_3[1] == 0)
     break;




 if (VAR_4 == 0) {
     VAR_4 = VAR_3[0];
 } else {
     if (VAR_3[0] == VAR_4)
  break;
 }






 if (VAR_3[0] == VAR_1)
     return(VAR_2 + (sizeof(uint32_t) * 2));


 VAR_5 = sizeof(uint32_t) * 2 + VAR_3[1];
 VAR_5 = FUNC_0(VAR_5, sizeof(u_long));
 VAR_2 += VAR_5;
    }
    return(((void*)0));
}
