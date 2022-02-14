
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int,char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3( char const *VAR_0 )
{
    char *VAR_1;

    if (VAR_0 == ((void*)0))
        return ((void*)0);

    VAR_1 = (char *) FUNC_0((unsigned) (FUNC_2(VAR_0)+1), "strdup");

    if (VAR_1 != ((void*)0))
        (void) FUNC_1(VAR_1, VAR_0);

    return VAR_1;
}
