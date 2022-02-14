
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventhandler_list {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct eventhandler_list* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct eventhandler_list *
FUNC_4(const char *VAR_2)
{
 struct eventhandler_list *VAR_3;

 FUNC_0(VAR_0,
     ("eventhandler list created too early"));

 FUNC_2(&VAR_1);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(&VAR_1);

 return (VAR_3);
}
