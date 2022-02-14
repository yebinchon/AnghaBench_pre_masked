
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,char*) ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_10 (int ) ;

int
FUNC_11 (int VAR_8, char *VAR_9[])
{
  int VAR_10;
  int VAR_11;







  FUNC_2 (VAR_4, VAR_3);
  FUNC_10 (VAR_4);

  if (VAR_8 != 1)
    {
      int VAR_12 = 0;
      int VAR_13 = 0;
      FILE *VAR_14;

      if (VAR_8 == 2 && VAR_9[1][0] == '-')
 {
   const char *VAR_15 = &VAR_9[1][1];
   if (*VAR_15 == '-')
     ++VAR_15;
   VAR_12 = *VAR_15 == 'h' || *VAR_15 == 'H';
   VAR_13 = *VAR_15 == 'v' || *VAR_15 == 'V';
 }

      if (VAR_13)
 FUNC_7 ("bin2c");

      VAR_14 = VAR_12 ? VAR_7 : VAR_5;
      FUNC_5 (VAR_14, FUNC_1("Usage: %s < input_file > output_file\n"), VAR_9[0]);
      FUNC_5 (VAR_14, FUNC_1("Prints bytes from stdin in hex format.\n"));
      FUNC_3 (!VAR_12);
    }

  FUNC_0 (FUNC_4 (VAR_6));

  VAR_11 = 0;
  while ((VAR_10 = FUNC_6 (VAR_6)) != VAR_0)
    {
      FUNC_8 ("0x%02x,", VAR_10);
      if (++VAR_11 == 16)
 {
   FUNC_8 ("\n");
   VAR_11 = 0;
 }
    }
  if (VAR_11 != 0)
    FUNC_8 ("\n");

  FUNC_3 (0);
}
