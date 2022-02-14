
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_atime; int st_mtime; int st_mode; int st_gid; int st_uid; } ;
struct TYPE_5__ {TYPE_1__ sb; int name; } ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*,int ) ;

void
FUNC_5(ARCHD *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 if (VAR_7 < 0)
  return;
 if (FUNC_0(VAR_7) < 0)
  FUNC_4(0, VAR_1, "Unable to close file descriptor on %s",
      VAR_6->name);






 if (VAR_3)
  VAR_8 = FUNC_2(VAR_6->name, VAR_6->sb.st_uid, VAR_6->sb.st_gid);






 if (!VAR_4 || VAR_8)
  VAR_6->sb.st_mode &= ~(VAR_0);
 if (VAR_4)
  FUNC_3(VAR_6->name, VAR_6->sb.st_mode);
 if (VAR_2 || VAR_5)
  FUNC_1(VAR_6->name, VAR_6->sb.st_mtime, VAR_6->sb.st_atime, 0);
}
