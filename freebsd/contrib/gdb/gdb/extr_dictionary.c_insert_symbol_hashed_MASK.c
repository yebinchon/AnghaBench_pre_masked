
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {struct symbol* hash_next; } ;
struct dictionary {int dummy; } ;


 struct symbol** FUNC_0 (struct dictionary*) ;
 unsigned int FUNC_1 (struct dictionary*) ;
 int FUNC_2 (struct symbol*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct dictionary *VAR_0,
        struct symbol *VAR_1)
{
  unsigned int VAR_2;
  struct symbol **VAR_3 = FUNC_0 (VAR_0);

  VAR_2 = (FUNC_3 (FUNC_2 (VAR_1))
  % FUNC_1 (VAR_0));
  VAR_1->hash_next = VAR_3[VAR_2];
  VAR_3[VAR_2] = VAR_1;
}
