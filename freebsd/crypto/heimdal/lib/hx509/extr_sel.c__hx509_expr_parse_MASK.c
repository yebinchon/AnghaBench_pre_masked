
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hx_expr {int dummy; } ;
struct TYPE_2__ {char const* buf; struct hx_expr* expr; int * error; scalar_t__ offset; int length; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;

struct hx_expr *
FUNC_3(const char *VAR_1)
{
    VAR_0.buf = VAR_1;
    VAR_0.length = FUNC_1(VAR_1);
    VAR_0.offset = 0;
    VAR_0.expr = ((void*)0);

    if (VAR_0.error) {
 FUNC_0(VAR_0.error);
 VAR_0.error = ((void*)0);
    }

    FUNC_2();

    return VAR_0.expr;
}
