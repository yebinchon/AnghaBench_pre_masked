
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {char const* chrootdir; char* directory; } ;


 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static size_t
FUNC_2(const char* VAR_0, struct config_file* VAR_1, int VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4 = 0;
 if(VAR_1->chrootdir && VAR_1->chrootdir[0] &&
  FUNC_1(VAR_1->chrootdir, VAR_0, FUNC_0(VAR_1->chrootdir)) == 0) {

  return FUNC_0(VAR_0);
 }

 if(VAR_1->chrootdir && VAR_1->chrootdir[0]) {

  VAR_3 += FUNC_0(VAR_1->chrootdir);
  VAR_4 = 1;
 }






 if(VAR_0[0] == '/' || !VAR_2) {

 } else if(VAR_1->directory && VAR_1->directory[0]) {

  if(VAR_4 && VAR_1->directory[0] != '/')
   VAR_3++;
  if(VAR_1->chrootdir && VAR_1->chrootdir[0] &&
   FUNC_1(VAR_1->chrootdir, VAR_1->directory,
   FUNC_0(VAR_1->chrootdir)) == 0)
   VAR_3 += FUNC_0(VAR_1->directory)-FUNC_0(VAR_1->chrootdir);
  else VAR_3 += FUNC_0(VAR_1->directory);
  VAR_4 = 1;
 }

 if(VAR_4 && VAR_0[0] != '/')
  VAR_3++;
 VAR_3 += FUNC_0(VAR_0);
 return VAR_3;
}
