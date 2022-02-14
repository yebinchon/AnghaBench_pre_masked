
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct type_hash {int type; int hash; } ;
typedef int hashval_t ;


 int VAR_0 ;
 struct type_hash* FUNC_0 (int) ;
 void** FUNC_1 (int ,struct type_hash*,int ,int ) ;
 int VAR_1 ;

void
FUNC_2 (hashval_t VAR_2, tree VAR_3)
{
  struct type_hash *VAR_4;
  void **VAR_5;

  VAR_4 = FUNC_0 (sizeof (struct type_hash));
  VAR_4->hash = VAR_2;
  VAR_4->type = VAR_3;
  VAR_5 = FUNC_1 (VAR_1, VAR_4, VAR_2, VAR_0);
  *(struct type_hash **) VAR_5 = VAR_4;
}
