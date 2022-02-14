
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mf_flags; int mf_mount; TYPE_1__* mf_ops; int mf_info; scalar_t__ mf_error; } ;
typedef TYPE_2__ mntfs ;
typedef int bool_t ;
struct TYPE_5__ {int fs_type; int (* mounted ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,char*,char*,int ,char*,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,char) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(mntfs *VAR_3, bool_t VAR_4)
{
  int VAR_5;
  int VAR_6 = VAR_3->mf_flags & VAR_0;

  if (!VAR_6) {





    VAR_3->mf_flags |= VAR_0;
    VAR_3->mf_error = 0;




    if (VAR_3->mf_ops->mounted)
      VAR_3->mf_ops->mounted(VAR_3);







  }

  if (VAR_3->mf_flags & VAR_1) {
    VAR_3->mf_flags &= ~VAR_1;
    FUNC_0("Restarted filesystem %s, flags 0x%x", VAR_3->mf_mount, VAR_3->mf_flags);
  }




  VAR_5 = FUNC_2(VAR_3->mf_info, ' ') != 0;
  FUNC_1(VAR_2, "%s%s%s %s fstype %s on %s",
       VAR_5 ? "\"" : "",
       VAR_3->mf_info,
       VAR_5 ? "\"" : "",
       VAR_6 ? "referenced" : "mounted",
       VAR_3->mf_ops->fs_type, VAR_3->mf_mount);
}
