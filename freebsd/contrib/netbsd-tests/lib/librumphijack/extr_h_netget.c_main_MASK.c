
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int sin ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,int ) ;
 char* FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,char*,int) ;

int
FUNC_15(int VAR_9, char *VAR_10[])
{
 char VAR_11[8192];
 struct sockaddr_in VAR_12;
 ssize_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_11(VAR_10[0]);
 if (VAR_9 != 4) {
  FUNC_3(VAR_8, "usage: %s address port savefile\n",
      FUNC_5());
  return VAR_1;
 }

 VAR_14 = FUNC_12(VAR_6, VAR_7, 0);
 if (VAR_14 == -1)
  FUNC_2(VAR_1, "socket");

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.sin_len = sizeof(VAR_12);
 VAR_12.sin_family = VAR_0;
 VAR_12.sin_port = FUNC_6(FUNC_0(VAR_10[2]));
 VAR_12.sin_addr.s_addr = FUNC_7(VAR_10[1]);

 VAR_15 = FUNC_9(VAR_10[3], VAR_4 | VAR_5, 0644);
 if (VAR_15 == -1)
  FUNC_2(VAR_1, "open");
 if (FUNC_4(VAR_15, 0) == -1)
  FUNC_2(VAR_1, "ftruncate savefile");

 if (FUNC_1(VAR_14, (struct sockaddr *)&VAR_12, sizeof(VAR_12)) == -1)
  FUNC_2(VAR_1, "connect");

 if (FUNC_14(VAR_14, VAR_3, FUNC_13(VAR_3)) != FUNC_13(VAR_3))
  FUNC_2(VAR_1, "socket write");

 for (;;) {
  VAR_13 = FUNC_10(VAR_14, VAR_11, sizeof(VAR_11));
  if (VAR_13 == 0)
   break;
  if (VAR_13 == -1)
   FUNC_2(VAR_1, "socket read");

  if (FUNC_14(VAR_15, VAR_11, VAR_13) != VAR_13)
   FUNC_2(VAR_1, "write file");
 }

 return VAR_2;
}
