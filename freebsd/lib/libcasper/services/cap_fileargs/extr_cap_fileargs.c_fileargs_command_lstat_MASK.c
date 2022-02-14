
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int sb ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,char const*) ;
 int FUNC_1 (int const*,int *,int ) ;
 int * VAR_4 ;
 int FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (int *,char*,struct stat*,int) ;
 int FUNC_4 (int *,char*,char*) ;
 char* FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char const*,int *) ;

__attribute__((used)) static int
FUNC_7(const nvlist_t *VAR_5, nvlist_t *VAR_6,
    nvlist_t *VAR_7)
{
 int VAR_8;
 const char *VAR_9;
 struct stat VAR_10;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 if (!FUNC_1(VAR_5, VAR_6, VAR_1))
  return (VAR_0);

 VAR_9 = FUNC_5(VAR_6, "name");

 VAR_8 = FUNC_2(VAR_9, &VAR_10);
 if (VAR_8 < 0)
  return (VAR_3);

 if (!VAR_2 && (VAR_4 == ((void*)0) ||
     FUNC_6(VAR_9, VAR_4) == 0)) {
  FUNC_4(VAR_7, "cmd", "cache");
  FUNC_0(VAR_7, VAR_5, VAR_9);
 } else {
  FUNC_4(VAR_7, "cmd", "lstat");
 }
 FUNC_3(VAR_7, "stat", &VAR_10, sizeof(VAR_10));
 return (0);
}
