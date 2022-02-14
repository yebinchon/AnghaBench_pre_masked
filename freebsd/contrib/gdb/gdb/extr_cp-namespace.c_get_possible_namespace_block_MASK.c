
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int * cp_namespace_symtab; } ;
struct block {int dummy; } ;


 int FUNC_0 (int *) ;
 struct block* FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct objfile*) ;

__attribute__((used)) static struct block *
FUNC_3 (struct objfile *VAR_1)
{
  if (VAR_1->cp_namespace_symtab == ((void*)0))
    FUNC_2 (VAR_1);

  return FUNC_1 (FUNC_0 (VAR_1->cp_namespace_symtab),
       VAR_0);
}
