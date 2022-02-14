
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct remote_state {int remote_packet_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int *,char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct remote_state* FUNC_5 () ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct target_ops*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int VAR_7 ;
 int FUNC_15 (int ) ;
 int * VAR_8 ;
 int * FUNC_16 (char*) ;
 int VAR_9 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,int) ;
 int VAR_10 ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int VAR_11 ;
 int FUNC_23 (struct target_ops*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_24 (char *VAR_15, int VAR_16, struct target_ops *VAR_17,
        int VAR_18, int VAR_19)
{
  int VAR_20;
  struct remote_state *VAR_21 = FUNC_5 ();
  if (VAR_15 == 0)
    FUNC_4 ("To open a remote debug connection, you need to specify what\n"
    "serial device is attached to the remote system\n"
    "(e.g. /dev/ttyS0, /dev/ttya, COM1, etc.).");


  if (!VAR_19)
    VAR_14 = 1;

  FUNC_21 (VAR_16);

  FUNC_23 (VAR_17);

  VAR_8 = FUNC_16 (VAR_15);
  if (!VAR_8)
    FUNC_9 (VAR_15);

  if (VAR_2 != -1)
    {
      if (FUNC_20 (VAR_8, VAR_2))
 {




   FUNC_17 (VAR_8);
   VAR_8 = ((void*)0);
   FUNC_9 (VAR_15);
 }
    }

  FUNC_19 (VAR_8);



  FUNC_18 (VAR_8);

  if (VAR_16)
    {
      FUNC_14 ("Remote debugging using ");
      FUNC_14 (VAR_15);
      FUNC_14 ("\n");
    }
  FUNC_12 (VAR_17);

  FUNC_7 ();

  VAR_5 = -2;
  VAR_3 = -2;


  VAR_13 = 1;
  VAR_12 = 1;
  VAR_6 = FUNC_10 (VAR_0);

  if (VAR_19)
    {

      VAR_7 = 1;
      VAR_14 = 0;
    }
  VAR_20 = FUNC_3 (VAR_11,
    VAR_9, ((void*)0),
    "Couldn't establish connection to remote"
    " target\n",
    VAR_1);
  if (VAR_20 < 0)
    {
      FUNC_11 ();
      if (VAR_19)
 VAR_14 = 1;
      FUNC_22 (VAR_20);
    }

  if (VAR_19)
    VAR_14 = 1;

  if (VAR_18)
    {

      char *VAR_22 = FUNC_2 (VAR_21->remote_packet_size);
      FUNC_13 ("!");
      FUNC_6 (VAR_22, (VAR_21->remote_packet_size), 0);
    }
}
