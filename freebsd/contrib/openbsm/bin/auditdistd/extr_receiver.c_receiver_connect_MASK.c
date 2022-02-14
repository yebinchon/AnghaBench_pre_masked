
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint64_t ;
typedef int trail_size ;
struct stat {char st_size; int st_mode; } ;
struct TYPE_2__ {char* adh_trail_name; int adh_remote; int adh_directory; int adh_trail_dirfd; int * adh_trail_dirfp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,char*,struct stat*,int ) ;
 char FUNC_3 (char) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int ,char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_8(void)
{
 uint64_t VAR_4;
 struct stat VAR_5;

 FUNC_0(VAR_3->adh_trail_dirfp != ((void*)0));

 FUNC_7(VAR_3->adh_trail_dirfp, VAR_3->adh_trail_name,
     sizeof(VAR_3->adh_trail_name));

 if (VAR_3->adh_trail_name[0] == '\0') {
  VAR_4 = 0;
 } else {
  if (FUNC_2(VAR_3->adh_trail_dirfd, VAR_3->adh_trail_name,
      &VAR_5, VAR_0) == -1) {
   FUNC_4(VAR_1, "Unable to stat \"%s/%s\"",
       VAR_3->adh_directory, VAR_3->adh_trail_name);
  }
  if (!FUNC_1(VAR_5.st_mode)) {
   FUNC_5(VAR_1,
       "File \"%s/%s\" is not a regular file.",
       VAR_3->adh_directory, VAR_3->adh_trail_name);
  }
  VAR_4 = VAR_5.st_size;
 }
 VAR_4 = FUNC_3(VAR_4);
 if (FUNC_6(VAR_3->adh_remote, &VAR_4,
     sizeof(VAR_4)) == -1) {
  FUNC_4(VAR_2,
      "Unable to send size of the most recent trail file");
 }
 if (FUNC_6(VAR_3->adh_remote, VAR_3->adh_trail_name,
     sizeof(VAR_3->adh_trail_name)) == -1) {
  FUNC_4(VAR_2,
      "Unable to send name of the most recent trail file");
 }
}
