
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ term_names; } ;
typedef TYPE_1__ TERMTYPE ;


 char* FUNC_0 (scalar_t__,char) ;

__attribute__((used)) static const char *
FUNC_1(TERMTYPE *VAR_0)
{
    const char *VAR_1;

    if (VAR_0->term_names == 0
 || (VAR_1 = FUNC_0(VAR_0->term_names, '|')) == 0
 || (*++VAR_1 == '\0')) {
 VAR_1 = "(No description)";
    }

    return VAR_1;
}
