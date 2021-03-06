
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {scalar_t__ type; struct string_list* defn; } ;
struct string_list {scalar_t__ tag; int string; struct string_list* next; } ;


 scalar_t__ SYM_ENUM ;
 scalar_t__ SYM_NORMAL ;
 scalar_t__ SYM_STRUCT ;
 scalar_t__ SYM_UNION ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static int is_unknown_symbol(struct symbol *sym)
{
 struct string_list *defn;

 return ((sym->type == SYM_STRUCT ||
   sym->type == SYM_UNION ||
   sym->type == SYM_ENUM) &&
  (defn = sym->defn) && defn->tag == SYM_NORMAL &&
   strcmp(defn->string, "}") == 0 &&
  (defn = defn->next) && defn->tag == SYM_NORMAL &&
   strcmp(defn->string, "UNKNOWN") == 0 &&
  (defn = defn->next) && defn->tag == SYM_NORMAL &&
   strcmp(defn->string, "{") == 0);
}
