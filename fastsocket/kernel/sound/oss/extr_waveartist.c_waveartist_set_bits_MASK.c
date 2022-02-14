
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int audio_format; } ;
typedef TYPE_1__ wavnc_port_info ;
struct TYPE_4__ {scalar_t__ portc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__** VAR_3 ;

__attribute__((used)) static unsigned int
FUNC_0(int VAR_4, unsigned int VAR_5)
{
 wavnc_port_info *VAR_6 = (wavnc_port_info *) VAR_3[VAR_4]->portc;

 if (VAR_5 == 0)
  return VAR_6->audio_format;

 if ((VAR_5 != VAR_2) && (VAR_5 != VAR_0) && (VAR_5 != VAR_1))
  VAR_5 = VAR_2;

 VAR_6->audio_format = VAR_5;

 return VAR_5;
}
