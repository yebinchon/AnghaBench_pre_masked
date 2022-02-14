
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int * components; } ;
typedef TYPE_1__ heim_oid ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

int
FUNC_2 (const heim_oid *VAR_1, heim_oid *VAR_2)
{
    VAR_2->length = VAR_1->length;
    VAR_2->components = FUNC_0(VAR_2->length * sizeof(*VAR_2->components));
    if (VAR_2->length != 0 && VAR_2->components == ((void*)0))
 return VAR_0;
    FUNC_1(VAR_2->components, VAR_1->components,
    VAR_2->length * sizeof(*VAR_2->components));
    return 0;
}
