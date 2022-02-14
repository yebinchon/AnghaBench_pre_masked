
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct KeyFuncs {int func; scalar_t__ name; } ;
typedef int KEYCMD ;
typedef int Char ;


 int FUNC_0 (int,int,char*) ;
 struct KeyFuncs* VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static KEYCMD
FUNC_4(Char *VAR_1)
{
    struct KeyFuncs *VAR_2;

    for (VAR_2 = VAR_0; VAR_2->name; VAR_2++) {
 if (FUNC_2(FUNC_1(VAR_1), VAR_2->name) == 0) {
     return (KEYCMD) VAR_2->func;
 }
    }
    FUNC_3(FUNC_0(20, 3, "Bad command name: %S\n"), VAR_1);
    return 0;
}
