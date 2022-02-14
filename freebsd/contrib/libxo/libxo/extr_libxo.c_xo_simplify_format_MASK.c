
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xo_simplify_field_func_t ;
struct TYPE_12__ {int xo_errno; scalar_t__ xo_columns; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int xo_field_info_t ;
struct TYPE_13__ {char* xb_bufp; } ;
typedef TYPE_2__ xo_buffer_t ;
typedef int fields ;


 int FUNC_0 (int *,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int FUNC_2 (TYPE_1__*,char const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,int *,int,char const*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,unsigned int,char const*) ;

char *
FUNC_7 (xo_handle_t *VAR_1, const char *VAR_2, int VAR_3,
      xo_simplify_field_func_t VAR_4)
{
    VAR_1 = FUNC_3(VAR_1);

    VAR_1->xo_columns = 0;
    VAR_1->xo_errno = VAR_0;

    unsigned VAR_5 = FUNC_2(VAR_1, VAR_2);
    xo_field_info_t VAR_6[VAR_5];

    FUNC_0(VAR_6, VAR_5 * sizeof(VAR_6[0]));

    if (FUNC_6(VAR_1, VAR_6, VAR_5, VAR_2))
 return ((void*)0);

    xo_buffer_t VAR_7;
    FUNC_1(&VAR_7);

    if (VAR_3)
 FUNC_4(VAR_1, VAR_2, VAR_6);

    if (FUNC_5(VAR_1, &VAR_7, VAR_6, -1, VAR_2, VAR_4))
 return ((void*)0);

    return VAR_7.xb_bufp;
}
