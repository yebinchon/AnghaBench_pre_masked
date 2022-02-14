
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* symbol; } ;
typedef TYPE_2__ symbol_node_t ;
struct TYPE_4__ {char* name; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_1, symbol_node_t *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1,
"static %sreg_parse_entry_t %s_parse_table[] = {\n",
  VAR_0,
  VAR_2->symbol->name);
}
