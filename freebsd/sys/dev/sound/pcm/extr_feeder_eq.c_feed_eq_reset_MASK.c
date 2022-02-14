
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__* o2; scalar_t__* o1; scalar_t__* i2; scalar_t__* i1; } ;
struct TYPE_3__ {scalar_t__* o2; scalar_t__* o1; scalar_t__* i2; scalar_t__* i1; } ;
struct feed_eq_info {size_t channels; TYPE_2__ bass; TYPE_1__ treble; } ;



__attribute__((used)) static void
FUNC_0(struct feed_eq_info *VAR_0)
{
 uint32_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->channels; VAR_1++) {
  VAR_0->treble.i1[VAR_1] = 0;
  VAR_0->treble.i2[VAR_1] = 0;
  VAR_0->treble.o1[VAR_1] = 0;
  VAR_0->treble.o2[VAR_1] = 0;
  VAR_0->bass.i1[VAR_1] = 0;
  VAR_0->bass.i2[VAR_1] = 0;
  VAR_0->bass.o1[VAR_1] = 0;
  VAR_0->bass.o2[VAR_1] = 0;
 }
}
