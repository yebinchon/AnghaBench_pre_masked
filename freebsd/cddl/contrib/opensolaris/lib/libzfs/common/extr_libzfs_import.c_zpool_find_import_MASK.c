
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
typedef int libzfs_handle_t ;
struct TYPE_3__ {int paths; char** path; int member_0; } ;
typedef TYPE_1__ importargs_t ;


 int * FUNC_0 (int *,TYPE_1__*) ;

nvlist_t *
FUNC_1(libzfs_handle_t *VAR_0, int VAR_1, char **VAR_2)
{
 importargs_t VAR_3 = { 0 };

 VAR_3.paths = VAR_1;
 VAR_3.path = VAR_2;

 return (FUNC_0(VAR_0, &VAR_3));
}
