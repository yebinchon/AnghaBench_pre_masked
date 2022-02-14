
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_mpu401 {scalar_t__ irq; int mode; int input_lock; int (* read ) (struct snd_mpu401*,int ) ;} ;
struct TYPE_2__ {struct snd_mpu401* private_data; } ;


 int FUNC_0 (struct snd_mpu401*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_mpu401*,int) ;
 int FUNC_3 (struct snd_mpu401*) ;
 int FUNC_4 (struct snd_mpu401*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct snd_mpu401*,int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void
FUNC_9(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct snd_mpu401 *VAR_4;
 int VAR_5 = 64;

 VAR_4 = VAR_1->rmidi->private_data;
 if (VAR_2) {
  if (! FUNC_8(VAR_0,
           &VAR_4->mode)) {

   while (VAR_5-- > 0)
    VAR_4->read(VAR_4, FUNC_0(VAR_4));
   if (VAR_4->irq < 0)
    FUNC_2(VAR_4, 1);
  }


  FUNC_5(&VAR_4->input_lock, VAR_3);
  FUNC_3(VAR_4);
  FUNC_6(&VAR_4->input_lock, VAR_3);
 } else {
  if (VAR_4->irq < 0)
   FUNC_4(VAR_4, 1);
  FUNC_1(VAR_0, &VAR_4->mode);
 }

}
