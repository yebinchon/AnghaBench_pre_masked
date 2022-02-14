
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static long
FUNC_0 (char **VAR_1, int VAR_2, int *VAR_3)
{
  char *VAR_4 = *VAR_1;
  int VAR_5 = 1;
  long VAR_6 = 0;
  int VAR_7 = 10;
  char VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10;
  long VAR_11;

  if (*VAR_4 == '-')
    {
      VAR_5 = -1;
      VAR_4++;
    }



  if (*VAR_4 == '0')
    {
      VAR_7 = 8;
      VAR_4++;
    }

  VAR_11 = VAR_0 / VAR_7;

  while ((VAR_10 = *VAR_4++) >= '0' && VAR_10 < ('0' + VAR_7))
    {
      if (VAR_6 <= VAR_11)
 {
   VAR_6 *= VAR_7;
   VAR_6 += VAR_10 - '0';
 }
      else
 VAR_8 = 1;



      if (VAR_7 == 8)
 {
   if (VAR_9 == 0)
     {
       if (VAR_10 == '0')

  ;
       else if (VAR_10 == '1')
  VAR_9 = 1;
       else if (VAR_10 == '2' || VAR_10 == '3')
  VAR_9 = 2;
       else
  VAR_9 = 3;
     }
   else
     VAR_9 += 3;
 }
    }
  if (VAR_2)
    {
      if (VAR_10 && VAR_10 != VAR_2)
 {
   if (VAR_3 != ((void*)0))
     *VAR_3 = -1;
   return 0;
 }
    }
  else
    --VAR_4;

  *VAR_1 = VAR_4;
  if (VAR_8)
    {
      if (VAR_9 == 0)
 {


   if (VAR_3 != ((void*)0))
     *VAR_3 = -1;
   return 0;
 }



      if (VAR_5 == -1)
 ++VAR_9;
      if (VAR_3)
 *VAR_3 = VAR_9;
    }
  else
    {
      if (VAR_3)
 *VAR_3 = 0;
      return VAR_6 * VAR_5;
    }

  return 0;
}
