
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * value; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; int id; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_8__ {int (* get ) (TYPE_4__*,struct snd_ctl_elem_value*) ;int id; } ;
struct link_slave {int * vals; TYPE_1__ info; TYPE_4__ slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ctl_elem_value*) ;
 struct snd_ctl_elem_value* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_4__*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_3(struct link_slave *VAR_2)
{
 struct snd_ctl_elem_value *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_3->id = VAR_2->slave.id;
 VAR_4 = VAR_2->slave.get(&VAR_2->slave, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_2->info.count; VAR_5++)
  VAR_2->vals[VAR_5] = VAR_3->value.integer.value[VAR_5];
 FUNC_0(VAR_3);
 return 0;
}
