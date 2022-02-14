
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, int VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0 < 4000)
  VAR_0 = 4000;
 if (VAR_0 > 48000)
  VAR_0 = 48000;

 if (VAR_1) {
  if (VAR_0 == 44100)
   VAR_2 = 0x116a;
  else if (VAR_0 == 8000)
   VAR_2 = 0x6000;
  else if (VAR_0 == 48000)
   VAR_2 = 0x1000;
  else
   VAR_2 = ((48000 << 12) / VAR_0) & 0x0000ffff;
 } else {
  if (VAR_0 == 44100)
   VAR_2 = 0xeb3;
  else if (VAR_0 == 8000)
   VAR_2 = 0x2ab;
  else if (VAR_0 == 48000)
   VAR_2 = 0x1000;
  else
   VAR_2 = (((VAR_0 << 12) + VAR_0) / 48000) & 0x0000ffff;
 }

 return VAR_2;
}
