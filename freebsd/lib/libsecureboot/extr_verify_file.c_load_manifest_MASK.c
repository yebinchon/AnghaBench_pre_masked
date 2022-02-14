
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; int st_mode; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct stat*,int) ;
 int FUNC_3 (char const*,char const*,char const*,char*,struct stat*) ;
 int FUNC_4 (struct stat*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 size_t FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char const*,int ) ;

int
FUNC_9(const char *VAR_6, const char *VAR_7,
    const char *VAR_8, struct stat *VAR_9)
{
 struct stat VAR_10;
 size_t VAR_11;
 int VAR_12;
 char *VAR_13;

 VAR_12 = VAR_1;
 VAR_11 = FUNC_6(VAR_6);
 if (VAR_11 > 4) {
  if (!VAR_9) {
   VAR_9 = &VAR_10;
   if (FUNC_5(VAR_6, &VAR_10) < 0 || !FUNC_1(VAR_10.st_mode))
    return (VAR_12);
  }
  VAR_12 = FUNC_4(VAR_9);
  if (VAR_12 != VAR_3) {
   return (VAR_12);
  }

  FUNC_7(VAR_9->st_mtime);
  VAR_13 = (char *)FUNC_8(VAR_6, VAR_0);
  if (VAR_13) {
   FUNC_3(VAR_6, VAR_7, VAR_8, VAR_13, VAR_9);
   FUNC_2(VAR_9, VAR_4);
   VAR_5 = 1;
   FUNC_0(3, ("loaded: %s %s %s\n",
    VAR_6, VAR_7, VAR_8));
   VAR_12 = 0;
  } else {
   VAR_12 = VAR_2;
   FUNC_2(VAR_9, VAR_12);
  }
 }
 return (VAR_12);
}
