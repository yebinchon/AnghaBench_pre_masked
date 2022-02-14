
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
typedef int * caddr_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,int *) ;

caddr_t
FUNC_2(const char *VAR_2)
{
    caddr_t VAR_3;
    uint32_t *VAR_4;
    int VAR_5;

    if (VAR_1 != ((void*)0)) {

 VAR_3 = VAR_1;
 for (;;) {
     VAR_4 = (uint32_t *)VAR_3;
     if (VAR_4[0] == 0 && VAR_4[1] == 0)
  break;


     if ((VAR_4[0] == VAR_0) &&
  !FUNC_1(VAR_2, VAR_3 + sizeof(uint32_t) * 2))
  return(VAR_3);


     VAR_5 = sizeof(uint32_t) * 2 + VAR_4[1];
     VAR_5 = FUNC_0(VAR_5, sizeof(u_long));
     VAR_3 += VAR_5;
 }
    }
    return(((void*)0));
}
