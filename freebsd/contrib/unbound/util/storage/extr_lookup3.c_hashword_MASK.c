
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;

uint32_t FUNC_2(
const uint32_t *VAR_1,
size_t VAR_2,
uint32_t VAR_3)
{
  uint32_t VAR_4,VAR_5,VAR_6;


  VAR_4 = VAR_5 = VAR_6 = VAR_0 + (((uint32_t)VAR_2)<<2) + VAR_3;


  while (VAR_2 > 3)
  {
    VAR_4 += VAR_1[0];
    VAR_5 += VAR_1[1];
    VAR_6 += VAR_1[2];
    FUNC_1(VAR_4,VAR_5,VAR_6);
    VAR_2 -= 3;
    VAR_1 += 3;
  }


  switch(VAR_2)
  {
  case 3 : VAR_6+=VAR_1[2];

  case 2 : VAR_5+=VAR_1[1];

  case 1 : VAR_4+=VAR_1[0];
    FUNC_0(VAR_4,VAR_5,VAR_6);
  case 0:
    break;
  }

  return VAR_6;
}
