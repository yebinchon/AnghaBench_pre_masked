
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_long ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,int *) ;

caddr_t
FUNC_2(const char *VAR_3)
{
    caddr_t VAR_4, VAR_5;
    uint32_t *VAR_6;
    int VAR_7;

    if (VAR_2 != ((void*)0)) {

 VAR_4 = VAR_2;
 VAR_5 = ((void*)0);
 for (;;) {
     VAR_6 = (uint32_t *)VAR_4;
     if (VAR_6[0] == 0 && VAR_6[1] == 0)
  break;


     if (VAR_6[0] == VAR_0)
  VAR_5 = VAR_4;


     if ((VAR_6[0] == VAR_1) &&
  !FUNC_1(VAR_3, VAR_4 + sizeof(uint32_t) * 2))
  return(VAR_5);


     VAR_7 = sizeof(uint32_t) * 2 + VAR_6[1];
     VAR_7 = FUNC_0(VAR_7, sizeof(u_long));
     VAR_4 += VAR_7;
 }
    }
    return(((void*)0));
}
