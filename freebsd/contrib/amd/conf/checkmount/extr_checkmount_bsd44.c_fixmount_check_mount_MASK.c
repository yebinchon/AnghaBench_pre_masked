
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_mntfromname; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct statfs**,int ) ;
 scalar_t__ FUNC_3 (int ,char*,struct in_addr) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,char) ;

int
FUNC_6(char *VAR_1, struct in_addr VAR_2, char *VAR_3)
{
  struct statfs *VAR_4, *VAR_5;
  int VAR_6, VAR_7;
  char *VAR_8;


  VAR_6 = FUNC_2(&VAR_4, VAR_0);
  if (VAR_6 <= 0) {
    FUNC_4("getmntinfo");
    FUNC_1(1);
  }

  VAR_5 = VAR_4;
  for (VAR_7=0; VAR_7<VAR_6; ++VAR_7) {
    if ((VAR_8 = FUNC_5(VAR_5->f_mntfromname, ':'))) {
      *VAR_8 = '\0';
      if (FUNC_0(VAR_8 + 1, VAR_3) &&
   FUNC_3(VAR_5->f_mntfromname, VAR_1, VAR_2))
 return 1;
    }
  }

  return 0;
}
