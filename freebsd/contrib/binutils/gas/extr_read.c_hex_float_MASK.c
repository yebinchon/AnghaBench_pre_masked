
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char) ;
 char* VAR_0 ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_6 (int VAR_2, char *VAR_3)
{
  int VAR_4;
  int VAR_5;

  switch (VAR_2)
    {
    case 'f':
    case 'F':
    case 's':
    case 'S':
      VAR_4 = 4;
      break;

    case 'd':
    case 'D':
    case 'r':
    case 'R':
      VAR_4 = 8;
      break;

    case 'x':
    case 'X':
      VAR_4 = 12;
      break;

    case 'p':
    case 'P':
      VAR_4 = 12;
      break;

    default:
      FUNC_1 (FUNC_0("unknown floating type type '%c'"), VAR_2);
      return -1;
    }




  VAR_5 = 0;
  while (FUNC_3 (*VAR_0) || *VAR_0 == '_')
    {
      int VAR_6;



      if (*VAR_0 == '_')
 {
   ++VAR_0;
   continue;
 }

      if (VAR_5 >= VAR_4)
 {
   FUNC_2 (FUNC_0("floating point constant too large"));
   return -1;
 }
      VAR_6 = FUNC_4 (*VAR_0) << 4;
      ++VAR_0;
      while (*VAR_0 == '_')
 ++VAR_0;
      if (FUNC_3 (*VAR_0))
 {
   VAR_6 += FUNC_4 (*VAR_0);
   ++VAR_0;
 }
      if (VAR_1)
 VAR_3[VAR_5] = VAR_6;
      else
 VAR_3[VAR_4 - VAR_5 - 1] = VAR_6;
      ++VAR_5;
    }

  if (VAR_5 < VAR_4)
    {
      if (VAR_1)
 FUNC_5 (VAR_3 + VAR_5, 0, VAR_4 - VAR_5);
      else
 FUNC_5 (VAR_3, 0, VAR_4 - VAR_5);
    }

  return VAR_4;
}
