
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* xb_bufp; } ;
typedef TYPE_1__ xo_buffer_t ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1 (xo_buffer_t *VAR_0, ssize_t VAR_1)
{
    int VAR_2 = 0;
    int VAR_3 = 1;
    char *VAR_4 = VAR_0->xb_bufp;
    char *VAR_5 = VAR_4 + VAR_1;

    while (--VAR_5 >= VAR_4)
 if (FUNC_0((int) *VAR_5))
     break;

    for ( ; VAR_5 >= VAR_4; VAR_5--) {
 if (!FUNC_0((int) *VAR_5))
     break;
 VAR_2 += (*VAR_5 - '0') * VAR_3;
 VAR_3 *= 10;
    }

    return VAR_2;
}
