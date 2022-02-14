
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmpname ;
struct TYPE_4__ {char* name; size_t nlen; } ;
typedef TYPE_1__ ARCHD ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*) ;
 char* VAR_1 ;
 size_t FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(ARCHD *VAR_2)
{
 char VAR_3[VAR_0+2];
 int VAR_4;







 FUNC_5("\nATTENTION: %s interactive file rename operation.\n", VAR_1);

 for (;;) {
  FUNC_2(VAR_2);
  FUNC_5("Input new name, or a \".\" to keep the old name, ");
  FUNC_5("or a \"return\" to skip this file.\n");
  FUNC_5("Input > ");
  if (FUNC_6(VAR_3, sizeof(VAR_3)) < 0)
   return(-1);
  if (FUNC_3(VAR_3, "..") == 0) {
   FUNC_5("Try again, illegal file name: ..\n");
   continue;
  }
  if (FUNC_4(VAR_3) > VAR_0) {
   FUNC_5("Try again, file name too long\n");
   continue;
  }
  break;
 }




 if (VAR_3[0] == '\0') {
  FUNC_5("Skipping file.\n");
  return(1);
 }
 if ((VAR_3[0] == '.') && (VAR_3[1] == '\0')) {
  FUNC_5("Processing continues, name unchanged.\n");
  return(0);
 }






 FUNC_5("Processing continues, name changed to: %s\n", VAR_3);
 VAR_4 = FUNC_0(VAR_2->name, VAR_2->nlen, VAR_3);
 VAR_2->nlen = FUNC_1(VAR_2->name, VAR_3, sizeof(VAR_2->name) - 1);
 VAR_2->name[VAR_2->nlen] = '\0';
 if (VAR_4 < 0)
  return(-1);
 return(0);
}
