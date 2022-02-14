
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct TYPE_6__ {unsigned long data; scalar_t__ expires; int function; } ;
struct hdspm_midi {scalar_t__ istimer; int lock; TYPE_2__ timer; } ;
struct TYPE_5__ {struct hdspm_midi* private_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct hdspm_midi*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct snd_rawmidi_substream *VAR_2, int VAR_3)
{
 struct hdspm_midi *VAR_4;
 unsigned long VAR_5;

 VAR_4 = VAR_2->rmidi->private_data;
 FUNC_4 (&VAR_4->lock, VAR_5);
 if (VAR_3) {
  if (!VAR_4->istimer) {
   FUNC_2(&VAR_4->timer);
   VAR_4->timer.function = VAR_1;
   VAR_4->timer.data = (unsigned long) VAR_4;
   VAR_4->timer.expires = 1 + VAR_0;
   FUNC_0(&VAR_4->timer);
   VAR_4->istimer++;
  }
 } else {
  if (VAR_4->istimer && --VAR_4->istimer <= 0)
   FUNC_1 (&VAR_4->timer);
 }
 FUNC_5 (&VAR_4->lock, VAR_5);
 if (VAR_3)
  FUNC_3(VAR_4);
}
