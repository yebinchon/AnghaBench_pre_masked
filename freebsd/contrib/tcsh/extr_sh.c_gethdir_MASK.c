
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (int ) ;

Char *
FUNC_3(const Char *VAR_2)
{
    Char *VAR_3;




    if (*VAR_2 == '\0') {
 if ((VAR_3 = FUNC_2(VAR_1)) != VAR_0)
     return FUNC_0(VAR_3);
 else
     return ((void*)0);
    }




    if ((VAR_3 = FUNC_1(VAR_2)) == ((void*)0))
 return ((void*)0);
    else
 return FUNC_0(VAR_3);
}
