
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,void const**,void const*) ;
 void** FUNC_1 (char const*,int *) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, const void *VAR_1)
{
    const void **VAR_2;

    if ((VAR_2 = FUNC_1(VAR_0, ((void*)0))) != ((void*)0)) {
 FUNC_0("\"%s\": *%p <-- %p", VAR_0, VAR_2, VAR_1);
 *VAR_2 = VAR_1;
    }
}
