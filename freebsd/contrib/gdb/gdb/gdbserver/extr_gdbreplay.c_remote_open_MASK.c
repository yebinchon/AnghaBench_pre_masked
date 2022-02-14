
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
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
 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (char*) ;
 int VAR_12 ;
 int FUNC_11 (int,int ,int ,char*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int VAR_13 ;
 char* FUNC_14 (char*,char) ;

__attribute__((used)) static void
FUNC_15 (char *VAR_14)
{
  if (!FUNC_14 (VAR_14, ':'))
    {
      FUNC_7 (VAR_13, "%s: Must specify tcp connection as host:addr\n", VAR_14);
      FUNC_6 (VAR_13);
      FUNC_4 (1);
    }
  else
    {
      char *VAR_15;
      int VAR_16;
      struct sockaddr_in VAR_17;
      int VAR_18;
      int VAR_19;

      VAR_15 = FUNC_14 (VAR_14, ':');

      VAR_16 = FUNC_1 (VAR_15 + 1);

      VAR_19 = FUNC_13 (VAR_4, VAR_7, 0);
      if (VAR_19 < 0)
 FUNC_10 ("Can't open socket");


      VAR_18 = 1;
      FUNC_11 (VAR_19, VAR_8, VAR_10, (char *) &VAR_18,
    sizeof (VAR_18));

      VAR_17.sin_family = VAR_4;
      VAR_17.sin_port = FUNC_8 (VAR_16);
      VAR_17.sin_addr.s_addr = VAR_2;

      if (FUNC_2 (VAR_19, (struct sockaddr *) &VAR_17, sizeof (VAR_17))
   || FUNC_9 (VAR_19, 1))
 FUNC_10 ("Can't bind address");

      VAR_18 = sizeof (VAR_17);
      VAR_12 = FUNC_0 (VAR_19, (struct sockaddr *) &VAR_17, &VAR_18);
      if (VAR_12 == -1)
 FUNC_10 ("Accept failed");


      VAR_18 = 1;
      FUNC_11 (VAR_19, VAR_8, VAR_9, (char *) &VAR_18, sizeof (VAR_18));



      VAR_18 = 1;
      FUNC_11 (VAR_12, VAR_3, VAR_11,
    (char *) &VAR_18, sizeof (VAR_18));

      FUNC_3 (VAR_19);

      FUNC_12 (VAR_5, VAR_6);

    }

  FUNC_5 (VAR_12, VAR_1, VAR_0);

  FUNC_7 (VAR_13, "Replay logfile using %s\n", VAR_14);
  FUNC_6 (VAR_13);
}
