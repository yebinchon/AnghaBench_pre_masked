
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct utimbuf {int modtime; int actime; } ;
struct timeval {long tv_usec; int tv_sec; } ;
struct timespec {long tv_nsec; int tv_sec; } ;
struct _utimbuf {int modtime; int actime; } ;
typedef int mode_t ;
struct TYPE_14__ {long tv_nsec; } ;
struct TYPE_15__ {long tv_nsec; TYPE_5__ st__tim; } ;
struct TYPE_12__ {long tv_nsec; } ;
struct TYPE_13__ {long tv_nsec; TYPE_3__ st__tim; } ;
struct TYPE_11__ {long tv_nsec; } ;
struct TYPE_10__ {long tv_nsec; } ;
struct TYPE_16__ {int st_uid; int st_gid; int st_mode; long st_atimensec; long st_mtimensec; int st_uatime; int st_umtime; int st_mtime; int st_atime; TYPE_6__ st_mtim; TYPE_4__ st_atim; TYPE_2__ st_mtimespec; TYPE_1__ st_atimespec; } ;
struct TYPE_17__ {int dest_name; TYPE_7__ src_st; int dest_fd; } ;
typedef TYPE_8__ file_pair ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct _utimbuf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,struct timespec*) ;
 int FUNC_5 (int ,struct timeval*) ;
 int FUNC_6 (int ,int *,struct timeval*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct utimbuf*) ;
 int FUNC_10 (int ,struct timeval*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_11(const file_pair *VAR_2)
{
 if (FUNC_3(VAR_2->dest_fd, VAR_2->src_st.st_uid, -1) && VAR_1)
  FUNC_7(FUNC_0("%s: Cannot set the file owner: %s"),
    VAR_2->dest_name, FUNC_8(VAR_0));

 mode_t VAR_3;

 if (FUNC_3(VAR_2->dest_fd, -1, VAR_2->src_st.st_gid)) {
  FUNC_7(FUNC_0("%s: Cannot set the file group: %s"),
    VAR_2->dest_name, FUNC_8(VAR_0));
  VAR_3 = ((VAR_2->src_st.st_mode & 0070) >> 3)
    & (VAR_2->src_st.st_mode & 0007);
  VAR_3 = (VAR_2->src_st.st_mode & 0700) | (VAR_3 << 3) | VAR_3;
 } else {

  VAR_3 = VAR_2->src_st.st_mode & 0777;
 }

 if (FUNC_2(VAR_2->dest_fd, VAR_3))
  FUNC_7(FUNC_0("%s: Cannot set the file permissions: %s"),
    VAR_2->dest_name, FUNC_8(VAR_0));
 long VAR_4;
 long VAR_5;
 VAR_4 = 0;
 VAR_5 = 0;
 return;
}
