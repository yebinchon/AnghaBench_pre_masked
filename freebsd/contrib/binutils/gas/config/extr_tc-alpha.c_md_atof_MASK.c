
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LITTLENUM_TYPE ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,int,int *) ;
 char* VAR_1 ;
 int FUNC_2 (char*,long,int) ;
 char* FUNC_3 (int,char*,int*) ;

char *
FUNC_4 (int VAR_2, char *VAR_3, int *VAR_4)
{
  int VAR_5;
  LITTLENUM_TYPE VAR_6[VAR_0];
  LITTLENUM_TYPE *VAR_7;
  char *VAR_8;

  switch (VAR_2)
    {

    case 'G':

      VAR_2 = 'g';
    case 'F':
    case 'D':
      return FUNC_3 (VAR_2, VAR_3, VAR_4);


    case 'f':
      VAR_5 = 2;
      break;

    case 'd':
      VAR_5 = 4;
      break;

    case 'x':
    case 'X':
      VAR_5 = 6;
      break;

    case 'p':
    case 'P':
      VAR_5 = 6;
      break;

    default:
      *VAR_4 = 0;
      return FUNC_0("Bad call to MD_ATOF()");
    }
  VAR_8 = FUNC_1 (VAR_1, VAR_2, VAR_6);
  if (VAR_8)
    VAR_1 = VAR_8;
  *VAR_4 = VAR_5 * sizeof (LITTLENUM_TYPE);

  for (VAR_7 = VAR_6 + VAR_5 - 1; VAR_5--;)
    {
      FUNC_2 (VAR_3, (long) (*VAR_7--), sizeof (LITTLENUM_TYPE));
      VAR_3 += sizeof (LITTLENUM_TYPE);
    }

  return 0;
}
