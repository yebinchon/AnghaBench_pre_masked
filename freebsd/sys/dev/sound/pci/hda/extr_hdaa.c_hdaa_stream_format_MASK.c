
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct hdaa_chan {int fmt; int bit16; int bit32; scalar_t__ spd; } ;
struct TYPE_2__ {scalar_t__ rate; int base; int mul; int div; scalar_t__ valid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static uint16_t
FUNC_1(struct hdaa_chan *VAR_4)
{
 int VAR_5;
 uint16_t VAR_6;

 VAR_6 = 0;
 if (VAR_4->fmt & VAR_0)
  VAR_6 |= VAR_4->bit16 << 4;
 else if (VAR_4->fmt & VAR_1)
  VAR_6 |= VAR_4->bit32 << 4;
 else
  VAR_6 |= 1 << 4;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_3[VAR_5].valid && VAR_4->spd == VAR_3[VAR_5].rate) {
   VAR_6 |= VAR_3[VAR_5].base;
   VAR_6 |= VAR_3[VAR_5].mul;
   VAR_6 |= VAR_3[VAR_5].div;
   break;
  }
 }
 VAR_6 |= (FUNC_0(VAR_4->fmt) - 1);

 return (VAR_6);
}
