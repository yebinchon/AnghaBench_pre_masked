
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,char*,...) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,size_t) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10 (int VAR_2, char *VAR_3)
{
  static char *VAR_4;
  static int VAR_5;
  char *VAR_6;
  char VAR_7[30];
  char *VAR_8;
  char *VAR_9 = VAR_3;
  char *VAR_10 = VAR_3 + FUNC_6 (VAR_3);
  char *VAR_11;

  if (VAR_4 != ((void*)0)
      && FUNC_5 (VAR_4, VAR_3) == 0)
    return;





  VAR_6 = VAR_1;

  FUNC_3 (VAR_7, "%sF%d", VAR_0, VAR_5);
  ++VAR_5;




  VAR_11 = VAR_8 = FUNC_8 (2 * FUNC_6 (VAR_3) + FUNC_6 (VAR_7) + 12);

  *VAR_11++ = '"';

  while (VAR_9 < VAR_10)
    {
      char *VAR_12 = FUNC_4 (VAR_9, '\\');
      size_t VAR_13 = (VAR_12) ? (size_t) (VAR_12 - VAR_9 + 1) : FUNC_6 (VAR_9);




      FUNC_7 (VAR_11, VAR_9, VAR_13);

      VAR_9 += VAR_13;
      VAR_11 += VAR_13;

      if (VAR_12 != ((void*)0))
 *VAR_11++ = '\\';
    }

  FUNC_3 (VAR_11, "\",%d,0,0,%s\n", VAR_2, VAR_7);

  VAR_1 = VAR_8;
  FUNC_2 ('s');
  FUNC_0 (VAR_7);

  if (VAR_4 != ((void*)0))
    FUNC_1 (VAR_4);
  VAR_4 = FUNC_9 (VAR_3);

  FUNC_1 (VAR_8);

  VAR_1 = VAR_6;
}
