
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_long ;
struct timeval {int dummy; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int * FUNC_1 (struct sockaddr_in*,int ,int ,int*,int ,int ) ;
 int * FUNC_2 (struct sockaddr_in*,int ,int ,struct timeval,int*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct sockaddr_in*,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;

CLIENT *
FUNC_10(char *VAR_7, struct sockaddr_in *VAR_8, struct timeval *VAR_9, int *VAR_10, u_long VAR_11)
{
  CLIENT *VAR_12;




  if ((*VAR_10 = FUNC_9(VAR_0, VAR_5, VAR_1)) > 0) {



    if (FUNC_0(*VAR_10, (u_short *) ((void*)0)) < 0)
      FUNC_7(VAR_6, "can't bind privileged port (socket)");






    if ((VAR_8->sin_port = FUNC_6(FUNC_8(VAR_8, VAR_2, VAR_11, VAR_1))) != 0) {
      if (FUNC_4(*VAR_10, (struct sockaddr *) VAR_8, sizeof(*VAR_8)) >= 0
   && ((VAR_12 = FUNC_1(VAR_8, VAR_2, VAR_11, VAR_10, 0, 0)) != ((void*)0)))
 return VAR_12;
    }



    (void) FUNC_3(*VAR_10);
  }

  if ((*VAR_10 = FUNC_9(VAR_0, VAR_4, 0)) < 0) {
    FUNC_7(VAR_6, "Can't create socket to connect to mountd: %m");
    *VAR_10 = VAR_3;
    return ((void*)0);
  }



  if (FUNC_0(*VAR_10, (u_short *) ((void*)0)) < 0)
    FUNC_7(VAR_6, "can't bind privileged port");




  VAR_8->sin_port = 0;




  if ((VAR_12 = FUNC_2(VAR_8, VAR_2, VAR_11, *VAR_9, VAR_10)) == ((void*)0)) {
    (void) FUNC_3(*VAR_10);
    *VAR_10 = VAR_3;
    return ((void*)0);
  }
  FUNC_5("get_mount_client: Using udp, port %d", VAR_8->sin_port);
  return VAR_12;
}
