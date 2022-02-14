
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
typedef scalar_t__ dev_t ;
struct TYPE_8__ {int st_mode; int st_size; void* st_rdev; void* st_dev; scalar_t__ st_nlink; void* st_mtime; void* st_atime; void* st_ctime; scalar_t__ st_gid; scalar_t__ st_uid; scalar_t__ st_ino; } ;
struct TYPE_10__ {long pad; int nlen; char* ln_name; TYPE_1__ sb; scalar_t__ ln_nlen; scalar_t__ crc; } ;
struct TYPE_9__ {int c_namesize; int c_chksum; int c_rmin; int c_rmaj; int c_min; int c_maj; int c_nlink; int c_filesize; int c_mtime; int c_gid; int c_uid; int c_mode; int c_ino; } ;
typedef TYPE_2__ HD_VCPIO ;
typedef TYPE_3__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__,scalar_t__) ;
 long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (char*,int) ;

int
FUNC_10(ARCHD *VAR_4, char *VAR_5)
{
 HD_VCPIO *VAR_6;
 dev_t VAR_7;
 dev_t VAR_8;
 int VAR_9;





 if (VAR_3) {
  if (FUNC_5(VAR_5, sizeof(HD_VCPIO)) < 0)
   return(-1);
 } else {
  if (FUNC_9(VAR_5, sizeof(HD_VCPIO)) < 0)
   return(-1);
 }

 VAR_6 = (HD_VCPIO *)VAR_5;
 VAR_4->pad = 0L;




 VAR_4->sb.st_ino = (ino_t)FUNC_2(VAR_6->c_ino, sizeof(VAR_6->c_ino), VAR_2);
 VAR_4->sb.st_mode = (mode_t)FUNC_2(VAR_6->c_mode, sizeof(VAR_6->c_mode), VAR_2);
 VAR_4->sb.st_uid = (uid_t)FUNC_2(VAR_6->c_uid, sizeof(VAR_6->c_uid), VAR_2);
 VAR_4->sb.st_gid = (gid_t)FUNC_2(VAR_6->c_gid, sizeof(VAR_6->c_gid), VAR_2);



 VAR_4->sb.st_mtime = (time_t)FUNC_3(VAR_6->c_mtime,sizeof(VAR_6->c_mtime),VAR_2);

 VAR_4->sb.st_ctime = VAR_4->sb.st_atime = VAR_4->sb.st_mtime;




 VAR_4->sb.st_size = (off_t)FUNC_3(VAR_6->c_filesize,
     sizeof(VAR_6->c_filesize), VAR_2);

 VAR_4->sb.st_nlink = (nlink_t)FUNC_2(VAR_6->c_nlink, sizeof(VAR_6->c_nlink),
     VAR_2);
 VAR_8 = (dev_t)FUNC_2(VAR_6->c_maj, sizeof(VAR_6->c_maj), VAR_2);
 VAR_7 = (dev_t)FUNC_2(VAR_6->c_min, sizeof(VAR_6->c_min), VAR_2);
 VAR_4->sb.st_dev = FUNC_0(VAR_8, VAR_7);
 VAR_8 = (dev_t)FUNC_2(VAR_6->c_rmaj, sizeof(VAR_6->c_maj), VAR_2);
 VAR_7 = (dev_t)FUNC_2(VAR_6->c_rmin, sizeof(VAR_6->c_min), VAR_2);
 VAR_4->sb.st_rdev = FUNC_0(VAR_8, VAR_7);
 VAR_4->crc = FUNC_2(VAR_6->c_chksum, sizeof(VAR_6->c_chksum), VAR_2);





 if ((VAR_9 = (int)FUNC_2(VAR_6->c_namesize,sizeof(VAR_6->c_namesize),VAR_2)) < 2)
  return(-1);
 VAR_4->nlen = VAR_9 - 1;
 if (FUNC_7(VAR_4, VAR_9) < 0)
  return(-1);




 if (FUNC_8((off_t)(FUNC_1(sizeof(HD_VCPIO) + VAR_9))) < 0)
  return(-1);





 if (((VAR_4->sb.st_mode&VAR_0) != VAR_1)||(VAR_4->sb.st_size == 0)) {



  VAR_4->ln_nlen = 0;
  VAR_4->ln_name[0] = '\0';
  VAR_4->pad = FUNC_1(VAR_4->sb.st_size);
  return(FUNC_4(VAR_4));
 }




 if ((FUNC_6(VAR_4) < 0) ||
     (FUNC_8((off_t)(FUNC_1(VAR_4->sb.st_size))) < 0))
  return(-1);




 return(FUNC_4(VAR_4));
}
