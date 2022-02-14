
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_0)
{
    if (VAR_0[0] == '$' && VAR_0[1] == '<') {
 VAR_0 += 2;
 while (FUNC_1(FUNC_0(*VAR_0)) || *VAR_0 == '/')
     ++VAR_0;
 if (*VAR_0 == '>')
     ++VAR_0;
    }
    return VAR_0;
}
