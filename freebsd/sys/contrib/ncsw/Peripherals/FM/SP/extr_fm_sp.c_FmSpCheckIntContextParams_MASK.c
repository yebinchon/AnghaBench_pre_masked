
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intContextOffset; scalar_t__ size; int extBufOffset; } ;
typedef TYPE_1__ t_FmSpIntContextDataCopy ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;

t_Error FUNC_1(t_FmSpIntContextDataCopy *VAR_7)
{

    if (VAR_7->intContextOffset >VAR_5)
        FUNC_0(VAR_2, VAR_0, ("intContext.intContextOffset can't be larger than %d", VAR_5));
    if (VAR_7->intContextOffset % VAR_6)
        FUNC_0(VAR_2, VAR_0, ("intContext.intContextOffset has to be divisible by %d", VAR_6));


    if (VAR_7->size + VAR_7->intContextOffset > VAR_4)
        FUNC_0(VAR_2, VAR_0, ("intContext.size + intContext.intContextOffset has to be smaller than %d", VAR_4));

    if (VAR_7->size % VAR_6)
        FUNC_0(VAR_2, VAR_0, ("intContext.size  has to be divisible by %d", VAR_6));


    if (VAR_7->extBufOffset > VAR_3)
        FUNC_0(VAR_2, VAR_0, ("intContext.extBufOffset can't be larger than %d", VAR_3));
    if (VAR_7->extBufOffset % VAR_6)
        FUNC_0(VAR_2, VAR_0, ("intContext.extBufOffset  has to be divisible by %d", VAR_6));

    return VAR_1;
}
