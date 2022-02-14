
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4 (char *VAR_4)
{
  char *VAR_5;
  int VAR_6;

  VAR_5 = VAR_4;

  while (1)
    {
      VAR_6 = FUNC_3 (VAR_3);

      switch (VAR_6)
 {
 case 128:
   if (VAR_2)
     FUNC_1 ("Timeout in mid-message, retrying\n", VAR_1);
   return 0;
 case '$':
   if (VAR_2)
     FUNC_1 ("Saw new packet start in middle of old one\n",
       VAR_1);
   return 0;
 case '\r':
   break;

 case '\n':
   {
     *VAR_5 = '\000';
     if (VAR_2)
       FUNC_0 (VAR_1, "Received encoded: \"%s\"\n",
      VAR_4);
     return 1;
   }

 default:
   if (VAR_5 < VAR_4 + VAR_0 - 1)
     {
       *VAR_5++ = VAR_6;
       continue;
     }

   *VAR_5 = '\0';
   FUNC_2 ("Message too long: ");
   FUNC_2 (VAR_4);
   FUNC_2 ("\n");

   return 0;
 }
    }
}
