
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct termios {int c_cflag; int* c_cc; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
struct termio {int c_cflag; int* c_cc; int sg_flags; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sgttyb {int c_cflag; int* c_cc; int sg_flags; scalar_t__ c_lflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
typedef int sockaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 char* FUNC_9 (TYPE_1__) ;
 int FUNC_10 (int,int ,struct termio*) ;
 scalar_t__ FUNC_11 (int,int) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*) ;
 int VAR_27 ;
 int FUNC_14 (int,int ,int ,char*,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_28 ;
 char* FUNC_17 (char*,char) ;
 int FUNC_18 (int,struct termios*) ;
 int FUNC_19 (int,int ,struct termios*) ;

void
FUNC_20 (char *VAR_29)
{
  int VAR_30;

  if (!FUNC_17 (VAR_29, ':'))
    {
      VAR_27 = FUNC_12 (VAR_29, VAR_9);
      if (VAR_27 < 0)
 FUNC_13 ("Could not open remote device");
      FUNC_6 (VAR_28, "Remote debugging using %s\n", VAR_29);
    }
  else
    {
      char *VAR_31;
      int VAR_32;
      struct sockaddr_in VAR_33;
      int VAR_34;
      int VAR_35;

      VAR_31 = FUNC_17 (VAR_29, ':');

      VAR_32 = FUNC_1 (VAR_31 + 1);

      VAR_35 = FUNC_16 (VAR_11, VAR_15, 0);
      if (VAR_35 < 0)
 FUNC_13 ("Can't open socket");


      VAR_34 = 1;
      FUNC_14 (VAR_35, VAR_16, VAR_18, (char *) &VAR_34,
    sizeof (VAR_34));

      VAR_33.sin_family = VAR_11;
      VAR_33.sin_port = FUNC_8 (VAR_32);
      VAR_33.sin_addr.s_addr = VAR_7;

      if (FUNC_2 (VAR_35, (struct sockaddr *) &VAR_33, sizeof (VAR_33))
   || FUNC_11 (VAR_35, 1))
 FUNC_13 ("Can't bind address");

      FUNC_6 (VAR_28, "Listening on port %d\n", VAR_32);

      VAR_34 = sizeof (VAR_33);
      VAR_27 = FUNC_0 (VAR_35, (struct sockaddr *) &VAR_33, &VAR_34);
      if (VAR_27 == -1)
 FUNC_13 ("Accept failed");


      VAR_34 = 1;
      FUNC_14 (VAR_35, VAR_16, VAR_17, (char *) &VAR_34, sizeof (VAR_34));



      VAR_34 = 1;
      FUNC_14 (VAR_27, VAR_8, VAR_20,
    (char *) &VAR_34, sizeof (VAR_34));

      FUNC_3 (VAR_35);

      FUNC_15 (VAR_13, VAR_14);



      FUNC_6 (VAR_28, "Remote debugging from host %s\n",
         FUNC_9 (VAR_33.sin_addr));
    }
  FUNC_4 ();
}
