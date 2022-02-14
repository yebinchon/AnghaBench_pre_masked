
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int socklen_t ;
typedef int pasv_addr_ss ;
struct TYPE_12__ {int pw_uid; } ;
struct TYPE_11__ {int sa_family; } ;
struct TYPE_10__ {int sa_family; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_7 (int,char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 int FUNC_13 (int,int ,int ) ;
 int FUNC_14 (TYPE_1__*) ;

void
FUNC_15(char *VAR_6)
{
 socklen_t VAR_7;

 VAR_3 = FUNC_9(VAR_1->sa_family, VAR_0, 0);
 if (VAR_3 < 0) {
  FUNC_6(425, "Can't open passive connection");
  return;
 }
 VAR_2->sa_family = VAR_1->sa_family;
 FUNC_12 (VAR_2,
         FUNC_10 (VAR_1),
         0);
 FUNC_13(VAR_3, VAR_5,
     VAR_2->sa_family);
 if (FUNC_8(0) < 0)
  FUNC_2("Failed to seteuid");
 if (FUNC_0(VAR_3, VAR_2, FUNC_14 (VAR_2)) < 0) {
  if (FUNC_8(VAR_4->pw_uid))
   FUNC_2("Failed to seteuid");
  goto pasv_error;
 }
 if (FUNC_8(VAR_4->pw_uid) < 0)
  FUNC_2("Failed to seteuid");
 VAR_7 = sizeof(pasv_addr_ss);
 if (FUNC_3(VAR_3, VAR_2, &VAR_7) < 0)
  goto pasv_error;
 if (FUNC_4(VAR_3, 1) < 0)
  goto pasv_error;

 FUNC_7(229, "Entering Extended Passive Mode (|||%d|)",
       FUNC_5(FUNC_11 (VAR_2)));
 return;

pasv_error:
 FUNC_1(VAR_3);
 VAR_3 = -1;
 FUNC_6(425, "Can't open passive connection");
 return;
}
