
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
typedef enum ocd_target_type { ____Placeholder_ocd_target_type } ocd_target_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,char*,int ) ;
 struct target_ops* VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct target_ops*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct target_ops*) ;

void
FUNC_14 (char *VAR_6, int VAR_7, enum ocd_target_type VAR_8,
   struct target_ops *VAR_9)
{
  unsigned char VAR_10[10], *VAR_11;
  int VAR_12;

  if (VAR_6 == 0)
    FUNC_1 ("To open an OCD connection, you need to specify the\ndevice the OCD device is attached to (e.g. /dev/ttya).");


  FUNC_12 (VAR_7);

  VAR_2 = VAR_9;

  FUNC_13 (VAR_2);

  VAR_4 = FUNC_9 (VAR_6);
  if (!VAR_4)
    FUNC_2 (VAR_6);

  if (VAR_1 != -1)
    {
      if (FUNC_11 (VAR_4, VAR_1))
 {
   FUNC_7 (VAR_4);
   FUNC_2 (VAR_6);
 }
    }

  FUNC_10 (VAR_4);



  FUNC_8 (VAR_4);

  if (VAR_7)
    {
      FUNC_6 ("Remote target wiggler connected to ");
      FUNC_6 (VAR_6);
      FUNC_6 ("\n");
    }
  FUNC_5 (VAR_2);
  VAR_3 = FUNC_3 (42000);



  if (!FUNC_0 (VAR_5, &VAR_8,
       "Couldn't establish connection to remote target\n",
       VAR_0))
    {
      FUNC_4 ();
      FUNC_1 ("Failed to connect to OCD.");
    }
}
