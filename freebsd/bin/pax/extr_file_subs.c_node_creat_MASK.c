
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int mode_t ;
struct TYPE_5__ {int st_mode; int st_atime; int st_mtime; int st_gid; int st_uid; int st_rdev; } ;
struct TYPE_4__ {int type; TYPE_3__ sb; int name; int nlen; int ln_name; } ;
typedef TYPE_1__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (int ,char*,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int,int,char*,int ) ;
 int FUNC_14 (int ,int) ;

int
FUNC_15(ARCHD *VAR_16)
{
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20 = 0;
 mode_t VAR_21;
 struct stat VAR_22;







 VAR_21 = VAR_16->sb.st_mode & VAR_0;

 for (;;) {
  switch(VAR_16->type) {
  case 134:
   VAR_17 = FUNC_4(VAR_16->name, VAR_21);
   if (VAR_18)
    VAR_17 = 0;
   break;
  case 136:
   VAR_21 |= VAR_5;
   VAR_17 = FUNC_6(VAR_16->name, VAR_21, VAR_16->sb.st_rdev);
   break;
  case 137:
   VAR_21 |= VAR_4;
   VAR_17 = FUNC_6(VAR_16->name, VAR_21, VAR_16->sb.st_rdev);
   break;
  case 133:
   VAR_17 = FUNC_5(VAR_16->name, VAR_21);
   break;
  case 129:



   FUNC_7(0,
       "%s skipped. Sockets cannot be copied or extracted",
       VAR_16->name);
   return(-1);
  case 128:
   VAR_17 = FUNC_12(VAR_16->ln_name, VAR_16->name);
   break;
  case 135:
  case 132:
  case 131:
  case 130:
  default:



   FUNC_7(0, "%s has an unknown file type, skipping",
    VAR_16->name);
   return(-1);
  }






  if (VAR_17 == 0)
   break;




  VAR_19 = VAR_10;
  if ((VAR_18 = FUNC_14(VAR_16->name, VAR_16->type)) < 0)
   return(-1);

  if (++VAR_20 <= 1)
   continue;

  if (VAR_11 || FUNC_2(VAR_16->name,VAR_16->sb.st_uid,VAR_16->sb.st_gid) < 0) {
   FUNC_13(1, VAR_19, "Could not create: %s", VAR_16->name);
   return(-1);
  }
 }




 if (VAR_13)
  VAR_17 = FUNC_9(VAR_16->name, VAR_16->sb.st_uid, VAR_16->sb.st_gid);
 else
  VAR_17 = 0;






 if (!VAR_14 || VAR_17)
  VAR_16->sb.st_mode &= ~(VAR_3);
 if (VAR_14)
  FUNC_10(VAR_16->name, VAR_16->sb.st_mode);

 if (VAR_16->type == 134 && FUNC_11(VAR_1, VAR_9) != 0) {
  if (FUNC_0(VAR_16->name, VAR_2 | VAR_7 | VAR_8) < 0) {
   if (FUNC_3(VAR_16->name, &VAR_22) < 0) {
    FUNC_13(0, VAR_10,"Could not access %s (stat)",
        VAR_16->name);
    FUNC_10(VAR_16->name,VAR_21 | VAR_6);
   } else {






    FUNC_10(VAR_16->name,
        ((VAR_22.st_mode & VAR_0) | VAR_6));
    if (!VAR_14)
     VAR_16->sb.st_mode = VAR_22.st_mode;
   }





   FUNC_1(VAR_16->name, VAR_16->nlen, &(VAR_16->sb), 1);
  } else if (VAR_14 || VAR_12 || VAR_15)
   FUNC_1(VAR_16->name, VAR_16->nlen, &(VAR_16->sb), 0);
 }

 if (VAR_12 || VAR_15)
  FUNC_8(VAR_16->name, VAR_16->sb.st_mtime, VAR_16->sb.st_atime, 0);
 return(0);
}
