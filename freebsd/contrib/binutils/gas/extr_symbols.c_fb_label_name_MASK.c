
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (long) ;
 int FUNC_1 (int) ;

char *
FUNC_2 (long VAR_2,
        long VAR_3 )
{
  long VAR_4;

  static char VAR_5[24];
  register char *VAR_6;
  register char *VAR_7;
  char VAR_8[20];

  FUNC_1 (VAR_2 >= 0);



  FUNC_1 ((unsigned long) VAR_3 <= 1);

  VAR_6 = VAR_5;



  *VAR_6++ = 'L';



  VAR_7 = VAR_8;
  for (*VAR_7++ = 0, VAR_4 = VAR_2; VAR_4; ++VAR_7)
    {
      *VAR_7 = VAR_4 % 10 + '0';
      VAR_4 /= 10;
    }
  while ((*VAR_6 = *--VAR_7) != '\0')
    ++VAR_6;

  *VAR_6++ = VAR_0;


  VAR_7 = VAR_8;
  for (*VAR_7++ = 0, VAR_4 = FUNC_0 (VAR_2) + VAR_3; VAR_4; ++VAR_7)
    {
      *VAR_7 = VAR_4 % 10 + '0';
      VAR_4 /= 10;
    }
  while ((*VAR_6++ = *--VAR_7) != '\0')
 ;;


  return (VAR_5);
}
