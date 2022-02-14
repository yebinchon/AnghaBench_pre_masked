
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_matrix {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcmchan_matrix* VAR_2 ;

struct pcmchan_matrix *
FUNC_0(int VAR_3)
{

 if (VAR_3 < VAR_0 || VAR_3 > VAR_1)
  return (((void*)0));

 return (&VAR_2[VAR_3]);
}
