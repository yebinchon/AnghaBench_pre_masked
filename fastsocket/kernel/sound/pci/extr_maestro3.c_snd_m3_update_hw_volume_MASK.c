
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_m3 {int ac97_lock; TYPE_3__* master_volume; int card; scalar_t__ iobase; TYPE_2__* ac97; TYPE_1__* master_switch; scalar_t__ in_suspend; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int* regs; } ;
struct TYPE_4__ {int id; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_8)
{
 struct snd_m3 *VAR_9 = (struct snd_m3 *) VAR_8;
 int VAR_10, VAR_11;
 unsigned long VAR_12;




 VAR_10 = FUNC_0(VAR_9->iobase + VAR_6) & 0xee;


 FUNC_1(0x88, VAR_9->iobase + VAR_6);
 FUNC_1(0x88, VAR_9->iobase + VAR_4);
 FUNC_1(0x88, VAR_9->iobase + VAR_5);
 FUNC_1(0x88, VAR_9->iobase + VAR_3);



 if (VAR_9->in_suspend)
  return;

 if (!VAR_9->master_switch || !VAR_9->master_volume)
  return;


 FUNC_4(&VAR_9->ac97_lock, VAR_12);

 VAR_11 = VAR_9->ac97->regs[VAR_0];
 switch (VAR_10) {
 case 0x88:

  VAR_11 ^= 0x8000;
  VAR_9->ac97->regs[VAR_0] = VAR_11;
  FUNC_2(VAR_11, VAR_9->iobase + VAR_2);
  FUNC_1(VAR_0, VAR_9->iobase + VAR_1);
  FUNC_3(VAR_9->card, VAR_7,
          &VAR_9->master_switch->id);
  break;
 case 0xaa:

  if ((VAR_11 & 0x7f) > 0)
   VAR_11--;
  if ((VAR_11 & 0x7f00) > 0)
   VAR_11 -= 0x0100;
  VAR_9->ac97->regs[VAR_0] = VAR_11;
  FUNC_2(VAR_11, VAR_9->iobase + VAR_2);
  FUNC_1(VAR_0, VAR_9->iobase + VAR_1);
  FUNC_3(VAR_9->card, VAR_7,
          &VAR_9->master_volume->id);
  break;
 case 0x66:

  if ((VAR_11 & 0x7f) < 0x1f)
   VAR_11++;
  if ((VAR_11 & 0x7f00) < 0x1f00)
   VAR_11 += 0x0100;
  VAR_9->ac97->regs[VAR_0] = VAR_11;
  FUNC_2(VAR_11, VAR_9->iobase + VAR_2);
  FUNC_1(VAR_0, VAR_9->iobase + VAR_1);
  FUNC_3(VAR_9->card, VAR_7,
          &VAR_9->master_volume->id);
  break;
 }
 FUNC_5(&VAR_9->ac97_lock, VAR_12);
}
