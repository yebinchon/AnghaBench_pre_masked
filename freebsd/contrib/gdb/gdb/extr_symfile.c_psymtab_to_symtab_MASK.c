
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct partial_symtab {struct symtab* symtab; int (* read_symtab ) (struct partial_symtab*) ;int readin; } ;
struct cleanup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cleanup*) ;
 struct cleanup* FUNC_1 (int ,int *) ;
 int FUNC_2 (struct partial_symtab*) ;

struct symtab *
FUNC_3 (struct partial_symtab *VAR_2)
{

  if (VAR_2->symtab)
    return VAR_2->symtab;


  if (!VAR_2->readin)
    {
      struct cleanup *VAR_3 = FUNC_1 (VAR_1, ((void*)0));
      VAR_0++;
      (*VAR_2->read_symtab) (VAR_2);
      FUNC_0 (VAR_3);
    }

  return VAR_2->symtab;
}
