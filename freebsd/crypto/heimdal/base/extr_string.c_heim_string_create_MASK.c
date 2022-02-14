
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ heim_string_t ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

heim_string_t
FUNC_3(const char *VAR_1)
{
    size_t VAR_2 = FUNC_2(VAR_1);
    heim_string_t VAR_3;

    VAR_3 = FUNC_0(&VAR_0, VAR_2 + 1);
    if (VAR_3)
 FUNC_1(VAR_3, VAR_1, VAR_2 + 1);
    return VAR_3;
}
