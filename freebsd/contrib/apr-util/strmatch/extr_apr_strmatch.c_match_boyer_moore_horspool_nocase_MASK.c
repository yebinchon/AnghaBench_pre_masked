
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; char* pattern; scalar_t__ context; } ;
typedef TYPE_1__ apr_strmatch_pattern ;
typedef int apr_size_t ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static const char *FUNC_1(
                               const apr_strmatch_pattern *VAR_0,
                               const char *VAR_1, apr_size_t VAR_2)
{
    const char *VAR_3 = VAR_1 + VAR_2;
    apr_size_t *VAR_4 = (apr_size_t *)(VAR_0->context);
    const char *VAR_5 = VAR_1 + VAR_0->length - 1;
    const char *VAR_6 = VAR_0->pattern;
    const char *VAR_7 = VAR_6 + VAR_0->length - 1;
    while (VAR_5 < VAR_3) {
        const char *VAR_8 = VAR_5;
        const char *VAR_9 = VAR_7;
        while (FUNC_0(*VAR_8) == FUNC_0(*VAR_9)) {
            VAR_9--;
            if (VAR_9 < VAR_6) {
                return VAR_8;
            }
            VAR_8--;
        }
        VAR_5 += VAR_4[(unsigned char)FUNC_0(*VAR_5)];
    }
    return ((void*)0);
}
