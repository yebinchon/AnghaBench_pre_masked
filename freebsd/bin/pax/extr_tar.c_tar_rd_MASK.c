
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef void* time_t ;
typedef void* off_t ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_5__ {int st_nlink; void* st_size; scalar_t__ st_mode; void* st_mtime; void* st_atime; void* st_ctime; scalar_t__ st_gid; scalar_t__ st_uid; } ;
struct TYPE_7__ {char* org_name; char* name; size_t nlen; size_t ln_nlen; char* ln_name; TYPE_1__ sb; void* skip; scalar_t__ pad; void* type; int * pat; } ;
struct TYPE_6__ {int linkflag; int linkname; int mtime; int size; int gid; int uid; int mode; int name; } ;
typedef TYPE_2__ HD_TAR ;
typedef TYPE_3__ ARCHD ;



 int VAR_0 ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;


 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 void* FUNC_4 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int ) ;

int
FUNC_6(ARCHD *VAR_9, char *VAR_10)
{
 HD_TAR *VAR_11;
 char *VAR_12;




 if (FUNC_5(VAR_10, VAR_0) < 0)
  return(-1);
 VAR_9->org_name = VAR_9->name;
 VAR_9->sb.st_nlink = 1;
 VAR_9->pat = ((void*)0);




 VAR_11 = (HD_TAR *)VAR_10;





 VAR_9->nlen = FUNC_4(VAR_9->name, VAR_11->name,
     FUNC_0(sizeof(VAR_11->name), sizeof(VAR_9->name)) - 1);
 VAR_9->name[VAR_9->nlen] = '\0';
 VAR_9->sb.st_mode = (mode_t)(FUNC_2(VAR_11->mode,sizeof(VAR_11->mode),VAR_1) &
     0xfff);
 VAR_9->sb.st_uid = (uid_t)FUNC_2(VAR_11->uid, sizeof(VAR_11->uid), VAR_1);
 VAR_9->sb.st_gid = (gid_t)FUNC_2(VAR_11->gid, sizeof(VAR_11->gid), VAR_1);




 VAR_9->sb.st_size = (off_t)FUNC_3(VAR_11->size, sizeof(VAR_11->size), VAR_1);
 VAR_9->sb.st_mtime = (time_t)FUNC_3(VAR_11->mtime, sizeof(VAR_11->mtime), VAR_1);

 VAR_9->sb.st_ctime = VAR_9->sb.st_atime = VAR_9->sb.st_mtime;





 VAR_12 = &(VAR_9->name[VAR_9->nlen - 1]);
 VAR_9->pad = 0;
 VAR_9->skip = 0;
 switch(VAR_11->linkflag) {
 case 128:




  VAR_9->type = VAR_5;
  VAR_9->ln_nlen = FUNC_4(VAR_9->ln_name, VAR_11->linkname,
      FUNC_0(sizeof(VAR_11->linkname), sizeof(VAR_9->ln_name)) - 1);
  VAR_9->ln_name[VAR_9->ln_nlen] = '\0';
  VAR_9->sb.st_mode |= VAR_7;
  break;
 case 130:




  VAR_9->type = VAR_3;
  VAR_9->sb.st_nlink = 2;
  VAR_9->ln_nlen = FUNC_4(VAR_9->ln_name, VAR_11->linkname,
      FUNC_0(sizeof(VAR_11->linkname), sizeof(VAR_9->ln_name)) - 1);
  VAR_9->ln_name[VAR_9->ln_nlen] = '\0';





  VAR_9->sb.st_mode |= VAR_8;
  break;
 case 131:



  VAR_9->type = VAR_2;
  VAR_9->sb.st_mode |= VAR_6;
  VAR_9->sb.st_nlink = 2;
  VAR_9->ln_name[0] = '\0';
  VAR_9->ln_nlen = 0;
  break;
 case 132:
 case 129:
 default:



  VAR_9->ln_name[0] = '\0';
  VAR_9->ln_nlen = 0;
  if (*VAR_12 == '/') {



   VAR_9->type = VAR_2;
   VAR_9->sb.st_mode |= VAR_6;
   VAR_9->sb.st_nlink = 2;
  } else {





   VAR_9->type = VAR_4;
   VAR_9->sb.st_mode |= VAR_8;
   VAR_9->pad = FUNC_1(VAR_9->sb.st_size);
   VAR_9->skip = VAR_9->sb.st_size;
  }
  break;
 }




 if (*VAR_12 == '/') {
  *VAR_12 = '\0';
  --VAR_9->nlen;
 }
 return(0);
}
