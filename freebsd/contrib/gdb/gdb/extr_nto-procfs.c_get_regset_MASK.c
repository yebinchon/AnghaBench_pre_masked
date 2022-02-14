
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;




 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int,char**,int,int*) ;

__attribute__((used)) static int
FUNC_1 (int VAR_8, char *VAR_9, int VAR_10, int *VAR_11)
{
  int VAR_12, VAR_13;
  switch (VAR_8)
    {
    case 129:
      VAR_12 = VAR_2;
      VAR_13 = VAR_5;
      break;

    case 130:
      VAR_12 = VAR_1;
      VAR_13 = VAR_4;
      break;

    case 131:
      VAR_12 = VAR_0;
      VAR_13 = VAR_3;
      break;

    case 128:
    default:
      return -1;
    }
  if (FUNC_0 (VAR_7, VAR_12, &VAR_9, VAR_10, VAR_11) != VAR_6)
    return -1;

  return VAR_13;
}
