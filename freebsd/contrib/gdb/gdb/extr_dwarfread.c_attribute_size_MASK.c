
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;






 unsigned short FUNC_0 (unsigned int) ;


 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,unsigned short) ;

__attribute__((used)) static int
FUNC_3 (unsigned int VAR_3)
{
  int VAR_4;
  unsigned short VAR_5;

  VAR_5 = FUNC_0 (VAR_3);
  switch (VAR_5)
    {
    case 128:
      VAR_4 = 0;
      break;
    case 132:
    case 134:
      VAR_4 = 2;
      break;
    case 131:
    case 133:
    case 129:
      VAR_4 = 4;
      break;
    case 130:
      VAR_4 = 8;
      break;
    case 135:
      VAR_4 = FUNC_1 (VAR_2);
      break;
    default:
      FUNC_2 (VAR_0, VAR_1, VAR_5);
      VAR_4 = -1;
      break;
    }
  return (VAR_4);
}
