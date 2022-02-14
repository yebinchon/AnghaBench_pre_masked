
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* xf_width; size_t xf_dots; } ;
typedef TYPE_1__ xo_format_t ;



__attribute__((used)) static void
FUNC_0 (xo_format_t *VAR_0, int VAR_1)
{
    int *VAR_2 = &VAR_0->xf_width[VAR_0->xf_dots];

    *VAR_2 = ((*VAR_2 > 0) ? *VAR_2 : 0) * 10 + VAR_1;
}
