
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct dentry* dentry; } ;
struct svc_export {int ex_flags; TYPE_2__ ex_path; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; int d_inode; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*,struct dentry*,int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, struct dentry *VAR_3)
{
 struct svc_export *VAR_4 = VAR_2;
 int VAR_5;
 struct dentry *VAR_6;
 struct dentry *VAR_7;

 if (VAR_4->ex_flags & VAR_1)
  return 1;

 VAR_6 = FUNC_1(VAR_3);
 while (VAR_6 != VAR_4->ex_path.dentry && !FUNC_0(VAR_6)) {

  int VAR_8;
  VAR_7 = FUNC_2(VAR_6);
  VAR_8 = FUNC_5(VAR_7->d_inode, VAR_0);
  if (VAR_8 < 0) {
   FUNC_4(VAR_7);
   break;
  }
  FUNC_4(VAR_6);
  VAR_6 = VAR_7;
 }
 if (VAR_6 != VAR_4->ex_path.dentry)
  FUNC_3("nfsd_acceptable failed at %p %s\n", VAR_6, VAR_6->d_name.name);
 VAR_5 = (VAR_6 == VAR_4->ex_path.dentry);
 FUNC_4(VAR_6);
 return VAR_5;
}
