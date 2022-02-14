
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, int VAR_1)
{
  char *VAR_2;
  int VAR_3, VAR_4, VAR_5;
  unsigned char VAR_6[1000];


  VAR_2 = VAR_0;
  VAR_4 = 0;
  while (*VAR_2 != '\0')
    {
      VAR_6[VAR_4++] = FUNC_0 (VAR_2[0]) * 16 + FUNC_0 (VAR_2[1]);
      if (VAR_2[1] == '\0')
 break;
      VAR_2 += 2;
    }

  VAR_5 = FUNC_2 (VAR_6, VAR_4);

  FUNC_1 ("Reply is ");
  for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3)
    {
      FUNC_1 ("%02x", VAR_6[VAR_3]);
    }
  FUNC_1 ("\n");
}
