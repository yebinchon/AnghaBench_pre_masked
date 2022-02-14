
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* column_separator; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static char *
FUNC_0(void)
{
    char *VAR_1 = 0;

    if ((VAR_1 = VAR_0.column_separator) != 0) {
 if (*VAR_1 == '\0')
     VAR_1 = 0;
    }
    return VAR_1;
}
