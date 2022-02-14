
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,char*,char*,char const*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static
void
FUNC_4(int VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_2(VAR_0);
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_1(VAR_1, VAR_2, "read: '%s', expected: '%s'", VAR_2, VAR_1);
    FUNC_3(VAR_2);
}
