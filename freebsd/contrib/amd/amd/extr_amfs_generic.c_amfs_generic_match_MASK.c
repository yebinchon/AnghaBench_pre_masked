
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* opt_rfs; char* opt_fs; } ;
typedef TYPE_1__ am_opts ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;

char *
FUNC_2(am_opts *VAR_1)
{
  char *VAR_2;

  if (!VAR_1->opt_rfs) {
    FUNC_0(VAR_0, "amfs_generic_match: no mount point named (rfs:=)");
    return 0;
  }
  if (!VAR_1->opt_fs) {
    FUNC_0(VAR_0, "amfs_generic_match: no map named (fs:=)");
    return 0;
  }





  VAR_2 = VAR_1->opt_rfs;
  VAR_1->opt_rfs = VAR_1->opt_fs;
  VAR_1->opt_fs = VAR_2;




  return FUNC_1(VAR_1->opt_rfs ? VAR_1->opt_rfs : ".");
}
