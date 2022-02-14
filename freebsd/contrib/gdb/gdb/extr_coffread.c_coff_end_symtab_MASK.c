
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int filename; } ;
struct objfile {int dummy; } ;


 int FUNC_0 (struct objfile*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct symtab* FUNC_1 (int ,struct objfile*,int ) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3 (struct objfile *VAR_4)
{
  struct symtab *VAR_5;

  VAR_3 = VAR_1;

  VAR_5 = FUNC_1 (VAR_0, VAR_4, FUNC_0 (VAR_4));

  if (VAR_5 != ((void*)0))
    FUNC_2 (VAR_5->filename);


  VAR_2 = ((void*)0);
}
