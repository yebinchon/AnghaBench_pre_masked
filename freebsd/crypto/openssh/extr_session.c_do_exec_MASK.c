
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ssh {int dummy; } ;
typedef int session_type ;
struct TYPE_11__ {char* force_command; } ;
struct TYPE_10__ {char* adm_forced_command; } ;
struct TYPE_9__ {char* subsys; int ttyfd; char* tty; TYPE_1__* pw; int self; scalar_t__ is_subsystem; } ;
struct TYPE_8__ {char* pw_shell; int pw_name; } ;
typedef TYPE_2__ Session ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char const*) ;
 TYPE_7__* VAR_4 ;
 int FUNC_3 (struct ssh*,TYPE_2__*,char const*) ;
 int FUNC_4 (struct ssh*,TYPE_2__*,char const*) ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 char const* VAR_7 ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (struct ssh*) ;
 int FUNC_7 (struct ssh*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 int FUNC_10 (char*,char*,char*,char*,int ,int ,int ,int ) ;

int
FUNC_11(struct ssh *VAR_8, Session *VAR_9, const char *VAR_10)
{
 int VAR_11;
 const char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 char VAR_14[1024];

 if (VAR_6.adm_forced_command) {
  VAR_7 = VAR_10;
  VAR_10 = VAR_6.adm_forced_command;
  VAR_12 = "(config)";
 } else if (VAR_4->force_command != ((void*)0)) {
  VAR_7 = VAR_10;
  VAR_10 = VAR_4->force_command;
  VAR_12 = "(key-option)";
 }
 if (VAR_12 != ((void*)0)) {
  if (FUNC_0(VAR_10)) {
   VAR_9->is_subsystem = VAR_9->is_subsystem ?
       VAR_1 : VAR_2;
  } else if (VAR_9->is_subsystem)
   VAR_9->is_subsystem = VAR_0;
  FUNC_5(VAR_14, sizeof(VAR_14),
      "forced-command %s '%.900s'", VAR_12, VAR_10);
 } else if (VAR_9->is_subsystem) {
  FUNC_5(VAR_14, sizeof(VAR_14),
      "subsystem '%.900s'", VAR_9->subsys);
 } else if (VAR_10 == ((void*)0)) {
  FUNC_5(VAR_14, sizeof(VAR_14), "shell");
 } else {

  FUNC_5(VAR_14, sizeof(VAR_14), "command");
 }

 if (VAR_9->ttyfd != -1) {
  VAR_13 = VAR_9->tty;
  if (FUNC_9(VAR_13, "/dev/", 5) == 0)
   VAR_13 += 5;
 }

 FUNC_10("Starting session: %s%s%s for %s from %.200s port %d id %d",
     VAR_14,
     VAR_13 == ((void*)0) ? "" : " on ",
     VAR_13 == ((void*)0) ? "" : VAR_13,
     VAR_9->pw->pw_name,
     FUNC_6(VAR_8),
     FUNC_7(VAR_8),
     VAR_9->self);
 if (VAR_9->ttyfd != -1)
  VAR_11 = FUNC_4(VAR_8, VAR_9, VAR_10);
 else
  VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_10);

 VAR_7 = ((void*)0);






 FUNC_8(VAR_5);

 return VAR_11;
}
