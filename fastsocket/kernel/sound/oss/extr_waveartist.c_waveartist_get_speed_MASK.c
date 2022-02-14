
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; } ;
typedef TYPE_1__ wavnc_port_info ;



__attribute__((used)) static unsigned int
FUNC_0(wavnc_port_info *VAR_0)
{
 unsigned int VAR_1;




 if (VAR_0->speed == 8000)
  VAR_1 = 0x2E71;
 else if (VAR_0->speed == 11025)
  VAR_1 = 0x4000;
 else if (VAR_0->speed == 22050)
  VAR_1 = 0x8000;
 else if (VAR_0->speed == 44100)
  VAR_1 = 0x0;
 else {



  VAR_1 = VAR_0->speed << 16;

  VAR_1 = (VAR_1 / 44100) & 65535;
 }

 return VAR_1;
}
