
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xo_ssize_t ;
struct TYPE_3__ {char* xb_curp; } ;
typedef TYPE_1__ xo_buffer_t ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static xo_ssize_t
FUNC_3 (void *VAR_0, const char *VAR_1)
{
    xo_buffer_t *VAR_2 = VAR_0;
    int VAR_3 = FUNC_1(VAR_1);
    int VAR_4 = FUNC_2(VAR_2);

    if (VAR_3 > VAR_4 - 1)
 VAR_3 = VAR_4 - 1;

    FUNC_0(VAR_2->xb_curp, VAR_1, VAR_3);
    VAR_2->xb_curp += VAR_3;
    *VAR_2->xb_curp = '\0';

    return VAR_3;
}
