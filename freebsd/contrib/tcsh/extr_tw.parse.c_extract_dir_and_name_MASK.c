
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef int const Char ;


 int FUNC_0 (struct Strbuf*,int const*,int) ;
 int FUNC_1 (struct Strbuf*) ;
 int const* FUNC_2 (int const*,char) ;
 int const* FUNC_3 (int const*) ;

__attribute__((used)) static void
FUNC_4(const Char *VAR_0, struct Strbuf *VAR_1, Char **VAR_2)
{
    Char *VAR_3;

    VAR_3 = FUNC_2(VAR_0, '/');




    if (VAR_3 == ((void*)0))
 *VAR_2 = FUNC_3(VAR_0);
    else {
 VAR_3++;
 *VAR_2 = FUNC_3(VAR_3);
 FUNC_0(VAR_1, VAR_0, VAR_3 - VAR_0);
    }
    FUNC_1(VAR_1);
}
