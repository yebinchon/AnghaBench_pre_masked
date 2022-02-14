
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int,int ) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;

int
FUNC_4 (CORE_ADDR VAR_0, char **VAR_1, int VAR_2, int *VAR_3)
{
  int VAR_4, VAR_5, VAR_6, VAR_7;
  char VAR_8[4];
  int VAR_9 = 0;
  char *VAR_10;
  int VAR_11;
  char *VAR_12;
  unsigned int VAR_13 = 0;


  VAR_11 = 4;
  VAR_10 = FUNC_2 (VAR_11);
  VAR_12 = VAR_10;

  VAR_5 = VAR_2;

  while (VAR_2 > 0)
    {
      VAR_4 = FUNC_0 (VAR_2, 4 - (VAR_0 & 3));
      VAR_6 = VAR_0 & 3;

      VAR_9 = FUNC_1 (VAR_0 & ~3, VAR_8, 4, 0);
      if (VAR_9 != 0)
 {



   VAR_4 = 1;
   VAR_6 = 0;
   VAR_9 = FUNC_1 (VAR_0, VAR_8, 1, 0);
   if (VAR_9 != 0)
     goto done;
 }

      if (VAR_12 - VAR_10 + VAR_4 > VAR_11)
 {
   unsigned int VAR_14;
   VAR_14 = VAR_12 - VAR_10;
   VAR_11 *= 2;
   VAR_10 = FUNC_3 (VAR_10, VAR_11);
   VAR_12 = VAR_10 + VAR_14;
 }

      for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
   *VAR_12++ = VAR_8[VAR_7 + VAR_6];
   if (VAR_8[VAR_7 + VAR_6] == '\000')
     {
       VAR_13 += VAR_7 + 1;
       goto done;
     }
 }

      VAR_0 += VAR_4;
      VAR_2 -= VAR_4;
      VAR_13 += VAR_4;
    }
done:
  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_9;
  if (VAR_1 != ((void*)0))
    *VAR_1 = VAR_10;
  return VAR_13;
}
