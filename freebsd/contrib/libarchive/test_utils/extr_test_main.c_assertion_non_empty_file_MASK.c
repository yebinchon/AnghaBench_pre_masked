
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

int
FUNC_4(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 struct stat VAR_3;

 FUNC_0(VAR_0, VAR_1);

 if (FUNC_3(VAR_2, &VAR_3) != 0) {
  FUNC_2(VAR_0, VAR_1, "Stat failed: %s", VAR_2);
  FUNC_1(((void*)0));
  return (0);
 }
 if (VAR_3.st_size == 0) {
  FUNC_2(VAR_0, VAR_1, "File empty: %s", VAR_2);
  FUNC_1(((void*)0));
  return (0);
 }
 return (1);
}
