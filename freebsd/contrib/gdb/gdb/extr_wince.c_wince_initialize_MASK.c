
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct sockaddr_in {int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int args ;
typedef int PROCESS_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int ,int ,int *,int *,int *,int *) ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int *,int *) ;
 scalar_t__ FUNC_5 (int,struct sockaddr*,int) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (struct sockaddr_in*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int,int ,int ,char*,int) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int *) ;
 char* FUNC_20 (char*,int ) ;

__attribute__((used)) static void
FUNC_21 (void)
{
  int VAR_8;
  char VAR_9[256];
  char *VAR_10;
  struct sockaddr_in VAR_11;
  char *VAR_12;
  int VAR_13;
  PROCESS_INFORMATION VAR_14;

  if (!VAR_5)
    switch (FUNC_2 ())
      {
      case 0:
 VAR_5 = 1;
 break;
      default:
 FUNC_3 ();
 FUNC_7 ("Can't initialize connection to remote device.\n");
 break;
      }


  VAR_12 = FUNC_20 ("wince-stub.exe", VAR_4);
  FUNC_16 (VAR_9, VAR_12);

  if (VAR_6)
    {
      FUNC_14 (VAR_9, " ");
      VAR_10 = FUNC_15 (VAR_9, '\0');
      if (FUNC_8 (VAR_10, sizeof (VAR_9) - FUNC_17 (VAR_9)))
 FUNC_7 ("couldn't get hostname of this system.");
    }


  if ((VAR_13 = FUNC_13 (VAR_0, VAR_1, 0)) < 0)
    FUNC_18 ("Couldn't connect to host system.");


  VAR_8 = 1;
  (void) FUNC_12 (VAR_13, VAR_2, VAR_3, (char *) &VAR_8, sizeof (VAR_8));



  FUNC_11 (&VAR_11, 0, sizeof (VAR_11));
  VAR_11.sin_family = VAR_0;
  VAR_11.sin_port = FUNC_9 (7000);

  if (FUNC_5 (VAR_13, (struct sockaddr *) &VAR_11, sizeof (VAR_11)))
    FUNC_7 ("couldn't bind socket");

  if (FUNC_10 (VAR_13, 1))
    FUNC_7 ("Couldn't open socket for listening.\n");


  if (!FUNC_0 (FUNC_19 (VAR_12, ((void*)0)), FUNC_19 (VAR_9, ((void*)0)),
   ((void*)0), ((void*)0), 0, 0, ((void*)0), ((void*)0), ((void*)0), &VAR_14))
    FUNC_7 ("Unable to start remote stub '%s'.  Windows CE error %d.",
    VAR_12, FUNC_1 ());



  if ((VAR_7 = FUNC_4 (VAR_13, ((void*)0), ((void*)0))) < 0)
    FUNC_7 ("couldn't set up server for connection.");

  FUNC_6 (VAR_13);
}
