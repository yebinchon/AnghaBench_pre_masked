
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* xre_format; unsigned int xre_num_fields; struct TYPE_5__* xre_next; int * xre_fields; } ;
typedef TYPE_1__ xo_retain_entry_t ;
typedef int xo_field_info_t ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_1__** xr_bucket; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_2, xo_field_info_t *VAR_3, unsigned VAR_4)
{
    unsigned VAR_5 = FUNC_3(VAR_2);
    xo_retain_entry_t *VAR_6;
    ssize_t VAR_7 = sizeof(*VAR_6) + (VAR_4 + 1) * sizeof(*VAR_3);
    xo_field_info_t *VAR_8;

    VAR_6 = FUNC_2(((void*)0), VAR_7);
    if (VAR_6 == ((void*)0))
 return;

    VAR_8 = (xo_field_info_t *) &VAR_6[1];
    FUNC_1(VAR_8, VAR_3, VAR_4 * sizeof(*VAR_3));

    FUNC_0(VAR_6, sizeof(*VAR_6));

    VAR_6->xre_format = VAR_2;
    VAR_6->xre_fields = VAR_8;
    VAR_6->xre_num_fields = VAR_4;


    VAR_6->xre_next = VAR_0.xr_bucket[VAR_5];
    VAR_0.xr_bucket[VAR_5] = VAR_6;
    VAR_1 += 1;
}
