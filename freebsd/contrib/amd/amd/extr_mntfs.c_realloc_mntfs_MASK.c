
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mf_refc; int mf_flags; int mf_server; int * mf_ops; int mf_mount; } ;
typedef TYPE_1__ mntfs ;
typedef int am_opts ;
typedef int am_ops ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *,int *,char*,char*,char*,char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

mntfs *
FUNC_4(mntfs *VAR_3, am_ops *VAR_4, am_opts *VAR_5, char *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9, char *VAR_10)
{
  mntfs *VAR_11;

  if (VAR_3->mf_refc == 1 &&
      VAR_3->mf_flags & VAR_1 &&
      FUNC_1(VAR_3->mf_mount, VAR_6)) {




    return VAR_3;
  }





  if (VAR_3->mf_ops != &VAR_2 &&
      (VAR_3->mf_flags & VAR_0) &&
      !FUNC_0(VAR_3->mf_server)) {
    return VAR_3;
  }

  VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  FUNC_3(VAR_3);
  return VAR_11;
}
