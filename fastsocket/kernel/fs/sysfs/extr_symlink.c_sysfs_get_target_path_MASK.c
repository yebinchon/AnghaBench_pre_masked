
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {struct sysfs_dirent* s_parent; int s_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct sysfs_dirent *VAR_3,
     struct sysfs_dirent *VAR_4, char *VAR_5)
{
 struct sysfs_dirent *VAR_6, *VAR_7;
 char *VAR_8 = VAR_5;
 int VAR_9 = 0;


 VAR_6 = VAR_3;
 while (VAR_6->s_parent) {
  VAR_7 = VAR_4->s_parent;
  while (VAR_7->s_parent && VAR_6 != VAR_7)
   VAR_7 = VAR_7->s_parent;

  if (VAR_6 == VAR_7)
   break;

  FUNC_0(VAR_8, "../");
  VAR_8 += 3;
  VAR_6 = VAR_6->s_parent;
 }


 VAR_7 = VAR_4;
 while (VAR_7->s_parent && VAR_7 != VAR_6) {
  VAR_9 += FUNC_1(VAR_7->s_name) + 1;
  VAR_7 = VAR_7->s_parent;
 }


 if (VAR_9 < 2)
  return -VAR_0;
 VAR_9--;
 if ((VAR_8 - VAR_5) + VAR_9 > VAR_2)
  return -VAR_1;


 VAR_7 = VAR_4;
 while (VAR_7->s_parent && VAR_7 != VAR_6) {
  int VAR_10 = FUNC_1(VAR_7->s_name);

  VAR_9 -= VAR_10;
  FUNC_2(VAR_8 + VAR_9, VAR_7->s_name, VAR_10);
  if (VAR_9)
   VAR_8[--VAR_9] = '/';

  VAR_7 = VAR_7->s_parent;
 }

 return 0;
}
