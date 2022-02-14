
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LITTLENUM_TYPE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char,int *) ;
 unsigned int FUNC_2 (char) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;

char *
FUNC_5 (int VAR_2,
  char *VAR_3,
  int *VAR_4)
{
  LITTLENUM_TYPE VAR_5[VAR_0];
  char VAR_6;
  unsigned int VAR_7;
  LITTLENUM_TYPE *VAR_8;

  switch (VAR_2)
    {
    case 'F':
    case 'f':
      VAR_6 = 'f';
      break;

    case 'D':
    case 'd':
      VAR_6 = 'd';
      break;

    case 'g':
      VAR_6 = 'g';
      break;

    case 'h':
      VAR_6 = 'h';
      break;

    default:
      VAR_6 = 0;
      break;
    };

  if (VAR_6)
    {
      LITTLENUM_TYPE *VAR_9;

      VAR_1 = FUNC_1 (VAR_1,
         VAR_6,
         VAR_5);




      VAR_7 = FUNC_2 (VAR_6);
      FUNC_3 (VAR_7 <= VAR_0 * sizeof (LITTLENUM_TYPE));
      VAR_9 = VAR_5 + (VAR_7 / sizeof (LITTLENUM_TYPE));
      for (VAR_8 = VAR_5; VAR_8 < VAR_9; VAR_8++)
 {
   FUNC_4 (VAR_3, *VAR_8, sizeof (LITTLENUM_TYPE));
   VAR_3 += sizeof (LITTLENUM_TYPE);
 };
    }
  else
    VAR_7 = 0;

  *VAR_4 = VAR_7;
  return VAR_6 ? ((void*)0) : FUNC_0("Bad call to md_atof()");
}
