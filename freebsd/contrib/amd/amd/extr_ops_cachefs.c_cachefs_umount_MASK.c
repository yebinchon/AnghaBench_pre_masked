
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mf_flags; scalar_t__ mf_private; int mf_mount; } ;
typedef TYPE_1__ mntfs ;
typedef int cmd ;
typedef int am_node ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_4(am_node *VAR_4, mntfs *VAR_5)
{
  int VAR_6 = (VAR_5->mf_flags & VAR_1) ? VAR_0 : 0;
  int VAR_7;

  VAR_7 = FUNC_0(VAR_5->mf_mount, VAR_3, VAR_6);
  if (!VAR_7) {
    char *VAR_8 = ((void*)0);
    char VAR_9[128];

    VAR_8 = (char *) VAR_5->mf_private;
    FUNC_1(VAR_2, "running fsck on cache directory \"%s\"", VAR_8);
    FUNC_3(VAR_9, sizeof(VAR_9), "fsck -F cachefs %s", VAR_8);
    FUNC_2(VAR_9);
  }

  return VAR_7;
}
