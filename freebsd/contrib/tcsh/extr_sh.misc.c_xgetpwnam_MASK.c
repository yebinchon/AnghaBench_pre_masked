
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct passwd* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 () ;

struct passwd *
FUNC_2(const char *VAR_2)
{
    struct passwd *VAR_3;

    VAR_1 = 0;
    while ((VAR_3 = FUNC_0(VAR_2)) == ((void*)0) && VAR_1 == VAR_0) {
 if (FUNC_1())
     break;
 VAR_1 = 0;
    }
    return VAR_3;
}
