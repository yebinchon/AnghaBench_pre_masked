
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct hdsp_midi {scalar_t__ id; struct hdsp* hdsp; } ;
struct hdsp {int control_register; int lock; int midi_tasklet; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdsp*,int ,int) ;
 int FUNC_1 (struct hdsp*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct snd_rawmidi_substream *VAR_3, int VAR_4)
{
 struct hdsp *VAR_5;
 struct hdsp_midi *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;

 VAR_6 = (struct hdsp_midi *) VAR_3->rmidi->private_data;
 VAR_5 = VAR_6->hdsp;
 VAR_8 = VAR_6->id ? VAR_1 : VAR_0;
 FUNC_2 (&VAR_5->lock, VAR_7);
 if (VAR_4) {
  if (!(VAR_5->control_register & VAR_8)) {
   FUNC_1 (VAR_5, VAR_6->id);
   VAR_5->control_register |= VAR_8;
  }
 } else {
  VAR_5->control_register &= ~VAR_8;
  FUNC_4(&VAR_5->midi_tasklet);
 }

 FUNC_0(VAR_5, VAR_2, VAR_5->control_register);
 FUNC_3 (&VAR_5->lock, VAR_7);
}
