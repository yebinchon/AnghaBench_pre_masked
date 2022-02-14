
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int data_addr ;
struct TYPE_6__ {int pw_name; } ;
struct TYPE_5__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int * FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_10 ;
 char* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char*,int ,char*,...) ;
 int FUNC_14 (int ,char*) ;

void
FUNC_15(char *VAR_13)
{
 int VAR_14;


 if (VAR_7 && VAR_2 == 0){
     FUNC_9(230, "Password not necessary");
     return;
 }

 if (VAR_7 || VAR_2 == 0) {
  FUNC_9(503, "Login with USER first.");
  return;
 }
 VAR_2 = 0;
 VAR_14 = 1;
 if (!VAR_5) {
  if (VAR_11 == ((void*)0))
   VAR_14 = 1;





  else if((VAR_3 & VAR_0) == 0) {



      if (VAR_14)
   VAR_14 = FUNC_14(VAR_11->pw_name, VAR_13);
  } else {





  }
  FUNC_6 (VAR_13, 0, FUNC_12(VAR_13));






  if (VAR_14) {
   char VAR_15[256];

   if (FUNC_3 (VAR_6->sa_family,
           FUNC_10(VAR_6),
           VAR_15, sizeof(VAR_15)) == ((void*)0))
    FUNC_11 (VAR_15, "unknown address",
       sizeof(VAR_15));

   FUNC_9(530, "Login incorrect.");
   if (VAR_8)
    FUNC_13(VAR_1,
        "FTP LOGIN FAILED FROM %s(%s), %s",
           VAR_12,
           VAR_15,
           VAR_4);
   VAR_11 = ((void*)0);
   if (VAR_9++ >= 5) {
    FUNC_13(VAR_1,
           "repeated login failures from %s(%s)",
           VAR_12,
           VAR_15);
    FUNC_2(0);
   }
   return;
  }
 }
 if(!FUNC_0(230, VAR_13))
   return;


 FUNC_1();
}
