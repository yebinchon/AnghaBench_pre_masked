
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_table {int size; int set_p; int table; } ;
struct expr {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (int VAR_0, struct hash_table *VAR_1, int VAR_2)
{
  int VAR_3;

  VAR_1->size = VAR_0 / 4;
  if (VAR_1->size < 11)
    VAR_1->size = 11;




  VAR_1->size |= 1;
  VAR_3 = VAR_1->size * sizeof (struct expr *);
  VAR_1->table = FUNC_0 (VAR_3);
  VAR_1->set_p = VAR_2;
}
