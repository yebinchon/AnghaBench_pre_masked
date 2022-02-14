
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct hdspm_midi {scalar_t__ id; struct hdspm* hdspm; } ;
struct hdspm {int control_register; int lock; } ;
struct TYPE_2__ {struct hdspm_midi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdspm*,int ,int) ;
 int FUNC_1 (struct hdspm*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 struct hdspm *VAR_5;
 struct hdspm_midi *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;

 VAR_6 = VAR_3->rmidi->private_data;
 VAR_5 = VAR_6->hdspm;
 VAR_8 = VAR_6->id ?
  VAR_1 : VAR_0;
 FUNC_2 (&VAR_5->lock, VAR_7);
 if (VAR_4) {
  if (!(VAR_5->control_register & VAR_8)) {
   FUNC_1 (VAR_5, VAR_6->id);
   VAR_5->control_register |= VAR_8;
  }
 } else {
  VAR_5->control_register &= ~VAR_8;
 }

 FUNC_0(VAR_5, VAR_2, VAR_5->control_register);
 FUNC_3 (&VAR_5->lock, VAR_7);
}
