
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* xb_curp; } ;
typedef TYPE_1__ xo_buffer_t ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_1 (xo_buffer_t *VAR_0, ssize_t VAR_1)
{
    char *VAR_2, *VAR_3, *VAR_4;
    ssize_t VAR_5;


    for (VAR_2 = VAR_3 = VAR_0->xb_curp, VAR_4 = VAR_2 + VAR_1; VAR_2 < VAR_4; VAR_2++) {
 if (*VAR_2 != ' ')
     break;
    }

    VAR_5 = VAR_2 - VAR_3;
    if (VAR_5) {
 VAR_1 -= VAR_5;
 FUNC_0(VAR_3, VAR_2, VAR_1);
    }


    for (VAR_2 = VAR_0->xb_curp, VAR_3 = VAR_4 = VAR_2 + VAR_1; VAR_2 < VAR_4; VAR_4--) {
 if (VAR_4[-1] != ' ')
     break;
    }

    VAR_5 = VAR_3 - VAR_4;
    if (VAR_5) {
 VAR_1 -= VAR_5;
 VAR_2[VAR_1] = '\0';
    }

    return VAR_1;
}
