
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* de_next; } ;
typedef TYPE_1__ dict_ent ;
struct TYPE_9__ {TYPE_1__** de; } ;
typedef TYPE_2__ dict ;


 int FUNC_0 (TYPE_1__*,char*) ;
 size_t FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_3 (char*) ;

void
FUNC_4(dict *VAR_0, char *VAR_1, char *VAR_2)
{
  dict_ent *VAR_3 = FUNC_2(VAR_0, VAR_1);

  if (!VAR_3) {
    dict_ent **VAR_4 = &VAR_0->de[FUNC_1(VAR_1)];
    VAR_3 = FUNC_3(VAR_1);
    VAR_3->de_next = *VAR_4;
    *VAR_4 = VAR_3;
  }
  FUNC_0(VAR_3, VAR_2);
}
