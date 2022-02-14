
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {char const* chrootdir; char* directory; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,struct config_file*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

char*
FUNC_6(const char* VAR_0, struct config_file* VAR_1, int VAR_2)
{
 size_t VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2)+1;
 int VAR_4 = 0;
 char* VAR_5 = (char*)FUNC_0(VAR_3);
 if(!VAR_5)
  return ((void*)0);
 VAR_5[0] = 0;

 if(VAR_1->chrootdir && VAR_1->chrootdir[0] &&
  FUNC_5(VAR_1->chrootdir, VAR_0, FUNC_3(VAR_1->chrootdir)) == 0) {

  (void)FUNC_2(VAR_5, VAR_0, VAR_3);
  VAR_5[VAR_3-1] = 0;
  return VAR_5;
 }

 if(VAR_1->chrootdir && VAR_1->chrootdir[0]) {

  (void)FUNC_2(VAR_5, VAR_1->chrootdir, VAR_3);
  VAR_4 = 1;
 }






 if(VAR_0[0] == '/' || !VAR_2) {

 } else if(VAR_1->directory && VAR_1->directory[0]) {

  if(VAR_4 && VAR_1->directory[0] != '/')
   (void)FUNC_1(VAR_5, "/", VAR_3);

  if(VAR_1->chrootdir && VAR_1->chrootdir[0] &&
   FUNC_5(VAR_1->chrootdir, VAR_1->directory,
   FUNC_3(VAR_1->chrootdir)) == 0)
   (void)FUNC_1(VAR_5, VAR_1->directory+FUNC_3(VAR_1->chrootdir),
       VAR_3);
  else (void)FUNC_1(VAR_5, VAR_1->directory, VAR_3);
  VAR_4 = 1;
 }

 if(VAR_4 && VAR_0[0] != '/')
  (void)FUNC_1(VAR_5, "/", VAR_3);
 (void)FUNC_1(VAR_5, VAR_0, VAR_3);
 VAR_5[VAR_3-1] = 0;
 return VAR_5;
}
