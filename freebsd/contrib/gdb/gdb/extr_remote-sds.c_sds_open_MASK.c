
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13 (char *VAR_6, int VAR_7)
{
  if (VAR_6 == 0)
    FUNC_1 ("To open a remote debug connection, you need to specify what serial\ndevice is attached to the remote system (e.g. /dev/ttya).");


  FUNC_11 (VAR_7);

  FUNC_12 (&VAR_4);

  VAR_3 = FUNC_8 (VAR_6);
  if (!VAR_3)
    FUNC_2 (VAR_6);

  if (VAR_1 != -1)
    {
      if (FUNC_10 (VAR_3, VAR_1))
 {
   FUNC_6 (VAR_3);
   FUNC_2 (VAR_6);
 }
    }


  FUNC_9 (VAR_3);



  FUNC_7 (VAR_3);

  if (VAR_7)
    {
      FUNC_5 ("Remote debugging using ");
      FUNC_5 (VAR_6);
      FUNC_5 ("\n");
    }
  FUNC_4 (&VAR_4);

  VAR_2 = 1;




  if (!FUNC_0 (VAR_5, ((void*)0),
       "Couldn't establish connection to remote target\n",
       VAR_0))
    FUNC_3 ();
}
