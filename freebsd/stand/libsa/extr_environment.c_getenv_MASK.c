
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_var {char* ev_value; } ;


 struct env_var* FUNC_0 (char const*) ;

char *
FUNC_1(const char *VAR_0)
{
    struct env_var *VAR_1;


    if ((VAR_1 = FUNC_0(VAR_0)) != ((void*)0)) {
 if (VAR_1->ev_value != ((void*)0))
     return(VAR_1->ev_value);
 return("");
    }
    return(((void*)0));
}
