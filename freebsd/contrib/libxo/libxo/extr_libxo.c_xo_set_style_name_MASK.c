
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_handle_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2 (xo_handle_t *VAR_0, const char *VAR_1)
{
    if (VAR_1 == ((void*)0))
 return -1;

    int VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 < 0)
 return -1;

    FUNC_1(VAR_0, VAR_2);
    return 0;
}
