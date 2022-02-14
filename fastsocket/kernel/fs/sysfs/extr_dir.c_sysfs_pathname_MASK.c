
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {char* s_name; struct sysfs_dirent* s_parent; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static char *FUNC_1(struct sysfs_dirent *VAR_0, char *VAR_1)
{
 if (VAR_0->s_parent) {
  FUNC_1(VAR_0->s_parent, VAR_1);
  FUNC_0(VAR_1, "/");
 }
 FUNC_0(VAR_1, VAR_0->s_name);
 return VAR_1;
}
