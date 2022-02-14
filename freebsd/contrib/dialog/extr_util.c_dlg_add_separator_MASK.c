
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* output_separator; scalar_t__ separate_output; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*) ;

void
FUNC_1(void)
{
    const char *VAR_1 = (VAR_0.separate_output) ? "\n" : " ";

    if (VAR_0.output_separator)
 VAR_1 = VAR_0.output_separator;

    FUNC_0(VAR_1);
}
