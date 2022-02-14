
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
struct blockvector {int dummy; } ;


 struct blockvector* FUNC_0 (struct symtab*) ;
 int FUNC_1 (struct blockvector*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct symbol*) ;
 struct symtab* FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (struct symbol *VAR_1)
{
  struct symtab *VAR_2 = FUNC_4 ();
  struct blockvector *VAR_3 = FUNC_0 (VAR_2);
  FUNC_3 (FUNC_2 (FUNC_1 (VAR_3, VAR_0)), VAR_1);
}
