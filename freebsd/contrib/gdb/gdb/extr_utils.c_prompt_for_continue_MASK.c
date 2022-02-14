
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 char* FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  char *VAR_4;
  char VAR_5[120];

  if (VAR_1 > 1)
    FUNC_3 ("\n\032\032pre-prompt-for-continue\n");

  FUNC_7 (VAR_5,
   "---Type <return> to continue, or q <return> to quit---");
  if (VAR_1 > 1)
    FUNC_6 (VAR_5, "\n\032\032prompt-for-continue\n");




  FUNC_4 ();

  VAR_3++;
  VAR_4 = FUNC_2 (VAR_5);

  if (VAR_1 > 1)
    FUNC_3 ("\n\032\032post-prompt-for-continue\n");

  if (VAR_4)
    {
      char *VAR_6 = VAR_4;
      while (*VAR_6 == ' ' || *VAR_6 == '\t')
 ++VAR_6;
      if (VAR_6[0] == 'q')
 {
   if (!VAR_2)
     FUNC_5 (VAR_0);
   else
     FUNC_0 (0);
 }
      FUNC_8 (VAR_4);
    }
  VAR_3--;



  FUNC_4 ();

  FUNC_1 ();
}
