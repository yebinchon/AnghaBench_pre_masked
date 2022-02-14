
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_msndmidi {int input_lock; int mode; } ;
struct TYPE_2__ {struct snd_msndmidi* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct snd_msndmidi*) ;
 int FUNC_2 (struct snd_msndmidi*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct snd_rawmidi_substream *VAR_1,
     int VAR_2)
{
 unsigned long VAR_3;
 struct snd_msndmidi *VAR_4;

 FUNC_3("snd_msndmidi_input_trigger(, %i)\n", VAR_2);

 VAR_4 = VAR_1->rmidi->private_data;
 FUNC_4(&VAR_4->input_lock, VAR_3);
 if (VAR_2) {
  if (!FUNC_6(VAR_0,
          &VAR_4->mode))
   FUNC_1(VAR_4);
 } else {
  FUNC_0(VAR_0, &VAR_4->mode);
 }
 FUNC_5(&VAR_4->input_lock, VAR_3);
 if (VAR_2)
  FUNC_2(VAR_4);
}
