
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const char *VAR_2)
{
    const char *VAR_3;

    if (VAR_1 == 0)
 return;
    for (VAR_3 = VAR_1; *VAR_3 != '\n'; ++VAR_3)
    {
 if (FUNC_1(FUNC_0(*VAR_3)) || *VAR_3 == '\t')
     FUNC_2(*VAR_3, VAR_0);
 else
     FUNC_2('?', VAR_0);
    }
    FUNC_2('\n', VAR_0);
    for (VAR_3 = VAR_1; VAR_3 < VAR_2; ++VAR_3)
    {
 if (*VAR_3 == '\t')
     FUNC_2('\t', VAR_0);
 else
     FUNC_2(' ', VAR_0);
    }
    FUNC_2('^', VAR_0);
    FUNC_2('\n', VAR_0);
}
