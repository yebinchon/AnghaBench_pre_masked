
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventhandler_list {int dummy; } ;


 int FUNC_0 (struct eventhandler_list*) ;
 struct eventhandler_list* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct eventhandler_list *
FUNC_4(const char *VAR_2)
{
    struct eventhandler_list *VAR_3;

    if (!VAR_0)
 return(((void*)0));


    FUNC_2(&VAR_1);
    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 != ((void*)0))
 FUNC_0(VAR_3);
    FUNC_3(&VAR_1);

    return(VAR_3);
}
