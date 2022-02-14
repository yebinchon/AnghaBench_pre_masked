
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emu_voice {int b16; int stereo; int speed; TYPE_1__* slave; } ;
struct TYPE_2__ {int b16; int stereo; int speed; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(struct emu_voice *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_2) {
  VAR_1->b16 = (VAR_2 & VAR_0) ? 1 : 0;
  VAR_1->stereo = (FUNC_0(VAR_2) > 1) ? 1 : 0;
  if (VAR_1->slave != ((void*)0)) {
   VAR_1->slave->b16 = VAR_1->b16;
   VAR_1->slave->stereo = VAR_1->stereo;
  }
 }
 if (VAR_3) {
  VAR_1->speed = VAR_3;
  if (VAR_1->slave != ((void*)0))
   VAR_1->slave->speed = VAR_1->speed;
 }
}
