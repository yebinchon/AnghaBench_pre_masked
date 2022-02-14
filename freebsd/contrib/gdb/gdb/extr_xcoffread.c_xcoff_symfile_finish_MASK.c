
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int * sym_private; int md; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2 (struct objfile *VAR_4)
{
  if (VAR_4->sym_private != ((void*)0))
    {
      FUNC_1 (VAR_4->md, VAR_4->sym_private);
    }


  if (VAR_3)
    {
      FUNC_0 (VAR_3);
      VAR_3 = ((void*)0);
    }
  VAR_1 = VAR_2 = VAR_0 = 0;
}
