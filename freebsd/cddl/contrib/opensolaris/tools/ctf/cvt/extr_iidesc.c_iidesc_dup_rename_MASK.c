
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ii_owner; int * ii_name; } ;
typedef TYPE_1__ iidesc_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (char const*) ;

iidesc_t *
FUNC_3(iidesc_t *VAR_0, char const *VAR_1, char const *VAR_2)
{
 iidesc_t *VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_3->ii_name);
 FUNC_0(VAR_3->ii_owner);

 VAR_3->ii_name = VAR_1 ? FUNC_2(VAR_1) : ((void*)0);
 VAR_3->ii_owner = VAR_2 ? FUNC_2(VAR_2) : ((void*)0);

 return (VAR_3);
}
