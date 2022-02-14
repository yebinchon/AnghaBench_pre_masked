
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct val_anchors {TYPE_1__* autr; } ;
struct trust_anchor {TYPE_2__* autr; } ;
struct TYPE_8__ {scalar_t__ key; } ;
typedef TYPE_3__ rbnode_type ;
struct TYPE_7__ {int next_probe_time; } ;
struct TYPE_6__ {int probe; } ;


 TYPE_3__* VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;

__attribute__((used)) static time_t
FUNC_1(struct val_anchors* VAR_1)
{
 rbnode_type* VAR_2 = FUNC_0(&VAR_1->autr->probe);
 if(VAR_2 != VAR_0)
  return ((struct trust_anchor*)VAR_2->key)->autr->next_probe_time;
 return 0;
}
