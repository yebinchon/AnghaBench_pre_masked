
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int login_cap_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *,int *,int ,unsigned int) ;

int
FUNC_3(const char *VAR_4, unsigned int VAR_5)
{
    int VAR_6;
    login_cap_t *VAR_7;

    VAR_7 = FUNC_1(VAR_4, ((void*)0));

    VAR_5 &= VAR_2 | VAR_1 |
     VAR_3 | VAR_0;

    VAR_6 = VAR_7 ? FUNC_2(VAR_7, ((void*)0), 0, VAR_5) : -1;
    FUNC_0(VAR_7);
    return (VAR_6);
}
