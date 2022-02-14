
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct stat {int st_mode; int st_mtime; scalar_t__ st_size; scalar_t__ st_rdev; scalar_t__ st_gid; scalar_t__ st_uid; int st_nlink; int st_blocks; int st_ino; } ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
struct fileinfo {char* mode; int * link; int * filename; int * date; int * size; int * minor; int * major; int * group; int * user; int n_link; int bsize; int inode; struct stat st; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int **,char*,...) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 struct group* FUNC_10 (scalar_t__) ;
 struct passwd* FUNC_11 (scalar_t__) ;
 struct tm* FUNC_12 (int*) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int *,char*,char const*,int ) ;
 int FUNC_17 (char*,char*) ;
 void* FUNC_18 (char const*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,int,char*,struct tm*) ;
 char* FUNC_21 (char const*,char) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int
FUNC_24(FILE *VAR_12, const char *VAR_13, struct fileinfo *VAR_14, int VAR_15)
{
    char VAR_16[128];
    int VAR_17 = 0;
    struct stat *VAR_18 = &VAR_14->st;

    VAR_14->inode = VAR_18->st_ino;
    VAR_14->bsize = FUNC_9(VAR_18->st_blocks);

    if(FUNC_2(VAR_18->st_mode)) {
 VAR_14->mode[0] = 'd';
 VAR_17 = '/';
    }
    else if(FUNC_1(VAR_18->st_mode))
 VAR_14->mode[0] = 'c';
    else if(FUNC_0(VAR_18->st_mode))
 VAR_14->mode[0] = 'b';
    else if(FUNC_5(VAR_18->st_mode)) {
 VAR_14->mode[0] = '-';
 if(VAR_18->st_mode & (VAR_10 | VAR_8 | VAR_9))
     VAR_17 = '*';
    }
    else if(FUNC_3(VAR_18->st_mode)) {
 VAR_14->mode[0] = 'p';
 VAR_17 = '|';
    }
    else if(FUNC_4(VAR_18->st_mode)) {
 VAR_14->mode[0] = 'l';
 VAR_17 = '@';
    }
    else if(FUNC_6(VAR_18->st_mode)) {
 VAR_14->mode[0] = 's';
 VAR_17 = '=';
    }






    else
 VAR_14->mode[0] = '?';
    {
 char *VAR_19[] = { "---", "--x", "-w-", "-wx",
        "r--", "r-x", "rw-", "rwx" };
 FUNC_17(VAR_14->mode + 1, VAR_19[(VAR_18->st_mode & VAR_4) >> 6]);
 FUNC_17(VAR_14->mode + 4, VAR_19[(VAR_18->st_mode & VAR_2) >> 3]);
 FUNC_17(VAR_14->mode + 7, VAR_19[(VAR_18->st_mode & VAR_3) >> 0]);
 if((VAR_18->st_mode & VAR_7)) {
     if((VAR_18->st_mode & VAR_10))
  VAR_14->mode[3] = 's';
     else
  VAR_14->mode[3] = 'S';
 }
 if((VAR_18->st_mode & VAR_5)) {
     if((VAR_18->st_mode & VAR_8))
  VAR_14->mode[6] = 's';
     else
  VAR_14->mode[6] = 'S';
 }
 if((VAR_18->st_mode & VAR_6)) {
     if((VAR_18->st_mode & VAR_9))
  VAR_14->mode[9] = 't';
     else
  VAR_14->mode[9] = 'T';
 }
    }
    VAR_14->n_link = VAR_18->st_nlink;
    {
 struct passwd *VAR_20;
 VAR_20 = FUNC_11(VAR_18->st_uid);
 if(VAR_20 == ((void*)0)) {
     if (FUNC_8(&VAR_14->user, "%u", (unsigned)VAR_18->st_uid) == -1)
  VAR_14->user = ((void*)0);
 } else
     VAR_14->user = FUNC_18(VAR_20->pw_name);
 if (VAR_14->user == ((void*)0)) {
     FUNC_22(VAR_0, "out of memory");
     return -1;
 }
    }
    {
 struct group *VAR_21;
 VAR_21 = FUNC_10(VAR_18->st_gid);
 if(VAR_21 == ((void*)0)) {
     if (FUNC_8(&VAR_14->group, "%u", (unsigned)VAR_18->st_gid) == -1)
  VAR_14->group = ((void*)0);
 } else
     VAR_14->group = FUNC_18(VAR_21->gr_name);
 if (VAR_14->group == ((void*)0)) {
     FUNC_22(VAR_0, "out of memory");
     return -1;
 }
    }

    if(FUNC_1(VAR_18->st_mode) || FUNC_0(VAR_18->st_mode)) {







 if (FUNC_8(&VAR_14->major, "%u", (unsigned)VAR_18->st_rdev) == -1)
     VAR_14->major = ((void*)0);
 if (FUNC_8(&VAR_14->minor, "%u", 0) == -1)
     VAR_14->minor = ((void*)0);

 if (VAR_14->major == ((void*)0) || VAR_14->minor == ((void*)0)) {
     FUNC_22(VAR_0, "out of memory");
     return -1;
 }
    } else {
 if (FUNC_8(&VAR_14->size, "%lu", (unsigned long)VAR_18->st_size) == -1)
     VAR_14->size = ((void*)0);
    }

    {
 time_t VAR_22 = FUNC_23(((void*)0));
 time_t VAR_23 = VAR_18->st_mtime;
 struct tm *VAR_24 = FUNC_12(&VAR_23);
 if((VAR_22 - VAR_23 > 6*30*24*60*60) ||
    (VAR_23 - VAR_22 > 6*30*24*60*60))
     FUNC_20(VAR_16, sizeof(VAR_16), "%b %e  %Y", VAR_24);
 else
     FUNC_20(VAR_16, sizeof(VAR_16), "%b %e %H:%M", VAR_24);
 VAR_14->date = FUNC_18(VAR_16);
 if (VAR_14->date == ((void*)0)) {
     FUNC_22(VAR_0, "out of memory");
     return -1;
 }
    }
    {
 const char *VAR_25 = FUNC_21(VAR_13, '/');
 if(VAR_25)
     VAR_25++;
 else
     VAR_25 = VAR_13;
 if((VAR_15 & VAR_1) && VAR_17 != 0) {
     if (FUNC_8(&VAR_14->filename, "%s%c", VAR_25, VAR_17) == -1)
  VAR_14->filename = ((void*)0);
 } else
     VAR_14->filename = FUNC_18(VAR_25);
 if (VAR_14->filename == ((void*)0)) {
     FUNC_22(VAR_0, "out of memory");
     return -1;
 }
    }
    if(FUNC_4(VAR_18->st_mode)) {
 int VAR_26;
 VAR_26 = FUNC_15((char *)VAR_13, VAR_16, sizeof(VAR_16) - 1);
 if(VAR_26 >= 0) {
     VAR_16[VAR_26] = '\0';
     VAR_14->link = FUNC_18(VAR_16);
     if (VAR_14->link == ((void*)0)) {
  FUNC_22(VAR_0, "out of memory");
  return -1;
     }
 } else
     FUNC_16(VAR_12, "readlink(%s): %s", VAR_13, FUNC_19(VAR_11));
    }
    return 0;
}
