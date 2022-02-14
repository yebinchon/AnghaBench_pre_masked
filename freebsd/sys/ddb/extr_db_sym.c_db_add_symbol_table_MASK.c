
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* start; char* end; char* name; char* private; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

void
FUNC_2(char *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6)
{
 if (VAR_1 >= VAR_0) {
  FUNC_1 ("No slots left for %s symbol table", VAR_5);
  FUNC_0 ("db_sym.c: db_add_symbol_table");
 }

 VAR_2[VAR_1].start = VAR_3;
 VAR_2[VAR_1].end = VAR_4;
 VAR_2[VAR_1].name = VAR_5;
 VAR_2[VAR_1].private = VAR_6;
 VAR_1++;
}
