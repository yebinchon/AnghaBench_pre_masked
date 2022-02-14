
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_var {int (* ev_unsethook ) (struct env_var*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct env_var*) ;
 struct env_var* FUNC_1 (char const*) ;
 int FUNC_2 (struct env_var*) ;

int
FUNC_3(const char *VAR_1)
{
    struct env_var *VAR_2;
    int VAR_3;

    VAR_3 = 0;
    if ((VAR_2 = FUNC_1(VAR_1)) == ((void*)0)) {
 VAR_3 = VAR_0;
    } else {
 if (VAR_2->ev_unsethook != ((void*)0))
     VAR_3 = VAR_2->ev_unsethook(VAR_2);
 if (VAR_3 == 0) {
     FUNC_0(VAR_2);
 }
    }
    return(VAR_3);
}
