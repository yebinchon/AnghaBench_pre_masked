
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* opt_fs; char* opt_sublink; } ;
typedef TYPE_1__ am_opts ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int *,char*,char*,char*) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(am_opts *VAR_1)
{

  if (!VAR_1->opt_fs) {
    FUNC_1(VAR_0, "link: no fs specified");
    return 0;
  }
  if (VAR_1->opt_fs[0] == '/') {
    char *VAR_2 = FUNC_2(((void*)0), ".", VAR_1->opt_fs, "");
    if (VAR_1->opt_sublink == ((void*)0) || VAR_1->opt_sublink[0] == '\0')
      VAR_1->opt_sublink = FUNC_3(VAR_1->opt_fs);
    FUNC_0(VAR_1->opt_fs);
    VAR_1->opt_fs = VAR_2;
  }

  return FUNC_3(VAR_1->opt_fs);
}
