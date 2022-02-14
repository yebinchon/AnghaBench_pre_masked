
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_entry {TYPE_2__* sym; int * name; } ;
struct TYPE_4__ {scalar_t__ st_value; } ;
struct TYPE_3__ {char* t_table; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_1, const void *VAR_2)
{
 const struct sym_entry *VAR_3, *VAR_4;
 const char *VAR_5;
 int VAR_6, VAR_7;

 VAR_3 = VAR_1;
 VAR_4 = VAR_2;

 FUNC_1(VAR_0 != ((void*)0));
 VAR_5 = VAR_0->t_table;

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_3->name != ((void*)0));
 FUNC_1(VAR_3->sym != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_4->name != ((void*)0));
 FUNC_1(VAR_4->sym != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));

 VAR_6 = FUNC_0(FUNC_2(VAR_3->sym, VAR_5)) ? 1 : 0;
 VAR_7 = FUNC_0(FUNC_2(VAR_4->sym, VAR_5)) ? 1 : 0;

 FUNC_1(VAR_6 + VAR_7 >= 0);
 FUNC_1(VAR_6 + VAR_7 <= 2);

 switch (VAR_6 + VAR_7) {
 case 0:

  if (VAR_3->sym->st_value == VAR_4->sym->st_value)
   return (FUNC_3(VAR_3->name, VAR_4->name));
  return (VAR_3->sym->st_value > VAR_4->sym->st_value ? 1 : -1);
 case 1:

  return (VAR_6 == 0 ? 1 : -1);
 case 2:

  return (FUNC_3(VAR_3->name, VAR_4->name));
 }


 return (VAR_3->sym->st_value - VAR_4->sym->st_value);
}
