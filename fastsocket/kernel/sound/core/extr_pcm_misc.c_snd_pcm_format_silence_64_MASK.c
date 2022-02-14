
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t snd_pcm_format_t ;
struct TYPE_2__ {unsigned char const* silence; int phys; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

const unsigned char *FUNC_0(snd_pcm_format_t VAR_2)
{
 if (VAR_2 < 0 || VAR_2 > VAR_0)
  return ((void*)0);
 if (! VAR_1[VAR_2].phys)
  return ((void*)0);
 return VAR_1[VAR_2].silence;
}
