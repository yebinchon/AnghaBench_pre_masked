
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int) ;

__attribute__((used)) static
void
FUNC_3(const char *VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_2(VAR_3, VAR_0 | VAR_2 | VAR_1, VAR_4);
    if (VAR_5 == -1)
        FUNC_0("Could not create helper file %s", VAR_3);
    FUNC_1(VAR_5);
}
