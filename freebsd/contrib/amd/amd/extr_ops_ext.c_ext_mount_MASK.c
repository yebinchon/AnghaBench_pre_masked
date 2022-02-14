
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mf_flags; int mf_mopts; int mf_info; int mf_mount; } ;
typedef TYPE_1__ mntfs ;
typedef int am_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,char*,char const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(am_node *VAR_3, mntfs *VAR_4, char *VAR_5,
  const char *VAR_6)
{
  int VAR_7 = VAR_4->mf_flags & VAR_0;
  int VAR_8;

  VAR_8 = FUNC_0(VAR_4->mf_mount, VAR_4->mf_info, VAR_4->mf_mopts, VAR_7,
      VAR_5, VAR_6);
  if (VAR_8) {
    VAR_2 = VAR_8;
    FUNC_1(VAR_1, "mount_ext: %m");
    return VAR_8;
  }

  return 0;
}
