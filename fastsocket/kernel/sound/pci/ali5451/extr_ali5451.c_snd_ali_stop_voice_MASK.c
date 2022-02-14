
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stop; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;
struct snd_ali {TYPE_2__ chregs; } ;


 int FUNC_0 (struct snd_ali*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct snd_ali *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = 1 << (VAR_1 & 0x1f);

 FUNC_2("stop_voice: channel=%d\n",VAR_1);
 FUNC_1(VAR_2, FUNC_0(VAR_0, VAR_0->chregs.regs.stop));
}
