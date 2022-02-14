
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* type; char* name; struct TYPE_3__* next; int type2; } ;
typedef TYPE_1__ param ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(FILE * VAR_0, param *VAR_1, int VAR_2)
{
    param *VAR_3;

    if (VAR_1 != 0)
    {
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
 {
     size_t VAR_4 = FUNC_1(VAR_3->type);
     FUNC_0(VAR_0, "%s%s%s%s%s", VAR_3->type,
      (((VAR_4 != 0) && (VAR_3->type[VAR_4 - 1] == '*'))
       ? ""
       : " "),
      VAR_3->name, VAR_3->type2,
      ((VAR_2 || VAR_3->next) ? ", " : ""));
 }
    }
    else
    {
 if (!VAR_2)
     FUNC_0(VAR_0, "void");
    }
}
