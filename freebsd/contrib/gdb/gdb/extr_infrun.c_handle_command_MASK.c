
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (int,unsigned char*,int ) ;



 scalar_t__ VAR_0 ;


 int FUNC_1 (int,unsigned char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char** FUNC_4 (char*) ;
 int FUNC_5 (struct cleanup*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char) ;
 struct cleanup* FUNC_10 (char**) ;
 int FUNC_11 (unsigned char*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int) ;

__attribute__((used)) static void
FUNC_23 (char *VAR_6, int VAR_7)
{
  char **VAR_8;
  int VAR_9, VAR_10;
  int VAR_11, VAR_12, VAR_13;
  enum target_signal VAR_14;
  int VAR_15;
  int VAR_16;
  unsigned char *VAR_17;
  struct cleanup *VAR_18;

  if (VAR_6 == ((void*)0))
    {
      FUNC_7 ("signal to handle");
    }



  VAR_16 = (int) VAR_0;
  VAR_17 = (unsigned char *) FUNC_2 (VAR_16);
  FUNC_11 (VAR_17, 0, VAR_16);



  VAR_8 = FUNC_4 (VAR_6);
  if (VAR_8 == ((void*)0))
    {
      FUNC_12 (0);
    }
  VAR_18 = FUNC_10 (VAR_8);






  while (*VAR_8 != ((void*)0))
    {
      VAR_10 = FUNC_17 (*VAR_8);
      for (VAR_9 = 0; FUNC_9 ((*VAR_8)[VAR_9]); VAR_9++)
 {;
 }
      VAR_15 = 0;
      VAR_11 = VAR_13 = -1;

      if (VAR_10 >= 1 && !FUNC_18 (*VAR_8, "all", VAR_10))
 {


   VAR_15 = 1;
   VAR_11 = 0;
   VAR_13 = VAR_16 - 1;
 }
      else if (VAR_10 >= 1 && !FUNC_18 (*VAR_8, "stop", VAR_10))
 {
   FUNC_0 (VAR_16, VAR_17, VAR_5);
   FUNC_0 (VAR_16, VAR_17, VAR_3);
 }
      else if (VAR_10 >= 1 && !FUNC_18 (*VAR_8, "ignore", VAR_10))
 {
   FUNC_1 (VAR_16, VAR_17, VAR_4);
 }
      else if (VAR_10 >= 2 && !FUNC_18 (*VAR_8, "print", VAR_10))
 {
   FUNC_0 (VAR_16, VAR_17, VAR_3);
 }
      else if (VAR_10 >= 2 && !FUNC_18 (*VAR_8, "pass", VAR_10))
 {
   FUNC_0 (VAR_16, VAR_17, VAR_4);
 }
      else if (VAR_10 >= 3 && !FUNC_18 (*VAR_8, "nostop", VAR_10))
 {
   FUNC_1 (VAR_16, VAR_17, VAR_5);
 }
      else if (VAR_10 >= 3 && !FUNC_18 (*VAR_8, "noignore", VAR_10))
 {
   FUNC_0 (VAR_16, VAR_17, VAR_4);
 }
      else if (VAR_10 >= 4 && !FUNC_18 (*VAR_8, "noprint", VAR_10))
 {
   FUNC_1 (VAR_16, VAR_17, VAR_3);
   FUNC_1 (VAR_16, VAR_17, VAR_5);
 }
      else if (VAR_10 >= 4 && !FUNC_18 (*VAR_8, "nopass", VAR_10))
 {
   FUNC_1 (VAR_16, VAR_17, VAR_4);
 }
      else if (VAR_9 > 0)
 {






   VAR_11 = VAR_13 = (int)
     FUNC_20 (FUNC_3 (*VAR_8));
   if ((*VAR_8)[VAR_9] == '-')
     {
       VAR_13 = (int)
  FUNC_20 (FUNC_3 ((*VAR_8) + VAR_9 + 1));
     }
   if (VAR_11 > VAR_13)
     {

       VAR_12 = VAR_11;
       VAR_11 = VAR_13;
       VAR_13 = VAR_12;
     }
 }
      else
 {
   VAR_14 = FUNC_21 (*VAR_8);
   if (VAR_14 != 128)
     {
       VAR_11 = VAR_13 = (int) VAR_14;
     }
   else
     {

       FUNC_6 ("Unrecognized or ambiguous flag word: \"%s\".", *VAR_8);
     }
 }




      for (VAR_12 = VAR_11; VAR_12 >= 0 && VAR_12 <= VAR_13; VAR_12++)
 {
   switch ((enum target_signal) VAR_12)
     {
     case 129:
     case 130:
       if (!VAR_15 && !VAR_17[VAR_12])
  {
    if (FUNC_14 ("%s is used by the debugger.\nAre you sure you want to change it? ", FUNC_22 ((enum target_signal) VAR_12)))

      {
        VAR_17[VAR_12] = 1;
      }
    else
      {
        FUNC_13 ("Not confirmed, unchanged.\n");
        FUNC_8 (VAR_1);
      }
  }
       break;
     case 132:
     case 131:
     case 128:

       break;
     default:
       VAR_17[VAR_12] = 1;
       break;
     }
 }

      VAR_8++;
    }

  FUNC_19 (VAR_2);

  if (VAR_7)
    {

      FUNC_15 ();
      for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++)
 {
   if (VAR_17[VAR_12])
     {
       FUNC_16 (VAR_12);
     }
 }
    }

  FUNC_5 (VAR_18);
}
