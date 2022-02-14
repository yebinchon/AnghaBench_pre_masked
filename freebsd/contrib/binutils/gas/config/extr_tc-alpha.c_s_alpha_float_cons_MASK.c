
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_3)
{
  int VAR_4;

  switch (VAR_3)
    {
    default:
    case 'f':
    case 'F':
      VAR_4 = 2;
      break;

    case 'd':
    case 'D':
    case 'G':
      VAR_4 = 3;
      break;

    case 'x':
    case 'X':
    case 'p':
    case 'P':
      VAR_4 = 4;
      break;
    }

  if (VAR_0 && VAR_1 < VAR_4)
    FUNC_0 (VAR_4, (char *) ((void*)0), VAR_2, 0);
  if (VAR_1 > VAR_4)
    VAR_1 = VAR_4;
  VAR_2 = ((void*)0);

  FUNC_1 (VAR_3);
}
