
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sin6_scope_id; int sin6_port; int sin6_addr; } ;
struct TYPE_5__ {int sin_port; int sin_addr; } ;
union sockunion {int su_family; int su_port; int su_len; TYPE_2__ su_sin6; TYPE_1__ su_sin; } ;
typedef int u_char ;
struct sockaddr {int dummy; } ;
typedef int hname ;
struct TYPE_8__ {int su_len; } ;
struct TYPE_7__ {char* pw_name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 union sockunion VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 char** VAR_12 ;
 int FUNC_1 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 scalar_t__ VAR_13 ;
 TYPE_4__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int,char*,...) ;
 size_t VAR_18 ;
 char** VAR_19 ;
 union sockunion VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (char*,...) ;
 TYPE_3__* VAR_22 ;
 char* VAR_23 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 size_t VAR_24 ;
 char** VAR_25 ;
 size_t VAR_26 ;
 char** VAR_27 ;
 scalar_t__ VAR_28 ;
 char* VAR_29 ;

void
FUNC_7(void)
{
 union sockunion *VAR_30;
 u_char *VAR_31, *VAR_32;
 char VAR_33[VAR_1];
 int VAR_34;

 if (VAR_15) {
  FUNC_3(211, "%s FTP server status:", VAR_16);
  FUNC_4("     %s\r\n", VAR_29);
 } else
  FUNC_3(211, "FTP server status:");
 FUNC_4("     Connected to %s", VAR_23);
 if (!FUNC_1((struct sockaddr *)&VAR_14, VAR_14.su_len,
    VAR_33, sizeof(VAR_33) - 1, ((void*)0), 0, VAR_2)) {
  VAR_33[sizeof(VAR_33) - 1] = 0;
  if (FUNC_6(VAR_33, VAR_23) != 0)
   FUNC_4(" (%s)", VAR_33);
 }
 FUNC_4("\r\n");
 if (VAR_17) {
  if (VAR_13)
   FUNC_4("     Logged in anonymously\r\n");
  else
   FUNC_4("     Logged in as %s\r\n", VAR_22->pw_name);
 } else if (VAR_6)
  FUNC_4("     Waiting for password\r\n");
 else
  FUNC_4("     Waiting for user name\r\n");
 FUNC_4("     TYPE: %s", VAR_27[VAR_26]);
 if (VAR_26 == VAR_3 || VAR_26 == VAR_4)
  FUNC_4(", FORM: %s", VAR_12[VAR_11]);
 if (VAR_26 == VAR_5)



  FUNC_4(" %d", VAR_7);

 FUNC_4("; STRUcture: %s; transfer MODE: %s\r\n",
     VAR_25[VAR_24], VAR_19[VAR_18]);
 if (VAR_8 != -1)
  FUNC_4("     Data connection open\r\n");
 else if (VAR_21 != -1) {
  VAR_34 = 1;
  VAR_30 = &VAR_20;
  goto printaddr;
 } else if (VAR_28 == 0) {
  VAR_34 = 0;
  VAR_30 = &VAR_9;
printaddr:

  if (VAR_10) {
   FUNC_4("     EPSV only mode (EPSV ALL)\r\n");
   goto epsvonly;
  }


  if (VAR_30->su_family == 129) {
   VAR_31 = (u_char *) &VAR_30->su_sin.sin_addr;
   VAR_32 = (u_char *) &VAR_30->su_sin.sin_port;
   FUNC_4("     %s (%d,%d,%d,%d,%d,%d)\r\n",
    VAR_34 ? "PASV" : "PORT",
    (((int) VAR_31[0]) & 0xff), (((int) VAR_31[1]) & 0xff), (((int) VAR_31[2]) & 0xff), (((int) VAR_31[3]) & 0xff),
    (((int) VAR_32[0]) & 0xff), (((int) VAR_32[1]) & 0xff));
  }


     {
  int VAR_35, VAR_36, VAR_37;

  switch (VAR_30->su_family) {
  case 129:
   VAR_31 = (u_char *) &VAR_30->su_sin.sin_addr;
   VAR_32 = (u_char *) &VAR_30->su_sin.sin_port;
   VAR_35 = sizeof(VAR_30->su_sin.sin_addr);
   VAR_36 = 4;
   break;
  case 128:
   VAR_31 = (u_char *) &VAR_30->su_sin6.sin6_addr;
   VAR_32 = (u_char *) &VAR_30->su_sin6.sin6_port;
   VAR_35 = sizeof(VAR_30->su_sin6.sin6_addr);
   VAR_36 = 6;
   break;
  default:
   VAR_36 = 0;
   break;
  }
  if (VAR_36) {
   FUNC_4("     %s (%d,%d,", VAR_34 ? "LPSV" : "LPRT",
    VAR_36, VAR_35);
   for (VAR_37 = 0; VAR_37 < VAR_35; VAR_37++)
    FUNC_4("%d,", (((int) VAR_31[VAR_37]) & 0xff));
   FUNC_4("%d,%d,%d)\r\n", 2, (((int) VAR_32[0]) & 0xff), (((int) VAR_32[1]) & 0xff));
  }
     }

epsvonly:;

     {
  int VAR_38;

  switch (VAR_30->su_family) {
  case 129:
   VAR_38 = 1;
   break;
  case 128:
   VAR_38 = 2;
   break;
  default:
   VAR_38 = 0;
   break;
  }
  if (VAR_38) {
   union sockunion VAR_39;

   VAR_39 = *VAR_30;
   if (VAR_39.su_family == 128)
    VAR_39.su_sin6.sin6_scope_id = 0;
   if (!FUNC_1((struct sockaddr *)&VAR_39, VAR_39.su_len,
     VAR_33, sizeof(VAR_33) - 1, ((void*)0), 0,
     VAR_2)) {
    VAR_33[sizeof(VAR_33) - 1] = 0;
    FUNC_4("     %s |%d|%s|%d|\r\n",
     VAR_34 ? "EPSV" : "EPRT",
     VAR_38, VAR_33, FUNC_2(VAR_39.su_port));
   }
  }
     }

 } else
  FUNC_4("     No data connection\r\n");
 FUNC_5(211, "End of status.");
}
