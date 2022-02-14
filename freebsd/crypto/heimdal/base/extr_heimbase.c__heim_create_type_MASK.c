
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* heim_type_t ;
typedef int heim_type_init ;
typedef int heim_type_hash ;
typedef int heim_type_dealloc ;
typedef int heim_type_copy ;
typedef int heim_type_cmp ;
struct TYPE_4__ {char const* name; int hash; int cmp; int copy; int dealloc; int init; int tid; } ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

heim_type_t
FUNC_2(const char *VAR_1,
    heim_type_init VAR_2,
    heim_type_dealloc VAR_3,
    heim_type_copy VAR_4,
    heim_type_cmp VAR_5,
    heim_type_hash VAR_6)
{
    heim_type_t VAR_7;

    VAR_7 = FUNC_0(1, sizeof(*VAR_7));
    if (VAR_7 == ((void*)0))
 return ((void*)0);

    VAR_7->tid = FUNC_1(&VAR_0);
    VAR_7->name = VAR_1;
    VAR_7->init = VAR_2;
    VAR_7->dealloc = VAR_3;
    VAR_7->copy = VAR_4;
    VAR_7->cmp = VAR_5;
    VAR_7->hash = VAR_6;

    return VAR_7;
}
