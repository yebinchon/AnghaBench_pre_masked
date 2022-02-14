
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
struct hast_resource {char* hr_localpath; int hr_localfd; int hr_local_mediasize; int hr_local_sectorsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,int ,int*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,char*) ;

int
FUNC_8(struct hast_resource *VAR_7, bool VAR_8)
{
 struct stat VAR_9;

 FUNC_0(VAR_7->hr_localpath != ((void*)0) &&
     VAR_7->hr_localpath[0] != '\0');

 if (VAR_7->hr_localfd == -1) {
  VAR_7->hr_localfd = FUNC_5(VAR_7->hr_localpath,
      VAR_8 ? VAR_5 : VAR_4);
  if (VAR_7->hr_localfd == -1) {
   FUNC_6(VAR_3, "Unable to open %s",
       VAR_7->hr_localpath);
   return (-1);
  }
 }
 if (FUNC_3(VAR_7->hr_localfd, &VAR_9) == -1) {
  FUNC_6(VAR_3, "Unable to stat %s", VAR_7->hr_localpath);
  return (-1);
 }
 if (FUNC_1(VAR_9.st_mode)) {



  if (FUNC_4(VAR_7->hr_localfd, VAR_0,
      &VAR_7->hr_local_mediasize) == -1) {
   FUNC_6(VAR_3,
       "Unable obtain provider %s mediasize",
       VAR_7->hr_localpath);
   return (-1);
  }
  if (FUNC_4(VAR_7->hr_localfd, VAR_1,
      &VAR_7->hr_local_sectorsize) == -1) {
   FUNC_6(VAR_3,
       "Unable obtain provider %s sectorsize",
       VAR_7->hr_localpath);
   return (-1);
  }
 } else if (FUNC_2(VAR_9.st_mode)) {




  VAR_7->hr_local_mediasize = VAR_9.st_size;
  VAR_7->hr_local_sectorsize = 512;
 } else {



  FUNC_7("%s is neither GEOM provider nor regular file.",
      VAR_7->hr_localpath);
  VAR_6 = VAR_2;
  return (-1);
 }
 return (0);
}
