
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;






 unsigned long VAR_2 ;




 unsigned long FUNC_0 (unsigned long) ;

__attribute__((used)) static int
FUNC_1 (unsigned long * VAR_3,
  unsigned long VAR_4)
{
  int VAR_5, VAR_6;
  unsigned long VAR_7, VAR_8;

  VAR_7 = FUNC_0 (-VAR_4);
  VAR_8 = FUNC_0 (~VAR_4);

  VAR_5 = (*VAR_3 >> VAR_0) & 0xf;
  switch (VAR_5)
    {

    case 128:
      VAR_6 = 136;
      VAR_4 = VAR_7;
      break;

    case 136:
      VAR_6 = 128;
      VAR_4 = VAR_7;
      break;

    case 132:
      VAR_6 = 133;
      VAR_4 = VAR_7;
      break;

    case 133:
      VAR_6 = 132;
      VAR_4 = VAR_7;
      break;


    case 131:
      VAR_6 = 130;
      VAR_4 = VAR_8;
      break;

    case 130:
      VAR_6 = 131;
      VAR_4 = VAR_8;
      break;

    case 135:
      VAR_6 = 134;
      VAR_4 = VAR_8;
      break;

    case 134:
      VAR_6 = 135;
      VAR_4 = VAR_8;
      break;

    case 137:
      VAR_6 = 129;
      VAR_4 = VAR_8;
      break;

    case 129:
      VAR_6 = 137;
      VAR_4 = VAR_8;
      break;


    default:
      return VAR_1;
    }

  if (VAR_4 == (unsigned) VAR_1)
    return VAR_1;

  *VAR_3 &= VAR_2;
  *VAR_3 |= VAR_6 << VAR_0;
  return VAR_4;
}
