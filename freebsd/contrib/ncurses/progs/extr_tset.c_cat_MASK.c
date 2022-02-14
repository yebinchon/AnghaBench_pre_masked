
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,int,int,int *) ;
 size_t FUNC_4 (char*,int,size_t,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(char *VAR_2)
{
    FILE *VAR_3;
    size_t VAR_4;
    char VAR_5[VAR_0];

    if ((VAR_3 = FUNC_2(VAR_2, "r")) == 0)
 FUNC_0(VAR_2);

    while ((VAR_4 = FUNC_3(VAR_5, sizeof(char), sizeof(VAR_5), VAR_3)) != 0)
 if (FUNC_4(VAR_5, sizeof(char), VAR_4, VAR_1) != VAR_4)
       FUNC_0("write to stderr");
    FUNC_1(VAR_3);
}
