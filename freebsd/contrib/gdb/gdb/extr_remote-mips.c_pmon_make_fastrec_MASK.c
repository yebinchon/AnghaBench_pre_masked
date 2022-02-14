
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,char*,int,unsigned int*) ;
 int FUNC_1 (int,char**,unsigned int*,unsigned int*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (char **VAR_2, unsigned char *VAR_3, int *VAR_4,
     int VAR_5, int *VAR_6, unsigned int *VAR_7,
     unsigned int *VAR_8)
{
  int VAR_9 = 0;
  char *VAR_10 = *VAR_2;





  while ((*VAR_6 < (VAR_1 - VAR_0)) && ((VAR_5 - *VAR_4) > 0))
    {

      if ((VAR_5 - *VAR_4) < 3)
 {
   if (*VAR_8 != 0)
     *VAR_6 = FUNC_1 (*VAR_6, &VAR_10, VAR_8, VAR_7);
   FUNC_2 (VAR_10, "/B");
   VAR_9 = FUNC_0 (VAR_3[*VAR_4], &VAR_10[2], 12, VAR_7);
   VAR_10 += (2 + VAR_9);
   *VAR_6 += (2 + VAR_9);
   (*VAR_4)++;
 }
      else
 {
   unsigned int VAR_11 = ((VAR_3[*VAR_4 + 0] << 16) | (VAR_3[*VAR_4 + 1] << 8) | VAR_3[*VAR_4 + 2]);







   if (VAR_11 == 0x00000000)
     {
       (*VAR_8)++;
       if (*VAR_8 == 0xFFF)
  *VAR_6 = FUNC_1 (*VAR_6, &VAR_10, VAR_8, VAR_7);
     }
   else
     {
       if (*VAR_8 != 0)
  *VAR_6 = FUNC_1 (*VAR_6, &VAR_10, VAR_8, VAR_7);
       VAR_9 = FUNC_0 (VAR_11, VAR_10, 24, VAR_7);
       VAR_10 += VAR_9;
       *VAR_6 += VAR_9;
     }
   *VAR_4 += 3;
 }
    }

  *VAR_2 = VAR_10;
  return;
}
