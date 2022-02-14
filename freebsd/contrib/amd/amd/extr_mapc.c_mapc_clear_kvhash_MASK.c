
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* val; struct TYPE_4__* key; struct TYPE_4__* next; } ;
typedef TYPE_1__ kv ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(kv **VAR_1)
{
  int VAR_2;





  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
    kv *VAR_3 = VAR_1[VAR_2];
    while (VAR_3) {
      kv *VAR_4 = VAR_3->next;
      FUNC_0(VAR_3->key);
      FUNC_0(VAR_3->val);
      FUNC_0(VAR_3);
      VAR_3 = VAR_4;
    }
  }
}
