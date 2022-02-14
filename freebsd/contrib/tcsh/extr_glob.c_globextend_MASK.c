
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gl_pathc; int gl_offs; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;


 char* FUNC_0 (char const*) ;
 char** FUNC_1 (char**,size_t) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, glob_t *VAR_1)
{
    char **VAR_2;
    int VAR_3;
    size_t VAR_4;

    VAR_4 = sizeof(*VAR_2) * (2 + VAR_1->gl_pathc + VAR_1->gl_offs);
    VAR_2 = FUNC_1(VAR_1->gl_pathv, VAR_4);

    if (VAR_1->gl_pathv == ((void*)0) && VAR_1->gl_offs > 0) {

 VAR_2 += VAR_1->gl_offs;
 for (VAR_3 = VAR_1->gl_offs; --VAR_3 >= 0;)
     *--VAR_2 = ((void*)0);
    }
    VAR_1->gl_pathv = VAR_2;

    VAR_2[VAR_1->gl_offs + VAR_1->gl_pathc++] = FUNC_0(VAR_0);
    VAR_2[VAR_1->gl_offs + VAR_1->gl_pathc] = ((void*)0);
}
