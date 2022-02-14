
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int dummy; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char*,struct config_file*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(const char* VAR_0, char** VAR_1,
 const char* VAR_2, struct config_file* VAR_3)
{
 char* VAR_4 = *VAR_1;
 if(VAR_4 && VAR_4[0]) {
  *VAR_1 = FUNC_1(VAR_4, VAR_3, 1);
  if(!*VAR_1) FUNC_0("out of memory");
  if(!FUNC_3(*VAR_1)) {
   if(VAR_2 && VAR_2[0])
    FUNC_0("%s: \"%s\" does not exist in "
     "chrootdir %s", VAR_0, VAR_4, VAR_2);
   else
    FUNC_0("%s: \"%s\" does not exist",
     VAR_0, VAR_4);
  }

  FUNC_2(VAR_4);
 }
}
