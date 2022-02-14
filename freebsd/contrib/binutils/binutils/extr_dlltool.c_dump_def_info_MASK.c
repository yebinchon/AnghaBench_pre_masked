
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; char* internal_name; int ordinal; scalar_t__ private; scalar_t__ noname; scalar_t__ data; scalar_t__ constant; struct TYPE_3__* next; } ;
typedef TYPE_1__ export_type ;
typedef int FILE ;


 char* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 char** VAR_2 ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_3)
{
  int VAR_4;
  export_type *VAR_5;
  FUNC_0 (VAR_3, "%s ", VAR_0);
  for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
    FUNC_0 (VAR_3, "%s ", VAR_2[VAR_4]);
  FUNC_0 (VAR_3, "\n");
  for (VAR_4 = 0, VAR_5 = VAR_1; VAR_5; VAR_4++, VAR_5 = VAR_5->next)
    {
      FUNC_0 (VAR_3, "%s  %d = %s %s @ %d %s%s%s%s\n",
        VAR_0,
        VAR_4,
        VAR_5->name,
        VAR_5->internal_name,
        VAR_5->ordinal,
        VAR_5->noname ? "NONAME " : "",
        VAR_5->private ? "PRIVATE " : "",
        VAR_5->constant ? "CONSTANT" : "",
        VAR_5->data ? "DATA" : "");
    }
}
