
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file_system_type {int (* get_sb ) (struct file_system_type*,int,char const*,char*,struct vfsmount*) ;} ;


 int VAR_0 ;
 struct file_system_type* FUNC_0 (char*) ;
 int FUNC_1 (struct file_system_type*) ;
 int FUNC_2 (struct file_system_type*,int,char const*,char*,struct vfsmount*) ;

__attribute__((used)) static int FUNC_3(struct file_system_type *VAR_1,
    int VAR_2, const char *VAR_3,
    void *VAR_4, struct vfsmount *VAR_5)
{
 struct file_system_type *VAR_6 = FUNC_0("cgroup");
 int VAR_7 = -VAR_0;
 if (VAR_6) {
  char VAR_8[] =
   "cpuset,noprefix,"
   "release_agent=/sbin/cpuset_release_agent";
  VAR_7 = VAR_6->get_sb(VAR_6, VAR_2,
        VAR_3, VAR_8, VAR_5);
  FUNC_1(VAR_6);
 }
 return VAR_7;
}
