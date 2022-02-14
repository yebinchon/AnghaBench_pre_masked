
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char cs8403_stream_bits; TYPE_1__* stream_ctl; } ;
struct snd_ice1712 {TYPE_2__ spdif; int card; int reg_lock; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct snd_ice1712*,unsigned char) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 unsigned char VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1->reg_lock, VAR_3);
 VAR_4 = VAR_1->spdif.cs8403_stream_bits;
 if (VAR_4 & 0x10)
  VAR_4 &= (VAR_4 & 0x01) ? ~0x06 : ~0x60;
 switch (VAR_2) {
 case 32000: VAR_4 |= (VAR_4 & 0x01) ? 0x02 : 0x00; break;
 case 44100: VAR_4 |= (VAR_4 & 0x01) ? 0x06 : 0x40; break;
 case 48000: VAR_4 |= (VAR_4 & 0x01) ? 0x04 : 0x20; break;
 default: VAR_4 |= (VAR_4 & 0x01) ? 0x06 : 0x40; break;
 }
 VAR_5 = VAR_1->spdif.cs8403_stream_bits != VAR_4;
 VAR_1->spdif.cs8403_stream_bits = VAR_4;
 FUNC_3(&VAR_1->reg_lock, VAR_3);
 if (VAR_5)
  FUNC_0(VAR_1->card, VAR_0, &VAR_1->spdif.stream_ctl->id);
 FUNC_1(VAR_1, VAR_4);
}
