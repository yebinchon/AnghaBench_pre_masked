
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sym_entry {TYPE_1__* sym; int * name; } ;
struct TYPE_2__ {scalar_t__ st_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct sym_entry *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->name != ((void*)0));
 FUNC_0(VAR_2->sym != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->name != ((void*)0));
 FUNC_0(VAR_3->sym != ((void*)0));

 if (VAR_2->sym->st_size == VAR_3->sym->st_size)
  return (FUNC_1(VAR_2->name, VAR_3->name));

 return (VAR_2->sym->st_size - VAR_3->sym->st_size);
}
