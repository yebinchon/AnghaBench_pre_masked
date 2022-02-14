
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_mpu401 {int (* open_input ) (struct snd_mpu401*) ;int (* close_input ) (struct snd_mpu401*) ;int mode; struct snd_rawmidi_substream* substream_input; } ;
struct TYPE_2__ {struct snd_mpu401* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct snd_mpu401*) ;
 int FUNC_2 (struct snd_mpu401*) ;
 int FUNC_3 (struct snd_mpu401*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_substream *VAR_3)
{
 struct snd_mpu401 *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->rmidi->private_data;
 if (VAR_4->open_input && (VAR_5 = VAR_4->open_input(VAR_4)) < 0)
  return VAR_5;
 if (! FUNC_4(VAR_2, &VAR_4->mode)) {
  if (FUNC_1(VAR_4) < 0)
   goto error_out;
 }
 VAR_4->substream_input = VAR_3;
 FUNC_0(VAR_1, &VAR_4->mode);
 return 0;

error_out:
 if (VAR_4->open_input && VAR_4->close_input)
  VAR_4->close_input(VAR_4);
 return -VAR_0;
}
