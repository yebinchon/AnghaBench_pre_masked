
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_4__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
struct TYPE_5__ {int name; TYPE_1__ sb; } ;
typedef TYPE_2__ ARCHD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int,char*,int ) ;

int
FUNC_2(ARCHD *VAR_1)
{
 struct stat VAR_2;





 if (FUNC_0(VAR_1->name, &VAR_2) < 0)
  return(1);
 if (VAR_0)
  return(0);




 if ((VAR_1->sb.st_dev == VAR_2.st_dev) && (VAR_1->sb.st_ino == VAR_2.st_ino)) {
  FUNC_1(1, "Unable to copy %s, file would overwrite itself",
      VAR_1->name);
  return(0);
 }
 return(1);
}
