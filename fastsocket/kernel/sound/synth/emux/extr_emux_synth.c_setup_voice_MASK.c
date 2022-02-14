
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soundfont_voice_parm {int modatkhld; int moddelay; int pefe; int cutoff; int volatkhld; int voldelay; } ;
struct TYPE_4__ {struct soundfont_voice_parm parm; } ;
struct snd_emux_voice {int apan; int avol; int apitch; int ftarget; int ptarget; int vtarget; TYPE_2__ reg; TYPE_1__* zone; } ;
struct TYPE_3__ {TYPE_2__ v; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_emux_voice*) ;
 int FUNC_4 (struct snd_emux_voice*) ;
 int FUNC_5 (struct snd_emux_voice*) ;
 int FUNC_6 (struct snd_emux_voice*) ;
 int* VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct snd_emux_voice *VAR_1)
{
 struct soundfont_voice_parm *VAR_2;
 int VAR_3;


 VAR_1->reg = VAR_1->zone->v;






 VAR_1->apan = -1;
 VAR_1->avol = -1;
 VAR_1->apitch = -1;

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 VAR_2 = &VAR_1->reg.parm;


 if (FUNC_2(VAR_2->modatkhld) >= 0x80 && VAR_2->moddelay >= 0x8000) {
  VAR_2->moddelay = 0xbfff;
  VAR_3 = (FUNC_0(VAR_2->pefe) << 4) + VAR_1->apitch;
  if (VAR_3 > 0xffff)
   VAR_3 = 0xffff;

  VAR_1->ftarget = VAR_2->cutoff + FUNC_2(VAR_2->pefe);
  FUNC_1(VAR_1->ftarget, 0, 255);
  VAR_1->ftarget <<= 8;
 } else {
  VAR_1->ftarget = VAR_2->cutoff;
  VAR_1->ftarget <<= 8;
  VAR_3 = VAR_1->apitch;
 }


 if (VAR_3 != 0xffff) {
  VAR_1->ptarget = 1 << (VAR_3 >> 12);
  if (VAR_3 & 0x800) VAR_1->ptarget += (VAR_1->ptarget*0x102e)/0x2710;
  if (VAR_3 & 0x400) VAR_1->ptarget += (VAR_1->ptarget*0x764)/0x2710;
  if (VAR_3 & 0x200) VAR_1->ptarget += (VAR_1->ptarget*0x389)/0x2710;
  VAR_1->ptarget += (VAR_1->ptarget >> 1);
  if (VAR_1->ptarget > 0xffff) VAR_1->ptarget = 0xffff;
 } else
  VAR_1->ptarget = 0xffff;

 if (FUNC_2(VAR_2->modatkhld) >= 0x80) {
  VAR_2->modatkhld &= ~0xff;
  VAR_2->modatkhld |= 0x7f;
 }


 VAR_1->vtarget = 0;







 if (FUNC_2(VAR_2->volatkhld) >= 0x80) {
  VAR_2->volatkhld &= ~0xff;
  VAR_2->volatkhld |= 0x7f;
 }
}
