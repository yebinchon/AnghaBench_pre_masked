
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int BITMAP_WORD ;


 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static unsigned long
FUNC_0 (BITMAP_WORD VAR_2)
{
  unsigned long VAR_3 = 0;
  unsigned VAR_4;


  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4+= 8)
    VAR_3 += VAR_1[(VAR_2 >> VAR_4) & 0xff];
  return VAR_3;
}
