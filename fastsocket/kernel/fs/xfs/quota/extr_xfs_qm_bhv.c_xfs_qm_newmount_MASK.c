
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int sb_qflags; } ;
struct TYPE_13__ {int m_qflags; TYPE_3__ m_sb; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_1__*,char*,char*,char*,char*,char*) ;

int
FUNC_11(
 xfs_mount_t *VAR_6,
 uint *VAR_7,
 uint *VAR_8)
{
 uint VAR_9;
 uint VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 VAR_9 = FUNC_9(&VAR_6->m_sb) &&
    (VAR_6->m_sb.sb_qflags & VAR_2);

 if (VAR_9) {
  VAR_10 = VAR_6->m_sb.sb_qflags & VAR_5;
  VAR_12 = VAR_6->m_sb.sb_qflags & VAR_4;
  VAR_11 = VAR_6->m_sb.sb_qflags & VAR_3;
 }
 if (((VAR_10 && !FUNC_5(VAR_6)) ||
     (!VAR_10 && FUNC_5(VAR_6)) ||
      (VAR_12 && !FUNC_3(VAR_6)) ||
     (!VAR_12 && FUNC_3(VAR_6)) ||
      (VAR_11 && !FUNC_1(VAR_6)) ||
     (!VAR_11 && FUNC_2(VAR_6))) &&
     FUNC_7(VAR_6, "changing quota state")) {
  FUNC_10(VAR_6, "please mount with%s%s%s%s.",
   (!VAR_9 ? "out quota" : ""),
   (VAR_10 ? " usrquota" : ""),
   (VAR_12 ? " prjquota" : ""),
   (VAR_11 ? " grpquota" : ""));
  return FUNC_0(VAR_1);
 }

 if (FUNC_4(VAR_6) || VAR_9) {




  if (VAR_9 && !FUNC_6(VAR_6)) {






   FUNC_8(VAR_6);
  } else {







   *VAR_7 = VAR_0;
   *VAR_8 = VAR_6->m_qflags;
   VAR_6->m_qflags = 0;
  }
 }

 return 0;
}
