
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long utimbuf ;
struct timeval {long tv_sec; scalar_t__ tv_usec; } ;
struct stat {long st_atime; long st_mtime; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,long*) ;
 int FUNC_4 (char const*,struct timeval*) ;

void
FUNC_5 (const char *VAR_1, const struct stat *VAR_2)
{
  int VAR_3;

  {
    long VAR_4[2];

    VAR_4[0] = VAR_2->st_atime;
    VAR_4[1] = VAR_2->st_mtime;
    VAR_3 = FUNC_3 (VAR_1, VAR_4);
  }

  if (VAR_3 != 0)
    FUNC_1 (FUNC_0("%s: cannot set time: %s"), VAR_1, FUNC_2 (VAR_0));
}
