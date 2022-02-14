
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u_long ;
typedef int time_t ;
typedef int off_t ;
typedef scalar_t__ nlink_t ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ gid_t ;
typedef scalar_t__ dev_t ;
struct TYPE_6__ {scalar_t__ st_rdev; int st_size; int st_dev; int st_ino; int st_mode; int st_uid; int st_gid; int st_nlink; int st_mtime; } ;
struct TYPE_8__ {int type; long pad; int ln_nlen; int nlen; char* name; char* ln_name; int org_name; TYPE_1__ sb; } ;
struct TYPE_7__ {char* h_filesize_1; char* h_filesize_2; char* h_dev; char* h_ino; char* h_mode; char* h_uid; char* h_gid; char* h_nlink; char* h_rdev; char* h_mtime_1; char* h_mtime_2; char* h_namesize; void** h_magic; } ;
typedef TYPE_2__ HD_BCPIO ;
typedef TYPE_3__ ARCHD ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (int,char*,int ) ;
 scalar_t__ FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (int) ;

int
FUNC_10(ARCHD *VAR_4)
{
 HD_BCPIO *VAR_5;
 int VAR_6;
 HD_BCPIO VAR_7;
 off_t VAR_8;
 int VAR_9;
 time_t VAR_10;





 if (FUNC_6(VAR_4, (u_long)VAR_0, (u_long)VAR_0) < 0)
  return(-1);

 if ((VAR_4->type != VAR_2) && (VAR_4->type != VAR_3))
  VAR_4->sb.st_rdev = 0;
 VAR_5 = &VAR_7;

 switch(VAR_4->type) {
 case 131:
 case 129:
 case 130:




  VAR_4->pad = FUNC_0(VAR_4->sb.st_size);
  VAR_5->h_filesize_1[0] = FUNC_1(VAR_4->sb.st_size);
  VAR_5->h_filesize_1[1] = FUNC_2(VAR_4->sb.st_size);
  VAR_5->h_filesize_2[0] = FUNC_3(VAR_4->sb.st_size);
  VAR_5->h_filesize_2[1] = FUNC_4(VAR_4->sb.st_size);
  VAR_8 = (off_t)(FUNC_5(VAR_5->h_filesize_1));
  VAR_8 = (VAR_8<<16) | ((off_t)(FUNC_5(VAR_5->h_filesize_2)));
  if (VAR_4->sb.st_size != VAR_8) {
   FUNC_7(1,"File is too large for bcpio format %s",
       VAR_4->org_name);
   return(1);
  }
  break;
 case 128:




  VAR_4->pad = 0L;
  VAR_5->h_filesize_1[0] = FUNC_1(VAR_4->ln_nlen);
  VAR_5->h_filesize_1[1] = FUNC_2(VAR_4->ln_nlen);
  VAR_5->h_filesize_2[0] = FUNC_3(VAR_4->ln_nlen);
  VAR_5->h_filesize_2[1] = FUNC_4(VAR_4->ln_nlen);
  VAR_9 = (int)(FUNC_5(VAR_5->h_filesize_1));
  VAR_9 = (VAR_9 << 16) | ((int)(FUNC_5(VAR_5->h_filesize_2)));
  if (VAR_4->ln_nlen != VAR_9)
   goto out;
  break;
 default:



  VAR_4->pad = 0L;
  VAR_5->h_filesize_1[0] = (char)0;
  VAR_5->h_filesize_1[1] = (char)0;
  VAR_5->h_filesize_2[0] = (char)0;
  VAR_5->h_filesize_2[1] = (char)0;
  break;
 }




 VAR_5->h_magic[0] = FUNC_3(VAR_1);
 VAR_5->h_magic[1] = FUNC_4(VAR_1);
 VAR_5->h_dev[0] = FUNC_3(VAR_4->sb.st_dev);
 VAR_5->h_dev[1] = FUNC_4(VAR_4->sb.st_dev);
 if (VAR_4->sb.st_dev != (dev_t)(FUNC_5(VAR_5->h_dev)))
  goto out;
 VAR_5->h_ino[0] = FUNC_3(VAR_4->sb.st_ino);
 VAR_5->h_ino[1] = FUNC_4(VAR_4->sb.st_ino);
 if (VAR_4->sb.st_ino != (ino_t)(FUNC_5(VAR_5->h_ino)))
  goto out;
 VAR_5->h_mode[0] = FUNC_3(VAR_4->sb.st_mode);
 VAR_5->h_mode[1] = FUNC_4(VAR_4->sb.st_mode);
 if (VAR_4->sb.st_mode != (mode_t)(FUNC_5(VAR_5->h_mode)))
  goto out;
 VAR_5->h_uid[0] = FUNC_3(VAR_4->sb.st_uid);
 VAR_5->h_uid[1] = FUNC_4(VAR_4->sb.st_uid);
 if (VAR_4->sb.st_uid != (uid_t)(FUNC_5(VAR_5->h_uid)))
  goto out;
 VAR_5->h_gid[0] = FUNC_3(VAR_4->sb.st_gid);
 VAR_5->h_gid[1] = FUNC_4(VAR_4->sb.st_gid);
 if (VAR_4->sb.st_gid != (gid_t)(FUNC_5(VAR_5->h_gid)))
  goto out;
 VAR_5->h_nlink[0] = FUNC_3(VAR_4->sb.st_nlink);
 VAR_5->h_nlink[1] = FUNC_4(VAR_4->sb.st_nlink);
 if (VAR_4->sb.st_nlink != (nlink_t)(FUNC_5(VAR_5->h_nlink)))
  goto out;
 VAR_5->h_rdev[0] = FUNC_3(VAR_4->sb.st_rdev);
 VAR_5->h_rdev[1] = FUNC_4(VAR_4->sb.st_rdev);
 if (VAR_4->sb.st_rdev != (dev_t)(FUNC_5(VAR_5->h_rdev)))
  goto out;
 VAR_5->h_mtime_1[0] = FUNC_1(VAR_4->sb.st_mtime);
 VAR_5->h_mtime_1[1] = FUNC_2(VAR_4->sb.st_mtime);
 VAR_5->h_mtime_2[0] = FUNC_3(VAR_4->sb.st_mtime);
 VAR_5->h_mtime_2[1] = FUNC_4(VAR_4->sb.st_mtime);
 VAR_10 = (time_t)(FUNC_5(VAR_5->h_mtime_1));
 VAR_10 = (VAR_10 << 16) | ((time_t)(FUNC_5(VAR_5->h_mtime_2)));
 if (VAR_4->sb.st_mtime != VAR_10)
  goto out;
 VAR_6 = VAR_4->nlen + 1;
 VAR_5->h_namesize[0] = FUNC_3(VAR_6);
 VAR_5->h_namesize[1] = FUNC_4(VAR_6);
 if (VAR_6 != (int)(FUNC_5(VAR_5->h_namesize)))
  goto out;




 if ((FUNC_8((char *)&VAR_7, (int)sizeof(HD_BCPIO)) < 0) ||
     (FUNC_8(VAR_4->name, VAR_6) < 0) ||
     (FUNC_9((off_t)(FUNC_0(sizeof(HD_BCPIO) + VAR_6))) < 0)) {
  FUNC_7(1, "Could not write bcpio header for %s", VAR_4->org_name);
  return(-1);
 }




 if ((VAR_4->type == 131) || (VAR_4->type == 129) ||
     (VAR_4->type == 130))
  return(0);




 if (VAR_4->type != 128)
  return(1);




 if ((FUNC_8(VAR_4->ln_name, VAR_4->ln_nlen) < 0) ||
     (FUNC_9((off_t)(FUNC_0(VAR_4->ln_nlen))) < 0)) {
  FUNC_7(1,"Could not write bcpio link name for %s",VAR_4->org_name);
  return(-1);
 }
 return(1);

    out:



 FUNC_7(1,"Bcpio header field is too small for file %s", VAR_4->org_name);
 return(1);
}
