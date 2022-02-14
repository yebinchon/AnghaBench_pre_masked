
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

bfd_boolean
FUNC_0 (const char * VAR_4, int VAR_5)
{



  if (!VAR_4 || VAR_4[0] != '$')
    return VAR_3;
  if (VAR_4[1] == 'a' || VAR_4[1] == 't' || VAR_4[1] == 'd')
    VAR_5 &= VAR_0;
  else if (VAR_4[1] == 'm' || VAR_4[1] == 'f' || VAR_4[1] == 'p')
    VAR_5 &= VAR_2;
  else if (VAR_4[1] >= 'a' && VAR_4[1] <= 'z')
    VAR_5 &= VAR_1;
  else
    return VAR_3;

  return (VAR_5 != 0 && (VAR_4[2] == 0 || VAR_4[2] == '.'));
}
