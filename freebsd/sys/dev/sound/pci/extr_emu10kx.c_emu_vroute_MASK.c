
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emu_voice {scalar_t__ ismaster; struct emu_voice* slave; scalar_t__ stereo; int * amounts; int * routing; } ;
struct emu_sc_info {int dummy; } ;
struct emu_route {int * amounts_right; int * routing_right; int * amounts_left; int * routing_left; } ;



void
FUNC_0(struct emu_sc_info *VAR_0, struct emu_route *VAR_1, struct emu_voice *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_2->routing[VAR_3] = VAR_1->routing_left[VAR_3];
  VAR_2->amounts[VAR_3] = VAR_1->amounts_left[VAR_3];
 }
 if ((VAR_2->stereo) && (VAR_2->ismaster == 0))
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_2->routing[VAR_3] = VAR_1->routing_right[VAR_3];
   VAR_2->amounts[VAR_3] = VAR_1->amounts_right[VAR_3];
  }

 if ((VAR_2->stereo) && (VAR_2->slave != ((void*)0)))
  FUNC_0(VAR_0, VAR_1, VAR_2->slave);
}
