
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx {scalar_t__ port; TYPE_1__* devs; } ;
struct TYPE_2__ {unsigned int reg_offset; int shadow_shift; int direction; scalar_t__ port; } ;



__attribute__((used)) static void FUNC_0(struct via82xx *VAR_0, int VAR_1, unsigned int VAR_2,
   int VAR_3, int VAR_4)
{
 VAR_0->devs[VAR_1].reg_offset = VAR_2;
 VAR_0->devs[VAR_1].shadow_shift = VAR_3 * 4;
 VAR_0->devs[VAR_1].direction = VAR_4;
 VAR_0->devs[VAR_1].port = VAR_0->port + VAR_2;
}
