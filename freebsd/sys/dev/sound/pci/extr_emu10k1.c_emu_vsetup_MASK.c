
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc_pchinfo {int fmt; scalar_t__ spd; struct emu_voice* master; } ;
struct emu_voice {int b16; int stereo; scalar_t__ speed; TYPE_1__* slave; } ;
struct TYPE_2__ {int b16; int stereo; scalar_t__ speed; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct sc_pchinfo *VAR_1)
{
 struct emu_voice *VAR_2 = VAR_1->master;

 if (VAR_1->fmt) {
  VAR_2->b16 = (VAR_1->fmt & VAR_0) ? 1 : 0;
  VAR_2->stereo = (FUNC_0(VAR_1->fmt) > 1) ? 1 : 0;
  if (VAR_2->slave != ((void*)0)) {
   VAR_2->slave->b16 = VAR_2->b16;
   VAR_2->slave->stereo = VAR_2->stereo;
  }
 }
 if (VAR_1->spd) {
  VAR_2->speed = VAR_1->spd;
  if (VAR_2->slave != ((void*)0))
   VAR_2->slave->speed = VAR_2->speed;
 }
}
