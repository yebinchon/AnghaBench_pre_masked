
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_head {int dummy; } ;
struct sym_entry {struct sym_entry* name; struct sym_entry* sym; } ;


 struct sym_entry* FUNC_0 (struct sym_head*) ;
 struct sym_entry* FUNC_1 (struct sym_entry*,int ) ;
 int FUNC_2 (struct sym_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct sym_head *VAR_1)
{
 struct sym_entry *VAR_2, *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_1);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2->sym);
  FUNC_2(VAR_2->name);
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }
}
