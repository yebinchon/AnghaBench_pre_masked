
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t snd_pcm_format_t ;
struct TYPE_2__ {int width; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_0(snd_pcm_format_t VAR_3)
{
 int VAR_4;
 if (VAR_3 < 0 || VAR_3 > VAR_1)
  return -VAR_0;
 if ((VAR_4 = VAR_2[VAR_3].width) == 0)
  return -VAR_0;
 return VAR_4;
}
