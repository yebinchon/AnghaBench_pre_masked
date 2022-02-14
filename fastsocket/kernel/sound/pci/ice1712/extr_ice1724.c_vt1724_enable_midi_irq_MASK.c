
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_2__ {struct snd_ice1712* private_data; } ;


 int FUNC_0 (struct snd_ice1712*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0,
       u8 VAR_1, int VAR_2)
{
 struct snd_ice1712 *VAR_3 = VAR_0->rmidi->private_data;

 FUNC_1(&VAR_3->reg_lock);
 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(&VAR_3->reg_lock);
}
