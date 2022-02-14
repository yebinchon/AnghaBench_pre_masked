
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uid_t ;
typedef int time_t ;
typedef int off_t ;
typedef void* nlink_t ;
typedef void* mode_t ;
typedef void* ino_t ;
typedef void* gid_t ;
typedef void* dev_t ;
struct TYPE_8__ {int st_mode; int st_mtime; int st_size; int st_ctime; int st_atime; void* st_rdev; void* st_nlink; void* st_gid; void* st_uid; void* st_ino; void* st_dev; } ;
struct TYPE_10__ {long pad; int nlen; char* ln_name; TYPE_1__ sb; scalar_t__ ln_nlen; } ;
struct TYPE_9__ {int h_namesize; int h_filesize_2; int h_filesize_1; int h_mtime_2; int h_mtime_1; int h_rdev; int h_nlink; int h_gid; int h_uid; int h_mode; int h_ino; int h_dev; } ;
typedef TYPE_2__ HD_BCPIO ;
typedef TYPE_3__ ARCHD ;


 long FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_2 ;

int
FUNC_8(ARCHD *VAR_3, char *VAR_4)
{
 HD_BCPIO *VAR_5;
 int VAR_6;




 if (FUNC_3(VAR_4, sizeof(HD_BCPIO)) < 0)
  return(-1);

 VAR_3->pad = 0L;
 VAR_5 = (HD_BCPIO *)VAR_4;
 if (VAR_2) {



  VAR_3->sb.st_dev = (dev_t)(FUNC_1(VAR_5->h_dev));
  VAR_3->sb.st_ino = (ino_t)(FUNC_1(VAR_5->h_ino));
  VAR_3->sb.st_mode = (mode_t)(FUNC_1(VAR_5->h_mode));
  VAR_3->sb.st_uid = (uid_t)(FUNC_1(VAR_5->h_uid));
  VAR_3->sb.st_gid = (gid_t)(FUNC_1(VAR_5->h_gid));
  VAR_3->sb.st_nlink = (nlink_t)(FUNC_1(VAR_5->h_nlink));
  VAR_3->sb.st_rdev = (dev_t)(FUNC_1(VAR_5->h_rdev));
  VAR_3->sb.st_mtime = (time_t)(FUNC_1(VAR_5->h_mtime_1));
  VAR_3->sb.st_mtime = (VAR_3->sb.st_mtime << 16) |
   ((time_t)(FUNC_1(VAR_5->h_mtime_2)));
  VAR_3->sb.st_size = (off_t)(FUNC_1(VAR_5->h_filesize_1));
  VAR_3->sb.st_size = (VAR_3->sb.st_size << 16) |
   ((off_t)(FUNC_1(VAR_5->h_filesize_2)));
  VAR_6 = (int)(FUNC_1(VAR_5->h_namesize));
 } else {
  VAR_3->sb.st_dev = (dev_t)(FUNC_2(VAR_5->h_dev));
  VAR_3->sb.st_ino = (ino_t)(FUNC_2(VAR_5->h_ino));
  VAR_3->sb.st_mode = (mode_t)(FUNC_2(VAR_5->h_mode));
  VAR_3->sb.st_uid = (uid_t)(FUNC_2(VAR_5->h_uid));
  VAR_3->sb.st_gid = (gid_t)(FUNC_2(VAR_5->h_gid));
  VAR_3->sb.st_nlink = (nlink_t)(FUNC_2(VAR_5->h_nlink));
  VAR_3->sb.st_rdev = (dev_t)(FUNC_2(VAR_5->h_rdev));
  VAR_3->sb.st_mtime = (time_t)(FUNC_2(VAR_5->h_mtime_1));
  VAR_3->sb.st_mtime = (VAR_3->sb.st_mtime << 16) |
   ((time_t)(FUNC_2(VAR_5->h_mtime_2)));
  VAR_3->sb.st_size = (off_t)(FUNC_2(VAR_5->h_filesize_1));
  VAR_3->sb.st_size = (VAR_3->sb.st_size << 16) |
   ((off_t)(FUNC_2(VAR_5->h_filesize_2)));
  VAR_6 = (int)(FUNC_2(VAR_5->h_namesize));
 }
 VAR_3->sb.st_ctime = VAR_3->sb.st_atime = VAR_3->sb.st_mtime;





 if (VAR_6 < 2)
  return(-1);
 VAR_3->nlen = VAR_6 - 1;
 if (FUNC_6(VAR_3, VAR_6) < 0)
  return(-1);




 if (FUNC_7((off_t)(FUNC_0(sizeof(HD_BCPIO) + VAR_6))) < 0)
  return(-1);





 if (((VAR_3->sb.st_mode & VAR_0) != VAR_1)||(VAR_3->sb.st_size == 0)){



  VAR_3->ln_nlen = 0;
  VAR_3->ln_name[0] = '\0';
  VAR_3->pad = FUNC_0(VAR_3->sb.st_size);
  return(FUNC_4(VAR_3));
 }

 if ((FUNC_5(VAR_3) < 0) ||
     (FUNC_7((off_t)(FUNC_0(VAR_3->sb.st_size))) < 0))
  return(-1);




 return(FUNC_4(VAR_3));
}
