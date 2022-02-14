
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * hx509_validate_ctx ;
typedef int hx509_context ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

int
FUNC_2(hx509_context VAR_1, hx509_validate_ctx *VAR_2)
{
    *VAR_2 = FUNC_0(sizeof(**VAR_2));
    if (*VAR_2 == ((void*)0))
 return VAR_0;
    FUNC_1(*VAR_2, 0, sizeof(**VAR_2));
    return 0;
}
