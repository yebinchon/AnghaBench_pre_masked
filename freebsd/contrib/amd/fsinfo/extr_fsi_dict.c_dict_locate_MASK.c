
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* de_next; int de_key; } ;
typedef TYPE_1__ dict_ent ;
struct TYPE_6__ {TYPE_1__** de; } ;
typedef TYPE_2__ dict ;


 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (char*) ;

dict_ent *
FUNC_2(dict *VAR_0, char *VAR_1)
{
  dict_ent *VAR_2 = VAR_0->de[FUNC_1(VAR_1)];

  while (VAR_2 && !FUNC_0(VAR_2->de_key, VAR_1))
    VAR_2 = VAR_2->de_next;
  return VAR_2;
}
