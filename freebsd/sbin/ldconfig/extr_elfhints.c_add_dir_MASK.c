
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 int FUNC_0 (int,char*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,struct stat*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_6, const char *VAR_7, int VAR_8)
{
 struct stat VAR_9;
 int VAR_10;


 if (!VAR_8 && !VAR_4) {
  if (FUNC_1(VAR_7, &VAR_9) == -1) {
   FUNC_3("%s", VAR_7);
   return;
  }
  if (VAR_9.st_uid != 0) {
   FUNC_4("%s: ignoring directory not owned by root", VAR_7);
   return;
  }
  if ((VAR_9.st_mode & VAR_2) != 0) {
   FUNC_4("%s: ignoring world-writable directory", VAR_7);
   return;
  }
  if ((VAR_9.st_mode & VAR_1) != 0) {
   FUNC_4("%s: ignoring group-writable directory", VAR_7);
   return;
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
  if (FUNC_2(VAR_3[VAR_10], VAR_7) == 0)
   return;
 if (VAR_5 >= VAR_0)
  FUNC_0(1, "\"%s\": Too many directories in path", VAR_6);
 VAR_3[VAR_5++] = VAR_7;
}
