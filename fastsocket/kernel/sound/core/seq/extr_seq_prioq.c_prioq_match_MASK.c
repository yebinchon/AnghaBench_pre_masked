
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {TYPE_1__ time; int tick; } ;
struct TYPE_8__ {int client; } ;
struct TYPE_7__ {int client; } ;
struct TYPE_9__ {int flags; TYPE_5__ time; TYPE_3__ dest; TYPE_2__ source; } ;
struct snd_seq_event_cell {TYPE_4__ event; } ;


 int VAR_0 ;



__attribute__((used)) static inline int FUNC_0(struct snd_seq_event_cell *VAR_1,
         int VAR_2, int VAR_3)
{
 if (VAR_1->event.source.client == VAR_2 ||
     VAR_1->event.dest.client == VAR_2)
  return 1;
 if (!VAR_3)
  return 0;
 switch (VAR_1->event.flags & VAR_0) {
 case 128:
  if (VAR_1->event.time.tick)
   return 1;
  break;
 case 129:
  if (VAR_1->event.time.time.tv_sec ||
      VAR_1->event.time.time.tv_nsec)
   return 1;
  break;
 }
 return 0;
}
