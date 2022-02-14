
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_entry {scalar_t__* sym; scalar_t__ addr; } ;
struct TYPE_4__ {scalar_t__ end; char* etext; } ;
struct TYPE_3__ {scalar_t__ end; char* etext; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct sym_entry*) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct sym_entry *VAR_4)
{





 static char *VAR_5[] = {
  "kallsyms_addresses",
  "kallsyms_num_syms",
  "kallsyms_names",
  "kallsyms_markers",
  "kallsyms_token_table",
  "kallsyms_token_index",


  "_SDA_BASE_",
  "_SDA2_BASE_",
  ((void*)0) };
 int VAR_6;
 int VAR_7 = 1;


 if (VAR_1 && *(VAR_4->sym + 1) == VAR_1)
  VAR_7++;



 if (!VAR_0) {
  if (FUNC_2(VAR_4) == 0)
   return 0;






  if ((VAR_4->addr == VAR_3->end &&
    FUNC_0((char *)VAR_4->sym + VAR_7, VAR_3->etext)) ||
      (VAR_4->addr == VAR_2->end &&
    FUNC_0((char *)VAR_4->sym + VAR_7, VAR_2->etext)))
   return 0;
 }


 if (FUNC_1((char *)VAR_4->sym + VAR_7, "_compiled."))
  return 0;

 for (VAR_6 = 0; VAR_5[VAR_6]; VAR_6++)
  if( FUNC_0((char *)VAR_4->sym + VAR_7, VAR_5[VAR_6]) == 0 )
   return 0;

 return 1;
}
