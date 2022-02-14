
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
typedef enum mips_monitor_type { ____Placeholder_mips_monitor_type } mips_monitor_type ;


 int VAR_0 ;
 char** FUNC_0 (char*) ;
 struct target_ops* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char**) ;
 int * VAR_2 ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (struct target_ops*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int) ;
 int VAR_6 ;
 char* FUNC_18 (char*,char) ;
 int FUNC_19 (int) ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_20 (struct target_ops*) ;
 int FUNC_21 (char*) ;
 void* FUNC_22 (char const*) ;

__attribute__((used)) static void
FUNC_23 (struct target_ops *VAR_12, char *VAR_13, int VAR_14,
      enum mips_monitor_type VAR_15,
      const char *VAR_16)
{
  char *VAR_17;
  char *VAR_18;
  char *VAR_19 = 0;
  char *VAR_20 = 0;
  char **VAR_21;

  if (VAR_13 == 0)
    FUNC_2 (
     "To open a MIPS remote debugging connection, you need to specify what serial\ndevice is attached to the target board (e.g., /dev/ttya).\n"

     "If you want to use TFTP to download to the board, specify the name of a\n"
     "temporary file to be used by GDB for downloads as the second argument.\n"
     "This filename must be in the form host:filename, where host is the name\n"
     "of the host running the TFTP server, and the file must be readable by the\n"
     "world.  If the local name of the temporary file differs from the name as\n"
     "seen from the board via TFTP, specify that name as the third parameter.\n");



  if ((VAR_21 = FUNC_0 (VAR_13)) == ((void*)0))
    FUNC_7 (0);
  FUNC_5 (VAR_21);

  VAR_18 = FUNC_22 (VAR_21[0]);
  if (VAR_21[1])
    {
      VAR_19 = VAR_21[1];
      if (VAR_21[2])
 VAR_20 = VAR_21[2];
    }

  FUNC_19 (VAR_14);

  if (VAR_3)
    FUNC_20 (VAR_1);


  VAR_2 = FUNC_15 (VAR_18);
  if (VAR_2 == ((void*)0))
    FUNC_8 (VAR_18);

  if (VAR_0 != -1)
    {
      if (FUNC_17 (VAR_2, VAR_0))
 {
   FUNC_14 (VAR_2);
   FUNC_8 (VAR_18);
 }
    }

  FUNC_16 (VAR_2);





  if (VAR_19)
    {
      if (FUNC_18 (VAR_19, '#'))
 {
   VAR_10 = FUNC_15 (VAR_19);
   if (!VAR_10)
     FUNC_8 ("Unable to open UDP port");
   VAR_11 = 1;
 }
      else
 {



   if (VAR_9)
     FUNC_21 (VAR_9);
   if (VAR_8)
     FUNC_21 (VAR_8);
   if (VAR_20 == ((void*)0))
     if ((VAR_20 = FUNC_18 (VAR_19, ':')) != ((void*)0))
       VAR_20++;
   if (VAR_20 == ((void*)0))
     VAR_20 = VAR_19;
   VAR_9 = FUNC_22 (VAR_19);
   VAR_8 = FUNC_22 (VAR_20);
   VAR_7 = 1;
 }
    }

  VAR_1 = VAR_12;
  VAR_3 = 1;


  if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_22 (VAR_16);
  VAR_4 = VAR_15;

  FUNC_6 ();

  if (VAR_14)
    FUNC_10 ("Remote MIPS debugging using %s\n", VAR_18);


  FUNC_11 (VAR_12);




  FUNC_1 ();






  FUNC_3 ();
  FUNC_13 ();
  VAR_6 = FUNC_12 ();
  FUNC_9 (FUNC_4 (), -1, 1);
  FUNC_21 (VAR_18);
}
