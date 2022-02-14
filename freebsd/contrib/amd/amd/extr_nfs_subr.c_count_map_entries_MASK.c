
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_8__ {scalar_t__ mf_private; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_9__ {TYPE_4__** kvhash; } ;
typedef TYPE_3__ mnt_map ;
struct TYPE_10__ {int key; struct TYPE_10__* next; } ;
typedef TYPE_4__ kv ;
struct TYPE_11__ {TYPE_1__* am_al; } ;
typedef TYPE_5__ am_node ;
struct TYPE_7__ {TYPE_2__* al_mnt; } ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(const am_node *VAR_1, u_int *VAR_2, u_int *VAR_3, u_int *VAR_4)
{
  u_int VAR_5, VAR_6, VAR_7, VAR_8;
  mntfs *VAR_9;
  mnt_map *VAR_10;
  kv *VAR_11;

  VAR_5 = VAR_6 = VAR_7 = 0;
  if (!VAR_1)
    goto out;
  VAR_9 = VAR_1->am_al->al_mnt;
  if (!VAR_9)
    goto out;
  VAR_10 = (mnt_map *) VAR_9->mf_private;
  if (!VAR_10)
    goto out;


  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
    for (VAR_11 = VAR_10->kvhash[VAR_8]; VAR_11 ; VAR_11 = VAR_11->next) {
      if (!VAR_11->key)
 continue;
      VAR_5++;




    }
  }

out:
  *VAR_2 = VAR_5;
  *VAR_3 = VAR_6;
  *VAR_4 = VAR_7;
}
