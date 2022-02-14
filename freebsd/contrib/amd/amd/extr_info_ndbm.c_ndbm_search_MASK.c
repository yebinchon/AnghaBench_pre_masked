
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct stat {scalar_t__ st_mtime; } ;
typedef int mnt_map ;
typedef int dbfilename ;
typedef int DBM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct stat*) ;
 int FUNC_4 (int *,int *,char*,char**) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,char*,int) ;

int
FUNC_8(mnt_map *VAR_3, char *VAR_4, char *VAR_5, char **VAR_6, time_t *VAR_7)
{
  DBM *VAR_8;

  VAR_8 = FUNC_1(VAR_4, VAR_1, 0);
  if (VAR_8) {
    struct stat VAR_9;
    int VAR_10;







    VAR_10 = FUNC_3(FUNC_2(VAR_8), &VAR_9);

    if (!VAR_10 && *VAR_7 < VAR_9.st_mtime) {
      *VAR_7 = VAR_9.st_mtime;
      VAR_10 = -1;
    } else {
      VAR_10 = FUNC_4(VAR_3, VAR_8, VAR_5, VAR_6);
    }
    (void) FUNC_0(VAR_8);
    return VAR_10;
  }
  return VAR_2;
}
