
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int xo_indent; int xo_indent_by; } ;
typedef TYPE_1__ xo_handle_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (xo_handle_t *VAR_2)
{
    int VAR_3 = 0;

    VAR_2 = FUNC_2(VAR_2);

    if (FUNC_0(VAR_2, VAR_0)) {
 VAR_3 = VAR_2->xo_indent * VAR_2->xo_indent_by;
 if (FUNC_1(VAR_2, VAR_1))
     VAR_3 += VAR_2->xo_indent_by;
    }

    return (VAR_3 > 0) ? VAR_3 : 0;
}
