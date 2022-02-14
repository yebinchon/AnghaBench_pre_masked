
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef void* time_t ;
typedef void* off_t ;
typedef scalar_t__ nlink_t ;
typedef int mode_t ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ gid_t ;
typedef void* dev_t ;
struct TYPE_8__ {int st_mode; scalar_t__ st_size; void* st_mtime; void* st_atime; void* st_ctime; void* st_rdev; scalar_t__ st_nlink; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_ino; void* st_dev; } ;
struct TYPE_10__ {long pad; int nlen; char* ln_name; scalar_t__ ln_nlen; TYPE_1__ sb; } ;
struct TYPE_9__ {int c_namesize; int c_filesize; int c_mtime; int c_rdev; int c_nlink; int c_gid; int c_uid; int c_mode; int c_ino; int c_dev; } ;
typedef TYPE_2__ HD_CPIO ;
typedef TYPE_3__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int) ;

int
FUNC_6(ARCHD *VAR_3, char *VAR_4)
{
 int VAR_5;
 HD_CPIO *VAR_6;




 if (FUNC_3(VAR_4, sizeof(HD_CPIO)) < 0)
  return(-1);
 VAR_6 = (HD_CPIO *)VAR_4;





 VAR_3->pad = 0L;
 VAR_3->sb.st_dev = (dev_t)FUNC_0(VAR_6->c_dev, sizeof(VAR_6->c_dev), VAR_2);
 VAR_3->sb.st_ino = (ino_t)FUNC_0(VAR_6->c_ino, sizeof(VAR_6->c_ino), VAR_2);
 VAR_3->sb.st_mode = (mode_t)FUNC_0(VAR_6->c_mode, sizeof(VAR_6->c_mode), VAR_2);
 VAR_3->sb.st_uid = (uid_t)FUNC_0(VAR_6->c_uid, sizeof(VAR_6->c_uid), VAR_2);
 VAR_3->sb.st_gid = (gid_t)FUNC_0(VAR_6->c_gid, sizeof(VAR_6->c_gid), VAR_2);
 VAR_3->sb.st_nlink = (nlink_t)FUNC_0(VAR_6->c_nlink, sizeof(VAR_6->c_nlink),
     VAR_2);
 VAR_3->sb.st_rdev = (dev_t)FUNC_0(VAR_6->c_rdev, sizeof(VAR_6->c_rdev), VAR_2);




 VAR_3->sb.st_mtime = (time_t)FUNC_1(VAR_6->c_mtime, sizeof(VAR_6->c_mtime),
     VAR_2);

 VAR_3->sb.st_ctime = VAR_3->sb.st_atime = VAR_3->sb.st_mtime;




 VAR_3->sb.st_size = (off_t)FUNC_1(VAR_6->c_filesize,sizeof(VAR_6->c_filesize),
     VAR_2);






 if ((VAR_5 = (int)FUNC_0(VAR_6->c_namesize,sizeof(VAR_6->c_namesize),VAR_2)) < 2)
  return(-1);
 VAR_3->nlen = VAR_5 - 1;
 if (FUNC_5(VAR_3, VAR_5) < 0)
  return(-1);

 if (((VAR_3->sb.st_mode&VAR_0) != VAR_1)||(VAR_3->sb.st_size == 0)) {



  VAR_3->ln_nlen = 0;
  VAR_3->ln_name[0] = '\0';
  return(FUNC_2(VAR_3));
 }





 if (FUNC_4(VAR_3) < 0)
  return(-1);




 return(FUNC_2(VAR_3));
}
