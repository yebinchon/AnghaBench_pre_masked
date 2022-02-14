
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 struct tm* FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,struct tm*) ;
 scalar_t__ FUNC_2 (struct tm*,int const*) ;
 int FUNC_3 (struct tm*,struct tm*,int) ;

struct tm *FUNC_4(const time_t *VAR_0, struct tm *VAR_1)
{
    struct tm *VAR_2 = ((void*)0);
    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    FUNC_3(VAR_1, VAR_2, sizeof(struct tm));
    VAR_2 = VAR_1;

    return VAR_2;
}
