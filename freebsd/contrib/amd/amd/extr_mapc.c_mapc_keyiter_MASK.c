
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int opaque_t ;
struct TYPE_4__ {TYPE_2__** kvhash; } ;
typedef TYPE_1__ mnt_map ;
struct TYPE_5__ {struct TYPE_5__* next; int key; } ;
typedef TYPE_2__ kv ;
typedef int (* key_fun ) (int ,int ) ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int
FUNC_1(mnt_map *VAR_1, key_fun *VAR_2, opaque_t VAR_3)
{
  int VAR_4;
  int VAR_5 = 0;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    kv *VAR_6 = VAR_1->kvhash[VAR_4];
    while (VAR_6) {
      (*VAR_2) (VAR_6->key, VAR_3);
      VAR_6 = VAR_6->next;
      VAR_5++;
    }
  }

  return VAR_5;
}
