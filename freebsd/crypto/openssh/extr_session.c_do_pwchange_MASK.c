
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ttyfd; TYPE_1__* pw; } ;
struct TYPE_4__ {int pw_name; } ;
typedef TYPE_2__ Session ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(Session *VAR_2)
{
 FUNC_2(((void*)0));
 FUNC_3(VAR_1, "WARNING: Your password has expired.\n");
 if (VAR_2->ttyfd != -1) {
  FUNC_3(VAR_1,
      "You must change your password now and login again!\n");







  FUNC_0(VAR_0, "passwd", (char *)((void*)0));

  FUNC_4("passwd");
 } else {
  FUNC_3(VAR_1,
      "Password change required but no TTY available.\n");
 }
 FUNC_1(1);
}
