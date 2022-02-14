
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ audio_format; } ;
typedef TYPE_1__ wavnc_port_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_0(wavnc_port_info *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->audio_format == VAR_0)
  VAR_3 = 1;
 else if (VAR_2->audio_format == VAR_1)
  VAR_3 = 0;
 else
  VAR_3 = 2;

 return VAR_3;
}
