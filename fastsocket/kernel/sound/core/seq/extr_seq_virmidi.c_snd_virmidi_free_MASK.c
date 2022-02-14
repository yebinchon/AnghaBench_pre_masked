
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {int dummy; } ;
struct snd_rawmidi {struct snd_virmidi_dev* private_data; } ;


 int FUNC_0 (struct snd_virmidi_dev*) ;

__attribute__((used)) static void FUNC_1(struct snd_rawmidi *VAR_0)
{
 struct snd_virmidi_dev *VAR_1 = VAR_0->private_data;
 FUNC_0(VAR_1);
}
