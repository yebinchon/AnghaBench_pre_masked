
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_key {int table; scalar_t__ name; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct macro_key*,int ) ;

__attribute__((used)) static void
FUNC_2 (void *VAR_0)
{
  struct macro_key *VAR_1 = (struct macro_key *) VAR_0;

  FUNC_0 (VAR_1->table, (char *) VAR_1->name);
  FUNC_1 (VAR_1, VAR_1->table);
}
