
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {struct dentry* mnt_root; } ;
struct qstr {char* name; void* len; } ;
struct dentry {int dummy; } ;
typedef int pid_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (struct dentry*,struct qstr*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 void* FUNC_4 (char*,int,char*,int) ;
 void* FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct vfsmount *VAR_1, pid_t VAR_2, pid_t VAR_3)
{
 struct dentry *VAR_4, *VAR_5, *VAR_6;
 char VAR_7[VAR_0];
 struct qstr VAR_8;

 VAR_8.name = VAR_7;
 VAR_8.len = FUNC_4(VAR_7, sizeof(VAR_7), "%d", VAR_2);
 VAR_4 = FUNC_1(VAR_1->mnt_root, &VAR_8);
 if (VAR_4) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_4);
  FUNC_2(VAR_4);
 }

 VAR_8.name = VAR_7;
 VAR_8.len = FUNC_4(VAR_7, sizeof(VAR_7), "%d", VAR_3);
 VAR_5 = FUNC_1(VAR_1->mnt_root, &VAR_8);
 if (!VAR_5)
  goto out;

 VAR_8.name = "task";
 VAR_8.len = FUNC_5(VAR_8.name);
 VAR_6 = FUNC_1(VAR_5, &VAR_8);
 if (!VAR_6)
  goto out_put_leader;

 VAR_8.name = VAR_7;
 VAR_8.len = FUNC_4(VAR_7, sizeof(VAR_7), "%d", VAR_2);
 VAR_4 = FUNC_1(VAR_6, &VAR_8);
 if (VAR_4) {
  FUNC_3(VAR_4);
  FUNC_0(VAR_4);
  FUNC_2(VAR_4);
 }

 FUNC_2(VAR_6);
out_put_leader:
 FUNC_2(VAR_5);
out:
 return;
}
