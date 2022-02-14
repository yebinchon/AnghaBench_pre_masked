
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 char const* FUNC_0 (int *,int const*) ;
 char const* FUNC_1 (int *,int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

__attribute__((used)) static const char *
FUNC_3(netdissect_options *VAR_1, const u_char *VAR_2)
{
    if (FUNC_2(VAR_2))
        return FUNC_1(VAR_1, VAR_2 + VAR_0);
    else
        return FUNC_0(VAR_1, VAR_2);
}
