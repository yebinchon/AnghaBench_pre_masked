
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct stat {int st_mode; scalar_t__ st_uid; scalar_t__ st_gid; } ;
typedef scalar_t__ gid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (int ,char const*,char*,char const*,scalar_t__) ;

int
FUNC_3(const char *VAR_5, uid_t VAR_6, gid_t VAR_7)
{
    int VAR_8 = -1;
    struct stat VAR_9;
    const char *VAR_10 = ((void*)0);

    if (FUNC_1(VAR_5, &VAR_9) < 0) {
 if (VAR_4 == VAR_0)
     VAR_8 = -2;
 else
     VAR_10 = "%s: cannot stat %s: %m";
    }
    else if (!FUNC_0(VAR_9.st_mode))
     VAR_10 = "%s: %s is not a regular file";
    else if (VAR_9.st_mode & VAR_3)
     VAR_10 = "%s: %s is world writable";
    else if ((int)VAR_6 != -1 && VAR_9.st_uid != VAR_6 && VAR_9.st_uid != 0) {
     if (VAR_6 == 0)
      VAR_10 = "%s: %s is not owned by root";
     else
      VAR_10 = "%s: %s is not owned by uid %d";
    } else if ((int)VAR_7 != -1 && VAR_9.st_gid != VAR_7 && (VAR_9.st_mode & VAR_2))
     VAR_10 = "%s: %s is group writeable by non-authorised groups";
    else
     VAR_8 = 0;
    if (VAR_10 != ((void*)0))
 FUNC_2(VAR_1, VAR_10, "_secure_path", VAR_5, VAR_6);
    return VAR_8;
}
