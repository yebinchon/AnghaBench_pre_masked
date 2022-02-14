
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct serial {scalar_t__ fd; } ;
struct in_addr {int dummy; } ;
struct hostent {int h_addr; } ;
typedef int sockaddr ;
typedef int fd_set ;
typedef int err ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
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
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,struct sockaddr*,int) ;
 int VAR_16 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_17 ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,int ,int ,int*,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,int ,int*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (struct serial*) ;
 int FUNC_13 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_14 (scalar_t__,int ,int ,char*,int) ;
 int FUNC_15 (int ,int ) ;
 void* FUNC_16 (int ,int ,int ) ;
 char* FUNC_17 (char const*,char) ;
 int FUNC_18 (char*,char*) ;
 scalar_t__ FUNC_19 (char const*,char*,int) ;
 int FUNC_20 (char*,char const*,int) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static int
FUNC_22 (struct serial *VAR_18, const char *VAR_19)
{
  char *VAR_20, VAR_21[100];
  int VAR_22, VAR_23, VAR_24;
  int VAR_25;
  struct hostent *VAR_26;
  struct sockaddr_in VAR_27;

  VAR_25 = 0;
  if (FUNC_19 (VAR_19, "udp:", 4) == 0)
    {
      VAR_25 = 1;
      VAR_19 = VAR_19 + 4;
    }
  else if (FUNC_19 (VAR_19, "tcp:", 4) == 0)
    VAR_19 = VAR_19 + 4;

  VAR_20 = FUNC_17 (VAR_19, ':');

  if (!VAR_20)
    FUNC_4 ("net_open: No colon in host name!");

  VAR_24 = FUNC_11 (VAR_20 - VAR_19, (int) sizeof VAR_21 - 1);
  FUNC_20 (VAR_21, VAR_19, VAR_24);
  VAR_21[VAR_24] = '\000';
  VAR_23 = FUNC_2 (VAR_20 + 1);


  if (!VAR_21[0])
    FUNC_18 (VAR_21, "localhost");

  VAR_26 = FUNC_6 (VAR_21);
  if (!VAR_26)
    {
      FUNC_5 (VAR_17, "%s: unknown host\n", VAR_21);
      VAR_16 = VAR_2;
      return -1;
    }

  if (VAR_25)
    VAR_18->fd = FUNC_16 (VAR_6, VAR_10, 0);
  else
    VAR_18->fd = FUNC_16 (VAR_6, VAR_11, 0);

  if (VAR_18->fd < 0)
    return -1;

  VAR_27.sin_family = VAR_6;
  VAR_27.sin_port = FUNC_8 (VAR_23);
  FUNC_10 (&VAR_27.sin_addr.s_addr, VAR_26->h_addr,
   sizeof (struct in_addr));


  VAR_24 = 1;
  FUNC_9 (VAR_18->fd, VAR_4, &VAR_24);


  VAR_22 = FUNC_3 (VAR_18->fd, (struct sockaddr *) &VAR_27, sizeof (VAR_27));

  if (VAR_22 < 0 && VAR_16 != VAR_0)
    {
      FUNC_12 (VAR_18);
      return -1;
    }

  if (VAR_22)
    {

      struct timeval VAR_28;
      fd_set VAR_29, VAR_30;
      int VAR_31 = 0;
      FUNC_1 (&VAR_29);

      do
 {



   if (&FUNC_21)
     {
       if (FUNC_21 (0))
  {
    VAR_16 = VAR_1;
    FUNC_12 (VAR_18);
    return -1;
  }
     }

   FUNC_0 (VAR_18->fd, &VAR_29);
   VAR_30 = VAR_29;
   VAR_28.tv_sec = 0;
   VAR_28.tv_usec = 1000000 / VAR_7;

   VAR_22 = FUNC_13 (VAR_18->fd + 1, &VAR_29, &VAR_30, ((void*)0), &VAR_28);
   VAR_31++;
 }
      while (VAR_22 == 0 && VAR_31 <= VAR_15 * VAR_7);
      if (VAR_22 < 0 || VAR_31 > VAR_15 * VAR_7)
 {
   if (VAR_31 > VAR_15 * VAR_7)
     VAR_16 = VAR_3;
   FUNC_12 (VAR_18);
   return -1;
 }
    }


  {
    int VAR_32, VAR_33, VAR_34;
    VAR_34 = sizeof(VAR_33);
    VAR_32 = FUNC_7 (VAR_18->fd, VAR_12, VAR_13, &VAR_33, &VAR_34);
    if (VAR_32 < 0 || VAR_33)
      {
 if (VAR_33)
   VAR_16 = VAR_33;
 FUNC_12 (VAR_18);
 return -1;
      }
  }


  VAR_24 = 0;
  FUNC_9 (VAR_18->fd, VAR_4, &VAR_24);

  if (VAR_25 == 0)
    {

      VAR_24 = 1;
      FUNC_14 (VAR_18->fd, VAR_5, VAR_14,
    (char *)&VAR_24, sizeof (VAR_24));
    }



  FUNC_15 (VAR_8, VAR_9);

  return 0;
}
