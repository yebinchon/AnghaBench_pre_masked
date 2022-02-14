
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_iter_f ;
typedef int zfs_handle_t ;
struct TYPE_3__ {int first; void* data; int func; int * stack; int allowrecursion; } ;
typedef TYPE_1__ iter_dependents_arg_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(zfs_handle_t *VAR_1, boolean_t VAR_2,
    zfs_iter_f VAR_3, void *VAR_4)
{
 iter_dependents_arg_t VAR_5;
 VAR_5.allowrecursion = VAR_2;
 VAR_5.stack = ((void*)0);
 VAR_5.func = VAR_3;
 VAR_5.data = VAR_4;
 VAR_5.first = VAR_0;
 return (FUNC_0(FUNC_1(VAR_1), &VAR_5));
}
