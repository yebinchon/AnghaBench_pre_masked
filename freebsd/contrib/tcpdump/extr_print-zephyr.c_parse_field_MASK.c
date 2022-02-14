
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;


 int FUNC_0 (char const) ;

__attribute__((used)) static const char *
FUNC_1(netdissect_options *VAR_0, const char **VAR_1, int *VAR_2, int *VAR_3)
{
    const char *VAR_4;


    VAR_4 = *VAR_1;

    for (;;) {
 if (*VAR_2 == 0) {

     return ((void*)0);
 }
 if (!FUNC_0(**VAR_1)) {

     *VAR_3 = 1;
     return ((void*)0);
 }
 if (**VAR_1 == '\0') {

     break;
 }

 (*VAR_1)++;
 (*VAR_2)--;
    }

    (*VAR_1)++;
    (*VAR_2)--;
    return VAR_4;
}
