
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* value; } ;
struct TYPE_10__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_11__ {int (* put ) (TYPE_5__*,struct snd_ctl_elem_value*) ;} ;
struct TYPE_8__ {int type; int count; int min_val; int max_val; } ;
struct link_slave {TYPE_5__ slave; TYPE_2__ info; TYPE_6__* master; } ;
struct TYPE_7__ {int max_val; } ;
struct TYPE_12__ {int val; TYPE_1__ info; } ;




 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_2(struct link_slave *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0(VAR_0->master);
 if (VAR_2 < 0)
  return VAR_2;

 switch (VAR_0->info.type) {
 case 129:
  for (VAR_3 = 0; VAR_3 < VAR_0->info.count; VAR_3++)
   VAR_1->value.integer.value[VAR_3] &=
    !!VAR_0->master->val;
  break;
 case 128:
  for (VAR_3 = 0; VAR_3 < VAR_0->info.count; VAR_3++) {

   VAR_4 = VAR_1->value.integer.value[VAR_3];
   VAR_4 += VAR_0->master->val - VAR_0->master->info.max_val;
   if (VAR_4 < VAR_0->info.min_val)
    VAR_4 = VAR_0->info.min_val;
   else if (VAR_4 > VAR_0->info.max_val)
    VAR_4 = VAR_0->info.max_val;
   VAR_1->value.integer.value[VAR_3] = VAR_4;
  }
  break;
 }
 return VAR_0->slave.put(&VAR_0->slave, VAR_1);
}
