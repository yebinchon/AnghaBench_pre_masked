
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *,char const*,int ,int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static
bool
FUNC_5(const char *VAR_2, const char *VAR_3)
{
    int VAR_4;
    regex_t VAR_5;

    FUNC_1("Looking for '%s' in '%s'\n", VAR_2, VAR_3);
    FUNC_0(FUNC_2(&VAR_5, VAR_2, VAR_0) == 0);

    VAR_4 = FUNC_3(&VAR_5, VAR_3, 0, ((void*)0), 0);
    FUNC_0(VAR_4 == 0 || VAR_4 == VAR_1);

    FUNC_4(&VAR_5);

    return VAR_4 == 0;
}
