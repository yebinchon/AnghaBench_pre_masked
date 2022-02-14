
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

void
FUNC_5 (char *VAR_1, char *VAR_2, char *VAR_3)
{
  int VAR_4;


  static int VAR_5 = 1;
  static int VAR_6 = 0;
  static char *VAR_7 = "";
  static char *VAR_8 = "";

  if (*VAR_2 == '\n')
    VAR_6 = 0;



  if ((VAR_6 || (FUNC_4 (VAR_7, VAR_1) != 0)) && !VAR_5)
    {
      FUNC_2 (VAR_8, VAR_0);
      FUNC_2 ("\n", VAR_0);
      FUNC_2 (VAR_1, VAR_0);
    }


  if (VAR_5)
    {
      VAR_5 = 0;
      FUNC_2 (VAR_1, VAR_0);
    }

  VAR_7 = VAR_1;
  VAR_8 = VAR_3;


  while ((VAR_4 = *VAR_2++) != '\0')
    {
      switch (VAR_4)
 {
 default:
   if (FUNC_3 (VAR_4))
     FUNC_1 (VAR_4, VAR_0);

   else
     FUNC_0 (VAR_0, "\\x%02x", VAR_4 & 0xff);
   break;

 case '\\':
   FUNC_2 ("\\\\", VAR_0);
   break;
 case '\b':
   FUNC_2 ("\\b", VAR_0);
   break;
 case '\f':
   FUNC_2 ("\\f", VAR_0);
   break;
 case '\n':
   VAR_5 = 1;
   FUNC_2 ("\\n", VAR_0);
   break;
 case '\r':
   FUNC_2 ("\\r", VAR_0);
   break;
 case '\t':
   FUNC_2 ("\\t", VAR_0);
   break;
 case '\v':
   FUNC_2 ("\\v", VAR_0);
   break;
 }

      VAR_6 = VAR_4 == '\r';
    }


  if (VAR_5)
    {
      FUNC_2 (VAR_3, VAR_0);
      FUNC_2 ("\n", VAR_0);
    }
}
