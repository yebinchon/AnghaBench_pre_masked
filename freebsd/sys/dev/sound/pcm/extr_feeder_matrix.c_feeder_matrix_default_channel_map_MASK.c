
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pcmchan_matrix {size_t channels; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t* VAR_2 ;
 struct pcmchan_matrix* VAR_3 ;

struct pcmchan_matrix *
FUNC_0(uint32_t VAR_4)
{

 if (VAR_4 < VAR_3[VAR_0].channels ||
     VAR_4 > VAR_3[VAR_1].channels)
  return (((void*)0));

 return (&VAR_3[VAR_2[VAR_4]]);
}
