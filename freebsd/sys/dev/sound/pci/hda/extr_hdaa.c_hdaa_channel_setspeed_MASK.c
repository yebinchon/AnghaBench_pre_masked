
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdaa_chan {int* pcmrates; int spd; } ;
typedef int kobj_t ;



__attribute__((used)) static uint32_t
FUNC_0(kobj_t VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct hdaa_chan *VAR_3 = VAR_1;
 uint32_t VAR_4 = 0, VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_3->pcmrates[VAR_6] != 0; VAR_6++) {
  VAR_4 = VAR_3->pcmrates[VAR_6];
  if (VAR_2 != 0 && VAR_4 / VAR_2 * VAR_2 == VAR_4) {
   VAR_3->spd = VAR_4;
   return (VAR_4);
  }
 }

 for (VAR_6 = 0; VAR_3->pcmrates[VAR_6] != 0; VAR_6++) {
  VAR_4 = VAR_3->pcmrates[VAR_6];
  VAR_5 = VAR_4 + ((VAR_3->pcmrates[VAR_6 + 1] != 0) ?
      ((VAR_3->pcmrates[VAR_6 + 1] - VAR_4) >> 1) : 0);
  if (VAR_2 < VAR_5)
   break;
 }
 VAR_3->spd = VAR_4;
 return (VAR_4);
}
