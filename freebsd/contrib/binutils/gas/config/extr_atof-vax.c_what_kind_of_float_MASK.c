
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0 (int VAR_4,
      int *VAR_5,
      long *VAR_6)
{
  int VAR_7;

  VAR_7 = 0;
  switch (VAR_4)
    {
    case 'f':
      *VAR_5 = VAR_1;
      *VAR_6 = 8;
      break;

    case 'd':
      *VAR_5 = VAR_0;
      *VAR_6 = 8;
      break;

    case 'g':
      *VAR_5 = VAR_2;
      *VAR_6 = 11;
      break;

    case 'h':
      *VAR_5 = VAR_3;
      *VAR_6 = 15;
      break;

    default:
      VAR_7 = 69;
      break;
    }
  return VAR_7;
}
