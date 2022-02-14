
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filegen_entry {char const* name; int * filegen; struct filegen_entry* next; } ;
typedef int FILEGEN ;


 int FUNC_0 (int,char*) ;
 struct filegen_entry* FUNC_1 (int) ;
 char const* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,int *) ;
 struct filegen_entry* VAR_0 ;
 int FUNC_4 (char const*,char const*) ;

void
FUNC_5(
 const char * VAR_1,
 const char * VAR_2,
 FILEGEN * VAR_3
 )
{
 struct filegen_entry **VAR_4;

 FUNC_0(4, ("filegen_register(%s, %p)\n", VAR_2, VAR_3));

 FUNC_3(VAR_1, VAR_2, VAR_3);

 VAR_4 = &VAR_0;
 while (((void*)0) != *VAR_4) {
  if ((*VAR_4)->name == VAR_2
      || !FUNC_4((*VAR_4)->name, VAR_2)) {

   FUNC_0(5, ("replacing filegen %p\n",
        (*VAR_4)->filegen));

   (*VAR_4)->filegen = VAR_3;
   return;
  }
  VAR_4 = &((*VAR_4)->next);
 }

 *VAR_4 = FUNC_1(sizeof **VAR_4);

 (*VAR_4)->next = ((void*)0);
 (*VAR_4)->name = FUNC_2(VAR_2);
 (*VAR_4)->filegen = VAR_3;

 FUNC_0(6, ("adding new filegen\n"));

 return;
}
