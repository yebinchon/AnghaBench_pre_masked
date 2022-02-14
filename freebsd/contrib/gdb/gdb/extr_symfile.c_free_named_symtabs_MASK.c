
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {struct symtab* next; int filename; } ;
struct partial_symtab {int filename; struct partial_symtab* next; } ;
struct blockvector {int dummy; } ;


 struct blockvector* FUNC_0 (struct symtab*) ;
 int FUNC_1 (struct blockvector*,int ) ;
 int FUNC_2 (struct blockvector*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct partial_symtab*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (struct symtab*) ;
 int FUNC_7 (int ,int ) ;
 struct partial_symtab* VAR_4 ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct symtab* VAR_7 ;

int
FUNC_9 (char *VAR_8)
{
  return (0);

}
