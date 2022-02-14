
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {scalar_t__ seq_mode; } ;
struct snd_rawmidi {struct snd_virmidi_dev* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_virmidi_dev*) ;

__attribute__((used)) static int FUNC_1(struct snd_rawmidi *VAR_1)
{
 struct snd_virmidi_dev *VAR_2 = VAR_1->private_data;

 if (VAR_2->seq_mode == VAR_0)
  FUNC_0(VAR_2);
 return 0;
}
