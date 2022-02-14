
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int * sym_private; int md; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2 (struct objfile *VAR_0)
{
  if (VAR_0->sym_private != ((void*)0))
    {
      FUNC_1 (VAR_0->md, VAR_0->sym_private);
    }


  FUNC_0 ();
}
