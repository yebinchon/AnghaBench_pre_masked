
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_4__ {scalar_t__ portc; } ;


 TYPE_2__** VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, int VAR_2)
{
 wavnc_port_info *VAR_3 = (wavnc_port_info *) VAR_0[VAR_1]->portc;

 if (VAR_2 <= 0)
  return VAR_3->speed;

 if (VAR_2 < 5000)
  VAR_2 = 5000;
 if (VAR_2 > 44100)
  VAR_2 = 44100;

 VAR_3->speed = VAR_2;
 return VAR_3->speed;

}
