
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srch {int s_value; char const* s_name; } ;


 int VAR_0 ;
 struct srch* VAR_1 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_2)
{
    struct srch *VAR_3, *VAR_4;

    for (VAR_3 = VAR_1, VAR_4 = VAR_1 + VAR_0; VAR_3 < VAR_4; VAR_3++)
 if (VAR_3->s_value == VAR_2)
     return (VAR_3->s_name);
    return ("");
}
