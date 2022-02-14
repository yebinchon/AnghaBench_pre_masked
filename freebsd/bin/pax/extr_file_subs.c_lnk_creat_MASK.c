
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_3__ {int name; int ln_name; } ;
typedef TYPE_1__ ARCHD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,struct stat*,int ,int ) ;
 int FUNC_3 (int,char*,int ) ;
 int FUNC_4 (int,int ,char*,int ,int ) ;

int
FUNC_5(ARCHD *VAR_1)
{
 struct stat VAR_2;





 if (FUNC_1(VAR_1->ln_name, &VAR_2) < 0) {
  FUNC_4(1,VAR_0,"Unable to link to %s from %s", VAR_1->ln_name,
      VAR_1->name);
  return(-1);
 }

 if (FUNC_0(VAR_2.st_mode)) {
  FUNC_3(1, "A hard link to the directory %s is not allowed",
      VAR_1->ln_name);
  return(-1);
 }

 return(FUNC_2(VAR_1->ln_name, &VAR_2, VAR_1->name, 0));
}
