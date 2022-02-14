
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ ARCHD ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(ARCHD *VAR_0, int VAR_1)
{



 if ((VAR_1 == 0) || (VAR_1 > (int)sizeof(VAR_0->name))) {
  FUNC_0(1, "Cpio file name length %d is out of range", VAR_1);
  return(-1);
 }




 if ((FUNC_1(VAR_0->name,VAR_1) != VAR_1) || (VAR_0->name[VAR_1-1] != '\0') ||
     (VAR_0->name[0] == '\0')) {
  FUNC_0(1, "Cpio file name in header is corrupted");
  return(-1);
 }
 return(0);
}
