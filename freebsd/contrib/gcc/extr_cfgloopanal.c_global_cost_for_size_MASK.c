
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

unsigned
FUNC_0 (unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
  unsigned VAR_8 = VAR_6 + VAR_5;
  unsigned VAR_9 = 0;

  if (VAR_8 + VAR_2 <= VAR_0)
    VAR_9 += VAR_3 * VAR_5;
  else if (VAR_8 <= VAR_0)
    VAR_9 += VAR_1 * VAR_5;
  else
    {
      VAR_9 += VAR_1 * VAR_5;
      VAR_9 += VAR_4 * VAR_7 * (VAR_8 - VAR_0) / VAR_8;
    }

  return VAR_9;
}
