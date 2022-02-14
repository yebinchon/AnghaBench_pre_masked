
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; struct TYPE_3__* next; } ;
typedef TYPE_1__ param ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(FILE * VAR_0, param *VAR_1, int VAR_2)
{
    param *VAR_3;

    for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next)
    {
 FUNC_0(VAR_0, "%s%s", VAR_3->name,
  ((VAR_2 || VAR_3->next) ? ", " : ""));
    }
}
