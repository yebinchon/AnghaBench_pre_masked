
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opt_dev; int opt_fs; } ;
typedef TYPE_1__ am_opts ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static char *
FUNC_3(am_opts *VAR_1)
{

  if (!VAR_1->opt_dev) {
    FUNC_1(VAR_0, "efs: no device specified");
    return 0;
  }

  FUNC_0("EFS: mounting device \"%s\" on \"%s\"", VAR_1->opt_dev, VAR_1->opt_fs);




  return FUNC_2(VAR_1->opt_dev);
}
