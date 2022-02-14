
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** kvhash; } ;
typedef TYPE_1__ mnt_map ;
struct TYPE_6__ {char* val; struct TYPE_6__* next; int key; } ;
typedef TYPE_2__ kv ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static void
FUNC_4(mnt_map *VAR_0, char *VAR_1, char *VAR_2)
{
  kv *VAR_3;




  VAR_3 = VAR_0->kvhash[FUNC_2(VAR_1)];




  while (VAR_3 && !FUNC_0(VAR_3->key, VAR_1))
    VAR_3 = VAR_3->next;

  if (VAR_3) {
    FUNC_1(VAR_3->val);
    VAR_3->val = VAR_2;
  } else {
    FUNC_3(VAR_0, VAR_1, VAR_2);
  }
}
