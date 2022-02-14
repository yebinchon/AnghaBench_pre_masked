
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int point_conversion_form_t ;
struct TYPE_3__ {int * group; int conv_form; } ;
typedef TYPE_1__ EC_KEY ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(EC_KEY *VAR_0, point_conversion_form_t VAR_1)
{
    VAR_0->conv_form = VAR_1;
    if (VAR_0->group != ((void*)0))
        FUNC_0(VAR_0->group, VAR_1);
}
