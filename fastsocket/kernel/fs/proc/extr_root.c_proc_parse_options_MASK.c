
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ from; scalar_t__ to; } ;
typedef TYPE_1__ substring_t ;
struct pid_namespace {int pid_gid; int hide_pid; } ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (char*,int ,TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(char *VAR_2, struct pid_namespace *VAR_3)
{
 char *VAR_4;
 substring_t VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  return 1;

 while ((VAR_4 = FUNC_3(&VAR_2, ",")) != ((void*)0)) {
  int VAR_7;
  if (!*VAR_4)
   continue;

  VAR_5[0].to = VAR_5[0].from = 0;
  VAR_7 = FUNC_1(VAR_4, VAR_1, VAR_5);
  switch (VAR_7) {
  case 129:
   if (FUNC_0(&VAR_5[0], &VAR_6))
    return 0;
   VAR_3->pid_gid = VAR_6;
   break;
  case 128:
   if (FUNC_0(&VAR_5[0], &VAR_6))
    return 0;
   if (VAR_6 < 0 || VAR_6 > 2) {
    FUNC_2("proc: hidepid value must be between 0 and 2.\n");
    return 0;
   }
   VAR_3->hide_pid = VAR_6;
   break;
  default:
   FUNC_2("proc: unrecognized mount option \"%s\" "
          "or missing value\n", VAR_4);
   return 0;
  }
 }

 return 1;
}
