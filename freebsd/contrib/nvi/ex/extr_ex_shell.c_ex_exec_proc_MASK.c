
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_23__ {TYPE_1__* cmd; } ;
struct TYPE_22__ {int (* scr_child ) (TYPE_2__*) ;int (* scr_attr ) (TYPE_2__*,int ,int ) ;scalar_t__ (* scr_screen ) (TYPE_2__*,int ) ;} ;
struct TYPE_21__ {TYPE_3__* gp; } ;
struct TYPE_20__ {int name; } ;
typedef TYPE_2__ SCR ;
typedef TYPE_3__ GS ;
typedef TYPE_4__ EXCMD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char const*) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (char*,char const*,char*,char*,char*) ;
 int FUNC_8 (TYPE_2__*,int ,char*) ;
 int FUNC_9 (TYPE_2__*,int ,char*,char*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int ) ;
 int FUNC_11 (TYPE_2__*,long,char*,int ,int ) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 () ;

int
FUNC_17(SCR *VAR_8, EXCMD *VAR_9, char *VAR_10, const char *VAR_11, int VAR_12)
{
 GS *VAR_13;
 const char *VAR_14;
 pid_t VAR_15;

 VAR_13 = VAR_8->gp;


 if (FUNC_10(VAR_8, VAR_2, 0))
  return (1);


 if (FUNC_0(VAR_8, VAR_7)) {
  if (VAR_13->scr_screen(VAR_8, VAR_4)) {
   FUNC_6(VAR_8, VAR_9->cmd->name, VAR_0);
   return (1);
  }
  (void)VAR_13->scr_attr(VAR_8, VAR_3, 0);
  FUNC_1(VAR_8, VAR_5 | VAR_6);
 }


 if (VAR_12)
  (void)FUNC_5(VAR_8, "\n");
 if (VAR_11 != ((void*)0)) {
  (void)FUNC_5(VAR_8, VAR_11);
  (void)FUNC_5(VAR_8, "\n");
 }
 (void)FUNC_4(VAR_8);

 switch (VAR_15 = FUNC_16()) {
 case -1:
  FUNC_8(VAR_8, VAR_1, "vfork");
  return (1);
 case 0:
  if (VAR_13->scr_child)
   VAR_13->scr_child(VAR_8);
  if ((VAR_14 = FUNC_12(FUNC_2(VAR_8, VAR_2), '/')) == ((void*)0))
   VAR_14 = FUNC_2(VAR_8, VAR_2);
  else
   ++VAR_14;
  FUNC_7(FUNC_2(VAR_8, VAR_2), VAR_14, "-c", VAR_10, (char *)((void*)0));
  FUNC_9(VAR_8, VAR_1, FUNC_2(VAR_8, VAR_2), "execl: %s");
  FUNC_3(127);

 default:
  return (FUNC_11(VAR_8, (long)VAR_15, VAR_10, 0, 0));
 }

}
