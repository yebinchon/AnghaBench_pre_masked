
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ CStr ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int **,TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_2 (char*,int ) ;

int
FUNC_3(const CStr *VAR_1)
{
    CStr VAR_2;

    VAR_2 = *VAR_1;
    if (VAR_2.len == 0) {
 FUNC_2("%s",
         FUNC_0(9, 3, "DeleteXkey: Null extended-key not allowed.\n"));
 return (-1);
    }

    if (VAR_0 == ((void*)0))
 return (0);

    (void) FUNC_1(&VAR_0, &VAR_2);
    return (0);
}
