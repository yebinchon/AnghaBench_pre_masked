
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_ssize_t ;
typedef int xo_handle_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (int *,char*,int ,char const*) ;

__attribute__((used)) static const char *
FUNC_2 (xo_handle_t *VAR_0, const char *VAR_1, xo_ssize_t VAR_2)
{
    if (VAR_1 == ((void*)0) || FUNC_0(VAR_1[0]) || VAR_1[0] == '_')
        return "";

    FUNC_1(VAR_0, "invalid XML tag name: '%.*s'", VAR_2, VAR_1);
    return "_";
}
