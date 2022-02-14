
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 () ;
 char* VAR_0 ;
 int FUNC_1 (char) ;

void
FUNC_2 (unsigned char *VAR_1)
{
  unsigned char VAR_2;
  int VAR_3;
  char VAR_4;


  do
    {
      FUNC_1 ('$');
      VAR_2 = 0;
      VAR_3 = 0;

      while ((VAR_4 = VAR_1[VAR_3]))
 {
   FUNC_1 (VAR_4);
   VAR_2 += VAR_4;
   VAR_3 += 1;
 }

      FUNC_1 ('#');
      FUNC_1 (VAR_0[VAR_2 >> 4]);
      FUNC_1 (VAR_0[VAR_2 % 16]);

    }
  while (FUNC_0 () != '+');
}
