
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pid_namespace {int dummy; } ;
struct nameidata {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
typedef int pid_t ;
struct TYPE_2__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nameidata*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,struct pid_namespace*) ;

__attribute__((used)) static void *FUNC_5(struct dentry *VAR_4, struct nameidata *VAR_5)
{
 struct pid_namespace *VAR_6 = VAR_4->d_sb->s_fs_info;
 pid_t VAR_7 = FUNC_4(VAR_3, VAR_6);
 char *VAR_8 = FUNC_0(-VAR_0);
 if (VAR_7) {

  VAR_8 = FUNC_1(12, VAR_2);
  if (!VAR_8)
   VAR_8 = FUNC_0(-VAR_1);
  else
   FUNC_3(VAR_8, "%d", VAR_7);
 }
 FUNC_2(VAR_5, VAR_8);
 return ((void*)0);
}
