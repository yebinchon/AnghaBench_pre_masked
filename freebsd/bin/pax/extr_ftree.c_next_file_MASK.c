
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int st_mode; scalar_t__ st_size; int st_atime; int st_mtime; int st_ino; int st_dev; } ;
struct TYPE_8__ {int fts_info; int fts_path; TYPE_1__* fts_statp; TYPE_1__ fts_statb; int fts_errno; } ;
struct TYPE_7__ {int ln_nlen; char* ln_name; size_t nlen; char* name; int org_name; int type; TYPE_1__ sb; scalar_t__ skip; scalar_t__ pad; } ;
typedef TYPE_2__ ARCHD ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_11 ;
 TYPE_4__* FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int *,int *) ;
 size_t FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int,int ,char*,...) ;
 int VAR_13 ;

int
FUNC_9(ARCHD *VAR_14)
{
 int VAR_15;
 time_t VAR_16;
 time_t VAR_17;







 if (VAR_11) {



  VAR_11 = 0;
  if (FUNC_1() < 0)
   return(-1);
 }




 for(;;) {
  if ((VAR_10 = FUNC_2(VAR_12)) == ((void*)0)) {




   if (FUNC_1() < 0)
    return(-1);
   continue;
  }




  switch(VAR_10->fts_info) {
  case 145:
  case 143:
  case 139:
  case 136:
  case 135:



   break;
  case 141:
   if (!VAR_13 || (FUNC_3(VAR_10->fts_statp->st_dev,
       VAR_10->fts_statp->st_ino, &VAR_17, &VAR_16) < 0))

    continue;
   FUNC_7(VAR_10->fts_path, VAR_17, VAR_16, 1);
   continue;
  case 144:



   FUNC_5(1,"File system cycle found at %s",VAR_10->fts_path);
   continue;
  case 142:



   FUNC_8(1, VAR_10->fts_errno,

       "Unable to read directory %s", VAR_10->fts_path);
   continue;
  case 140:



   FUNC_8(1, VAR_10->fts_errno,

       "File system traversal error");
   continue;
  case 138:
  case 137:



   FUNC_8(1, VAR_10->fts_errno,

       "Unable to access %s", VAR_10->fts_path);
   continue;
  }





  VAR_14->skip = 0;
  VAR_14->pad = 0;
  VAR_14->ln_nlen = 0;
  VAR_14->ln_name[0] = '\0';



  VAR_14->sb = *(VAR_10->fts_statp);
  switch(VAR_8 & VAR_14->sb.st_mode) {
  case 132:
   VAR_14->type = VAR_3;
   if (!VAR_13)
    break;
   FUNC_0(VAR_10->fts_path, VAR_14->sb.st_dev,
       VAR_14->sb.st_ino, VAR_14->sb.st_mtime,
       VAR_14->sb.st_atime);
   break;
  case 133:
   VAR_14->type = VAR_2;
   break;
  case 134:
   VAR_14->type = VAR_1;
   break;
  case 129:






   VAR_14->type = VAR_5;
   VAR_14->skip = VAR_14->sb.st_size;
   break;
  case 130:
   VAR_14->type = VAR_7;



   if ((VAR_15 = FUNC_6(VAR_10->fts_path, VAR_14->ln_name,
       VAR_0 - 1)) < 0) {
    FUNC_8(1, VAR_9, "Unable to read symlink %s",
        VAR_10->fts_path);
    continue;
   }




   VAR_14->ln_name[VAR_15] = '\0';
   VAR_14->ln_nlen = VAR_15;
   break;
  case 128:





   VAR_14->type = VAR_6;
   break;
  case 131:
   VAR_14->type = VAR_4;
   break;
  }
  break;
 }




 VAR_14->nlen = FUNC_4(VAR_14->name, VAR_10->fts_path, sizeof(VAR_14->name) - 1);
 VAR_14->name[VAR_14->nlen] = '\0';
 VAR_14->org_name = VAR_10->fts_path;
 return(0);
}
