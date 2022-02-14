
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;



 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,struct stat*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14 (int VAR_6, int VAR_7)
{
  char VAR_8[9];

  if (VAR_3)
    {
      static char *VAR_9 = "load -b -s ";
      char *VAR_10;
      struct stat VAR_11;


      FUNC_1 (VAR_2);
      VAR_2 = ((void*)0);


      if (FUNC_8 (VAR_4, &VAR_11) == 0)
 FUNC_0 (VAR_4, VAR_11.st_mode | VAR_0);


      FUNC_3 ("initEther\r", -1);


      VAR_10 = FUNC_13 (FUNC_11 (VAR_9) + FUNC_11 (VAR_5) + 2);
      FUNC_10 (VAR_10, VAR_9);
      FUNC_9 (VAR_10, VAR_5);
      FUNC_9 (VAR_10, "\r");
      FUNC_3 (VAR_10, 0);
      FUNC_12 (VAR_10);
      if (!FUNC_2 ("Downloading from "))
 return;
      if (!FUNC_2 (VAR_5))
 return;
      if (!FUNC_2 (", ^C to abort\r\n"))
 return;
    }




  switch (VAR_1)
    {
    case 128:
      FUNC_4 ("termination");
      FUNC_5 ("Entry address is ", VAR_6);
      if (!FUNC_6 (VAR_7))
 return;
      break;
    default:
      FUNC_5 ("Entry Address  = ", VAR_6);
      FUNC_4 ("termination");
      if (!FUNC_6 (VAR_7))
 return;
      break;
    }

  if (VAR_3)
    FUNC_7 (VAR_4);
}
