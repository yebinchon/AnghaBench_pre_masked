
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct stat {int st_mode; scalar_t__ st_uid; scalar_t__ st_gid; scalar_t__ st_flags; struct timespec st_mtim; struct timespec st_atim; } ;
struct TYPE_2__ {int p_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 scalar_t__ FUNC_8 (int,struct timespec*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,struct stat*) ;
 scalar_t__ FUNC_13 (int ,struct stat*) ;
 TYPE_1__ VAR_10 ;
 scalar_t__ FUNC_14 (int ,int ,struct timespec*,int ) ;
 int FUNC_15 (char*,int ) ;

int
FUNC_16(struct stat *VAR_11, int VAR_12)
{
 static struct timespec VAR_13[2];
 struct stat VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_15 = 0;
 VAR_18 = VAR_12 != -1;
 VAR_17 = !VAR_18 && FUNC_0(VAR_11->st_mode);
 VAR_11->st_mode &= VAR_7 | VAR_6 | VAR_8 |
     VAR_5 | VAR_3 | VAR_4;

 VAR_13[0] = VAR_11->st_atim;
 VAR_13[1] = VAR_11->st_mtim;
 if (VAR_18 ? FUNC_8(VAR_12, VAR_13) : FUNC_14(VAR_0, VAR_10.p_path, VAR_13,
     VAR_17 ? VAR_1 : 0)) {
  FUNC_15("utimensat: %s", VAR_10.p_path);
  VAR_15 = 1;
 }
 if (VAR_18 ? FUNC_7(VAR_12, &VAR_14) :
     (VAR_17 ? FUNC_12(VAR_10.p_path, &VAR_14) : FUNC_13(VAR_10.p_path, &VAR_14)))
  VAR_16 = 0;
 else {
  VAR_16 = 1;
  VAR_14.st_mode &= VAR_7 | VAR_6 | VAR_8 |
      VAR_5 | VAR_3 | VAR_4;
 }






 if (!VAR_16 || VAR_11->st_uid != VAR_14.st_uid || VAR_11->st_gid != VAR_14.st_gid)
  if (VAR_18 ? FUNC_6(VAR_12, VAR_11->st_uid, VAR_11->st_gid) :
      (VAR_17 ? FUNC_11(VAR_10.p_path, VAR_11->st_uid, VAR_11->st_gid) :
      FUNC_3(VAR_10.p_path, VAR_11->st_uid, VAR_11->st_gid))) {
   if (VAR_9 != VAR_2) {
    FUNC_15("chown: %s", VAR_10.p_path);
    VAR_15 = 1;
   }
   VAR_11->st_mode &= ~(VAR_7 | VAR_6);
  }

 if (!VAR_16 || VAR_11->st_mode != VAR_14.st_mode)
  if (VAR_18 ? FUNC_5(VAR_12, VAR_11->st_mode) :
      (VAR_17 ? FUNC_10(VAR_10.p_path, VAR_11->st_mode) :
      FUNC_2(VAR_10.p_path, VAR_11->st_mode))) {
   FUNC_15("chmod: %s", VAR_10.p_path);
   VAR_15 = 1;
  }

 if (!VAR_16 || VAR_11->st_flags != VAR_14.st_flags)
  if (VAR_18 ?
      FUNC_4(VAR_12, VAR_11->st_flags) :
      (VAR_17 ? FUNC_9(VAR_10.p_path, VAR_11->st_flags) :
      FUNC_1(VAR_10.p_path, VAR_11->st_flags))) {
   FUNC_15("chflags: %s", VAR_10.p_path);
   VAR_15 = 1;
  }

 return (VAR_15);
}
