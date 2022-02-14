
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptable {int entries; } ;
struct pentry {int entries; } ;


 int FUNC_0 (int *) ;
 struct ptable* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ptable*) ;
 int FUNC_3 (struct ptable*) ;

void
FUNC_4(struct ptable *VAR_0)
{
 struct pentry *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 while (!FUNC_0(&VAR_0->entries)) {
  VAR_1 = FUNC_1(&VAR_0->entries);
  FUNC_2(&VAR_0->entries, VAR_1);
  FUNC_3(VAR_1);
 }
 FUNC_3(VAR_0);
}
