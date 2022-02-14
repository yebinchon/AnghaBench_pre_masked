
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filegen_entry {char const* name; struct filegen_entry* next; int * filegen; } ;
typedef int FILEGEN ;


 int FUNC_0 (int,char*) ;
 struct filegen_entry* VAR_0 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

FILEGEN *
FUNC_2(
 const char * VAR_1
 )
{
 struct filegen_entry *VAR_2 = VAR_0;

 while (VAR_2) {
  if (VAR_2->name == VAR_1 || FUNC_1(VAR_1, VAR_2->name) == 0) {
   FUNC_0(4, ("filegen_get(%s) = %p\n",
        VAR_1, VAR_2->filegen));
   return VAR_2->filegen;
  }
  VAR_2 = VAR_2->next;
 }
 FUNC_0(4, ("filegen_get(%s) = NULL\n", VAR_1));
 return ((void*)0);
}
