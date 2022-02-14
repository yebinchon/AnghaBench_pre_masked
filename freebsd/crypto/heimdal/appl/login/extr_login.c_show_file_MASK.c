
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2)
{
    FILE *VAR_3;
    char VAR_4[VAR_0];
    if((VAR_3 = FUNC_2(VAR_2, "r")) == ((void*)0))
 return;
    while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_3))
 FUNC_3(VAR_4, VAR_1);
    FUNC_0(VAR_3);
}
