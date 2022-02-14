
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct try_library_args {char const* name; int fd; int buffer; int buflen; int namelen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,int ,char const*,struct try_library_args*) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_2, const char *VAR_3,
    const char *VAR_4, int *VAR_5)
{
    char *VAR_6;
    struct try_library_args VAR_7;

    if (VAR_3 == ((void*)0))
 return ((void*)0);

    VAR_7.name = VAR_2;
    VAR_7.namelen = FUNC_2(VAR_2);
    VAR_7.buffer = FUNC_3(VAR_0);
    VAR_7.buflen = VAR_0;
    VAR_7.fd = -1;

    VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_4, &VAR_7);
    *VAR_5 = VAR_7.fd;

    FUNC_0(VAR_7.buffer);

    return (VAR_6);
}
