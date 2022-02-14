
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mode_t ;
struct TYPE_4__ {int st_mode; int st_gid; int st_uid; } ;
struct TYPE_5__ {int name; TYPE_1__ sb; int type; } ;
typedef TYPE_2__ ARCHD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int
FUNC_4(ARCHD *VAR_7)
{
 int VAR_8 = -1;
 mode_t VAR_9;
 int VAR_10;
 VAR_9 = VAR_7->sb.st_mode & VAR_0;
 if ((VAR_8 = FUNC_1(VAR_7->name, VAR_4 | VAR_1 | VAR_3 | VAR_2,
     VAR_9)) >= 0)
  return(VAR_8);






 if (FUNC_3(VAR_7->name, VAR_7->type) != 0)
  return(-1);

 for (;;) {





  if ((VAR_8 = FUNC_1(VAR_7->name, VAR_4 | VAR_1 | VAR_3,
      VAR_9)) >= 0)
   break;
  VAR_10 = VAR_5;
  if (VAR_6 || FUNC_0(VAR_7->name,VAR_7->sb.st_uid,VAR_7->sb.st_gid) < 0) {
   FUNC_2(1, VAR_10, "Unable to create %s", VAR_7->name);
   return(-1);
  }
 }
 return(VAR_8);
}
