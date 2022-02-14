
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_flags; int st_gid; int st_uid; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 char* FUNC_8 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,char*) ;
 int VAR_9 ;
 char* FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_10, const char *VAR_11, struct stat *VAR_12)
{
 int VAR_13, VAR_14;
 char VAR_15[15], *VAR_16;


 if (VAR_6)
  (void)FUNC_5(VAR_7, "remove %s? ", VAR_10);
 else {






  if (!VAR_8 || FUNC_0(VAR_12->st_mode) ||
      (!FUNC_1(VAR_11, VAR_5) &&
      !(VAR_12->st_flags & (VAR_1|VAR_2)) &&
      (!(VAR_12->st_flags & (VAR_3|VAR_4)) || !VAR_9)))
   return (1);
  FUNC_9(VAR_12->st_mode, VAR_15);
  if ((VAR_16 = FUNC_3(VAR_12->st_flags)) == ((void*)0))
   FUNC_2(1, "fflagstostr");
  (void)FUNC_5(VAR_7, "override %s%s%s/%s %s%sfor %s? ",
      VAR_15 + 1, VAR_15[10] == ' ' ? "" : " ",
      FUNC_10(VAR_12->st_uid, 0),
      FUNC_8(VAR_12->st_gid, 0),
      *VAR_16 ? VAR_16 : "", *VAR_16 ? " " : "",
      VAR_10);
  FUNC_6(VAR_16);
 }
 (void)FUNC_4(VAR_7);

 VAR_14 = VAR_13 = FUNC_7();
 while (VAR_13 != '\n' && VAR_13 != VAR_0)
  VAR_13 = FUNC_7();
 return (VAR_14 == 'y' || VAR_14 == 'Y');
}
