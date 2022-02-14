
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int * sym_stab_info; int md; } ;
struct header_file {struct header_file* vector; struct header_file* name; } ;


 struct header_file* FUNC_0 (struct objfile*) ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct header_file*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5 (struct objfile *VAR_0)
{
  if (VAR_0->sym_stab_info != ((void*)0))
    {
      if (FUNC_0 (VAR_0) != ((void*)0))
 {
   int VAR_1 = FUNC_1 (VAR_0);
   struct header_file *VAR_2 = FUNC_0 (VAR_0);

   while (--VAR_1 >= 0)
     {
       FUNC_3 (VAR_2[VAR_1].name);
       FUNC_3 (VAR_2[VAR_1].vector);
     }
   FUNC_3 (VAR_2);
 }
      FUNC_4 (VAR_0->md, VAR_0->sym_stab_info);
    }
  FUNC_2 ();
}
