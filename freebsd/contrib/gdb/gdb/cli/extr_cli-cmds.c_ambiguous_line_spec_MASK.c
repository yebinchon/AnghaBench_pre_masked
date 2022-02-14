
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symtabs_and_lines {int nelts; TYPE_2__* sals; } ;
struct TYPE_4__ {int line; TYPE_1__* symtab; } ;
struct TYPE_3__ {int filename; } ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (struct symtabs_and_lines *VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->nelts; ++VAR_1)
    FUNC_0 ("file: \"%s\", line number: %d\n",
       VAR_0->sals[VAR_1].symtab->filename, VAR_0->sals[VAR_1].line);
}
