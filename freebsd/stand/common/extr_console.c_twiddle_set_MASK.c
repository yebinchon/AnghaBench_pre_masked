
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int ;
struct env_var {int ev_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,void const*,int *,int *) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (void const*,char**,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct env_var *VAR_3, int VAR_4, const void *VAR_5)
{
    u_long VAR_6;
    char * VAR_7;

    VAR_6 = FUNC_2(VAR_5, &VAR_7, 0);
    if (*(const char *)VAR_5 == 0 || *VAR_7 != 0) {
 FUNC_1("invalid twiddle_divisor '%s'\n", (const char *)VAR_5);
 return (VAR_0);
    }
    FUNC_3((u_int)VAR_6);
    FUNC_0(VAR_3->ev_name, VAR_4 | VAR_2, VAR_5, ((void*)0), ((void*)0));

    return(VAR_1);
}
