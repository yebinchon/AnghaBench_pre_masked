
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int dummy; } ;
struct blockvector {int dummy; } ;
struct block {int dummy; } ;


 struct blockvector* FUNC_0 (struct symtab*) ;
 struct block* FUNC_1 (struct blockvector*,int ) ;
 int FUNC_2 (struct block*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct symtab *VAR_1)
{
  struct blockvector *VAR_2 = FUNC_0 (VAR_1);
  struct block *VAR_3 = FUNC_1 (VAR_2, VAR_0);

  FUNC_3 (FUNC_2 (VAR_3));
}
