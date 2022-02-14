
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* opt_mount; scalar_t__ opt_unmount; int opt_fs; scalar_t__ opt_umount; } ;
typedef TYPE_1__ am_opts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int *,int ,char*,int ) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(am_opts *VAR_3)
{
  char *VAR_4;

  if (VAR_3->opt_unmount && VAR_3->opt_umount) {
    FUNC_0(VAR_1, "program: cannot specify both unmount and umount options");
    return 0;
  }
  if (!VAR_3->opt_mount) {
    FUNC_0(VAR_1, "program: must specify mount command");
    return 0;
  }
  if (!VAR_3->opt_unmount && !VAR_3->opt_umount) {
    VAR_3->opt_unmount = FUNC_1(((void*)0), VAR_0, " umount ", VAR_3->opt_fs);
    FUNC_0(VAR_2, "program: un/umount not specified; using default \"%s\"",
  VAR_3->opt_unmount);
  }
  VAR_4 = FUNC_2(VAR_3->opt_mount, ' ');

  return FUNC_3(VAR_4 ? VAR_4 + 1 : VAR_3->opt_mount);
}
