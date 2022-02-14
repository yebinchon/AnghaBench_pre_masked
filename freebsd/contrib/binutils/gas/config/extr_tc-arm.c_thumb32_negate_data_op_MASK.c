
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int offsetT ;


 unsigned int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;




 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_1 (offsetT *VAR_3, unsigned int VAR_4)
{
  int VAR_5, VAR_6;
  int VAR_7;
  unsigned int VAR_8, VAR_9;

  VAR_8 = FUNC_0 (-VAR_4);
  VAR_9 = FUNC_0 (~VAR_4);

  VAR_7 = (*VAR_3 >> 8) & 0xf;
  VAR_5 = (*VAR_3 >> VAR_1) & 0xf;
  switch (VAR_5)
    {

    case 128:
      VAR_6 = 134;
      VAR_4 = VAR_8;
      break;

    case 134:
      VAR_6 = 128;
      VAR_4 = VAR_8;
      break;


    case 130:
      VAR_6 = 131;
      VAR_4 = VAR_9;
      break;

    case 131:
      VAR_6 = 130;
      VAR_4 = VAR_9;
      break;


    case 133:
      VAR_6 = 132;
      if (VAR_7 == 15)
 VAR_4 = VAR_0;
      else
 VAR_4 = VAR_9;
      break;

    case 132:
      VAR_6 = 133;
      VAR_4 = VAR_9;
      break;


    case 135:
      VAR_6 = 129;
      VAR_4 = VAR_9;
      break;

    case 129:
      VAR_6 = 135;
      VAR_4 = VAR_9;
      break;


    default:
      return VAR_0;
    }

  if (VAR_4 == (unsigned int)VAR_0)
    return VAR_0;

  *VAR_3 &= VAR_2;
  *VAR_3 |= VAR_6 << VAR_1;
  return VAR_4;
}
