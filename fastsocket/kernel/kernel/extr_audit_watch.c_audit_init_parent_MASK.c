
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; } ;
struct nameidata {TYPE_2__ path; } ;
struct audit_parent {int wdata; scalar_t__ flags; int watches; } ;
typedef int s32 ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct audit_parent* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int *) ;
 struct audit_parent* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct audit_parent *FUNC_8(struct nameidata *VAR_4)
{
 struct audit_parent *VAR_5;
 s32 VAR_6;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_2);
 if (FUNC_7(!VAR_5))
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_5->watches);
 VAR_5->flags = 0;

 FUNC_5(&VAR_5->wdata);

 FUNC_3(&VAR_5->wdata);
 VAR_6 = FUNC_4(VAR_3, &VAR_5->wdata,
          VAR_4->path.dentry->d_inode, VAR_0);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_5->wdata);
  return FUNC_0(VAR_6);
 }

 return VAR_5;
}
