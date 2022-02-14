
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct sysfs_dirent {char const* s_name; int s_flags; int s_mode; int s_active; int s_count; int s_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct sysfs_dirent*) ;
 struct sysfs_dirent* FUNC_3 (int ,int ) ;
 char* FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;

struct sysfs_dirent *FUNC_6(const char *VAR_3, umode_t VAR_4, int VAR_5)
{
 char *VAR_6 = ((void*)0);
 struct sysfs_dirent *VAR_7;

 if (VAR_5 & VAR_1) {
  VAR_3 = VAR_6 = FUNC_4(VAR_3, VAR_0);
  if (!VAR_3)
   return ((void*)0);
 }

 VAR_7 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_7)
  goto err_out1;

 if (FUNC_5(&VAR_7->s_ino))
  goto err_out2;

 FUNC_0(&VAR_7->s_count, 1);
 FUNC_0(&VAR_7->s_active, 0);

 VAR_7->s_name = VAR_3;
 VAR_7->s_mode = VAR_4;
 VAR_7->s_flags = VAR_5;

 return VAR_7;

 err_out2:
 FUNC_2(VAR_2, VAR_7);
 err_out1:
 FUNC_1(VAR_6);
 return ((void*)0);
}
