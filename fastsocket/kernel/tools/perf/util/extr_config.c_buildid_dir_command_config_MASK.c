
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buildid_dir_config {char* dir; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2,
          void *VAR_3)
{
 struct buildid_dir_config *VAR_4 = VAR_3;
 const char *VAR_5;


 if (!FUNC_1(VAR_1, "buildid.") && !FUNC_2(VAR_1 + 8, "dir")) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (!VAR_5)
   return -1;
  FUNC_3(VAR_4->dir, VAR_5, VAR_0-1);
  VAR_4->dir[VAR_0-1] = '\0';
 }
 return 0;
}
