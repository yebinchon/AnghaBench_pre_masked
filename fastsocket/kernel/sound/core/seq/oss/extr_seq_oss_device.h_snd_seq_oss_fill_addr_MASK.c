
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; int port; } ;
struct snd_seq_event {TYPE_1__ dest; int source; int queue; } ;
struct seq_oss_devinfo {int addr; int queue; } ;



__attribute__((used)) static inline void
FUNC_0(struct seq_oss_devinfo *VAR_0, struct snd_seq_event *VAR_1,
       int VAR_2, int VAR_3)
{
 VAR_1->queue = VAR_0->queue;
 VAR_1->source = VAR_0->addr;
 VAR_1->dest.client = VAR_2;
 VAR_1->dest.port = VAR_3;
}
