
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_8__ {char* opt_rhost; char* opt_sublink; char* opt_fs; } ;
typedef TYPE_1__ am_opts ;
struct TYPE_10__ {char* (* fs_match ) (TYPE_1__*) ;} ;
struct TYPE_9__ {char* (* fs_match ) (TYPE_1__*) ;} ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_7__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 TYPE_5__ VAR_4 ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_7(am_opts *VAR_5)
{
  char *VAR_6;
  char *VAR_7 = VAR_5->opt_rhost;
  char *VAR_8;
  struct stat VAR_9;

  if (VAR_5->opt_sublink && VAR_5->opt_sublink[0])
    VAR_6 = VAR_5->opt_sublink;
  else
    VAR_6 = VAR_5->opt_fs;

  if (!VAR_6 || !VAR_7) {
    FUNC_3(VAR_1, "amfs_nfsl: host $fs and $rhost must be specified");
    return ((void*)0);
  }






  if (!FUNC_0(VAR_7, FUNC_1()) && !FUNC_0(VAR_7, VAR_3)) {
    FUNC_3(VAR_0, "amfs_nfsl: \"%s\" is not the local host \"%s\", "
 "or \"%s\" using type:=nfs", VAR_7, FUNC_1(), VAR_3);
    VAR_8 = VAR_4.fs_match(VAR_5);
  } else if (FUNC_2(VAR_6, &VAR_9) < 0) {
    FUNC_3(VAR_0, "amfs_nfsl: \"%s\" does not exist, using type:=nfs", VAR_6);
    VAR_8 = VAR_4.fs_match(VAR_5);
  } else {
    FUNC_3(VAR_0, "amfs_nfsl: \"%s\" exists, using type:=link", VAR_6);
    VAR_8 = VAR_2.fs_match(VAR_5);
  }
  return VAR_8;
}
