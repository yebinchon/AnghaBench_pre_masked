
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysfs_dirent {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute_group {int (* is_visible ) (struct kobject*,struct attribute* const,int) ;struct attribute** attrs; } ;
struct attribute {int mode; int name; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (struct sysfs_dirent*,struct kobject*,struct attribute_group const*) ;
 int FUNC_1 (struct kobject*,struct attribute* const,int) ;
 int FUNC_2 (struct sysfs_dirent*,struct attribute* const,int ,int) ;
 int FUNC_3 (struct sysfs_dirent*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sysfs_dirent *VAR_1, struct kobject *VAR_2,
   const struct attribute_group *VAR_3, int VAR_4)
{
 struct attribute *const* VAR_5;
 int VAR_6 = 0, VAR_7;

 for (VAR_7 = 0, VAR_5 = VAR_3->attrs; *VAR_5 && !VAR_6; VAR_7++, VAR_5++) {
  mode_t VAR_8 = 0;




  if (VAR_4)
   FUNC_3(VAR_1, (*VAR_5)->name);
  if (VAR_3->is_visible) {
   VAR_8 = VAR_3->is_visible(VAR_2, *VAR_5, VAR_7);
   if (!VAR_8)
    continue;
  }
  VAR_6 = FUNC_2(VAR_1, *VAR_5, VAR_0,
         (*VAR_5)->mode | VAR_8);
  if (FUNC_4(VAR_6))
   break;
 }
 if (VAR_6)
  FUNC_0(VAR_1, VAR_2, VAR_3);
 return VAR_6;
}
