
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; } ;
struct snd_kcontrol {int count; int private_free; struct link_slave* private_data; TYPE_1__ tlv; TYPE_2__* vd; int put; int get; int info; } ;
struct link_slave {unsigned int flags; int list; struct link_master* master; struct snd_kcontrol slave; struct snd_kcontrol* kctl; } ;
struct link_master {int slaves; } ;
struct TYPE_5__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct link_slave* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct link_master* FUNC_3 (struct snd_kcontrol*) ;

int FUNC_4(struct snd_kcontrol *VAR_8, struct snd_kcontrol *VAR_9,
         unsigned int VAR_10)
{
 struct link_master *VAR_11 = FUNC_3(VAR_8);
 struct link_slave *VAR_12;

 VAR_12 = FUNC_0(sizeof(*VAR_12) +
         VAR_9->count * sizeof(*VAR_9->vd), VAR_1);
 if (!VAR_12)
  return -VAR_0;
 VAR_12->kctl = VAR_9;
 VAR_12->slave = *VAR_9;
 FUNC_2(VAR_12->slave.vd, VAR_9->vd, VAR_9->count * sizeof(*VAR_9->vd));
 VAR_12->master = VAR_11;
 VAR_12->flags = VAR_10;


 VAR_9->info = VAR_5;
 VAR_9->get = VAR_4;
 VAR_9->put = VAR_6;
 if (VAR_9->vd[0].access & VAR_2)
  VAR_9->tlv.c = VAR_7;
 VAR_9->private_data = VAR_12;
 VAR_9->private_free = VAR_3;

 FUNC_1(&VAR_12->list, &VAR_11->slaves);
 return 0;
}
