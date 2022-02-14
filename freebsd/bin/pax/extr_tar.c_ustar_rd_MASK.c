
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uid_t ;
typedef void* time_t ;
typedef void* off_t ;
typedef scalar_t__ mode_t ;
typedef int gid_t ;
typedef scalar_t__ dev_t ;
struct TYPE_5__ {int st_nlink; scalar_t__ st_mode; void* st_size; scalar_t__ st_rdev; int st_uid; int st_gid; void* st_mtime; void* st_atime; void* st_ctime; } ;
struct TYPE_7__ {char* org_name; char* name; int nlen; char* ln_name; int ln_nlen; TYPE_1__ sb; void* skip; scalar_t__ pad; int type; int * pat; } ;
struct TYPE_6__ {char* prefix; char* name; char* gname; char* uname; int typeflag; char* linkname; int devminor; int devmajor; int uid; int gid; int mtime; int size; int mode; } ;
typedef TYPE_2__ HD_USTAR ;
typedef TYPE_3__ ARCHD ;



 int VAR_0 ;






 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int FUNC_6 (char*,char*,int ) ;
 scalar_t__ FUNC_7 (char*,int *) ;
 scalar_t__ FUNC_8 (char*,int ) ;

int
FUNC_9(ARCHD *VAR_15, char *VAR_16)
{
 HD_USTAR *VAR_17;
 char *VAR_18;
 int VAR_19 = 0;
 dev_t VAR_20;
 dev_t VAR_21;




 if (FUNC_8(VAR_16, VAR_0) < 0)
  return(-1);
 VAR_15->org_name = VAR_15->name;
 VAR_15->sb.st_nlink = 1;
 VAR_15->pat = ((void*)0);
 VAR_15->nlen = 0;
 VAR_17 = (HD_USTAR *)VAR_16;





 VAR_18 = VAR_15->name;
 if (*(VAR_17->prefix) != '\0') {
  VAR_19 = FUNC_6(VAR_18, VAR_17->prefix,
      FUNC_0(sizeof(VAR_17->prefix), sizeof(VAR_15->name) - 2));
  VAR_18 += VAR_19;
  *VAR_18++ = '/';
  VAR_19++;
 }





 VAR_15->nlen = VAR_19 + FUNC_6(VAR_18, VAR_17->name,
     FUNC_0(sizeof(VAR_17->name), sizeof(VAR_15->name) - VAR_19 - 1));
 VAR_15->name[VAR_15->nlen] = '\0';





 VAR_15->sb.st_mode = (mode_t)(FUNC_3(VAR_17->mode, sizeof(VAR_17->mode), VAR_1) &
     0xfff);




 VAR_15->sb.st_size = (off_t)FUNC_4(VAR_17->size, sizeof(VAR_17->size), VAR_1);
 VAR_15->sb.st_mtime = (time_t)FUNC_4(VAR_17->mtime, sizeof(VAR_17->mtime), VAR_1);

 VAR_15->sb.st_ctime = VAR_15->sb.st_atime = VAR_15->sb.st_mtime;







 VAR_17->gname[sizeof(VAR_17->gname) - 1] = '\0';
 if (FUNC_5(VAR_17->gname, &(VAR_15->sb.st_gid)) < 0)
  VAR_15->sb.st_gid = (gid_t)FUNC_3(VAR_17->gid, sizeof(VAR_17->gid), VAR_1);
 VAR_17->uname[sizeof(VAR_17->uname) - 1] = '\0';
 if (FUNC_7(VAR_17->uname, &(VAR_15->sb.st_uid)) < 0)
  VAR_15->sb.st_uid = (uid_t)FUNC_3(VAR_17->uid, sizeof(VAR_17->uid), VAR_1);




 VAR_15->ln_name[0] = '\0';
 VAR_15->ln_nlen = 0;
 VAR_15->pad = 0;
 VAR_15->skip = 0;
 VAR_15->sb.st_rdev = (dev_t)0;




 switch(VAR_17->typeflag) {
 case 131:
  VAR_15->type = VAR_5;
  VAR_15->sb.st_mode |= VAR_12;
  break;
 case 132:
  VAR_15->type = VAR_4;
  VAR_15->sb.st_mode |= VAR_11;
  VAR_15->sb.st_nlink = 2;






  if (VAR_15->name[VAR_15->nlen - 1] == '/')
   VAR_15->name[--VAR_15->nlen] = '\0';
  break;
 case 135:
 case 134:



  if (VAR_17->typeflag == 135) {
   VAR_15->type = VAR_2;
   VAR_15->sb.st_mode |= VAR_9;
  } else {
   VAR_15->type = VAR_3;
   VAR_15->sb.st_mode |= VAR_10;
  }
  VAR_20 = (dev_t)FUNC_3(VAR_17->devmajor,sizeof(VAR_17->devmajor),VAR_1);
  VAR_21 = (dev_t)FUNC_3(VAR_17->devminor,sizeof(VAR_17->devminor),VAR_1);
  VAR_15->sb.st_rdev = FUNC_2(VAR_20, VAR_21);
  break;
 case 128:
 case 130:
  if (VAR_17->typeflag == 128) {
   VAR_15->type = VAR_8;
   VAR_15->sb.st_mode |= VAR_13;
  } else {
   VAR_15->type = VAR_6;



   VAR_15->sb.st_mode |= VAR_14;
   VAR_15->sb.st_nlink = 2;
  }



  VAR_15->ln_nlen = FUNC_6(VAR_15->ln_name, VAR_17->linkname,
      FUNC_0(sizeof(VAR_17->linkname), sizeof(VAR_15->ln_name) - 1));
  VAR_15->ln_name[VAR_15->ln_nlen] = '\0';
  break;
 case 133:
 case 136:
 case 129:
 default:




  VAR_15->type = VAR_7;
  VAR_15->pad = FUNC_1(VAR_15->sb.st_size);
  VAR_15->skip = VAR_15->sb.st_size;
  VAR_15->sb.st_mode |= VAR_14;
  break;
 }
 return(0);
}
