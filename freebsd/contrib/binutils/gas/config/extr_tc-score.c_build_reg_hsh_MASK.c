
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_map {int * htab; struct reg_entry* names; } ;
struct reg_entry {int * name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (struct reg_entry const*,int *) ;

__attribute__((used)) static void
FUNC_4 (struct reg_map *VAR_0)
{
  const struct reg_entry *VAR_1;

  if ((VAR_0->htab = FUNC_2 ()) == ((void*)0))
    {
      FUNC_1 (FUNC_0("virtual memory exhausted"));
    }
  for (VAR_1 = VAR_0->names; VAR_1->name != ((void*)0); VAR_1++)
    {
      FUNC_3 (VAR_1, VAR_0->htab);
    }
}
