
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; } ;
typedef int mnt_map ;
typedef int dbfilename ;
typedef int DBM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,char*,int) ;

int
FUNC_8(mnt_map *VAR_3, char *VAR_4, time_t *VAR_5)
{
  DBM *VAR_6;

  VAR_6 = FUNC_2(VAR_4, VAR_1, 0);
  if (VAR_6) {
    struct stat VAR_7;
    int VAR_8;







    VAR_8 = FUNC_4(FUNC_3(VAR_6), &VAR_7);

    if (VAR_8 < 0)
      *VAR_5 = FUNC_0(((void*)0));
    else
      *VAR_5 = VAR_7.st_mtime;
    FUNC_1(VAR_6);
    return 0;
  }
  return VAR_2;
}
