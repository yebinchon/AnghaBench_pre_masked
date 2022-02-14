
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constraint_spec {int ctype; } ;
typedef enum ctype { ____Placeholder_ctype } ctype ;


 struct constraint_spec* FUNC_0 (int,int) ;

__attribute__((used)) static struct constraint_spec *
FUNC_1(enum ctype VAR_0)
{
    struct constraint_spec *VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    VAR_1->ctype = VAR_0;
    return VAR_1;
}
