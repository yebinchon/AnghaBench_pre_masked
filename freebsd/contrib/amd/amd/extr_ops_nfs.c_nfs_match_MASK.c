
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ opt_fs; scalar_t__ opt_rfs; scalar_t__ opt_rhost; } ;
typedef TYPE_1__ am_opts ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static char *
FUNC_5(am_opts *VAR_1)
{
  char *VAR_2;
  size_t VAR_3;

  if (VAR_1->opt_fs && !VAR_1->opt_rfs)
    VAR_1->opt_rfs = VAR_1->opt_fs;
  if (!VAR_1->opt_rfs) {
    FUNC_1(VAR_0, "nfs: no remote filesystem specified");
    return ((void*)0);
  }
  if (!VAR_1->opt_rhost) {
    FUNC_1(VAR_0, "nfs: no remote host specified");
    return ((void*)0);
  }




  VAR_3 = FUNC_2(VAR_1->opt_rhost) + FUNC_2(VAR_1->opt_rfs) + 2;
  VAR_2 = (char *) FUNC_3(VAR_3);
  FUNC_4(VAR_2, VAR_3, "%s:%s", VAR_1->opt_rhost, VAR_1->opt_rfs);
  FUNC_0("NFS: mounting remote server \"%s\", remote fs \"%s\" on \"%s\"",
       VAR_1->opt_rhost, VAR_1->opt_rfs, VAR_1->opt_fs);

  return VAR_2;
}
